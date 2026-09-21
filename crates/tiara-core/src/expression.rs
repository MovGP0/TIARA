//! Working out what an expression comes to.
//!
//! The global parameters are written as expressions - `2*Vcc`, `1k`,
//! `sqrt(2)*Vin/2` - and until now nothing in the port could work one out:
//! the trait was there and only the tests implemented it, by parsing a bare
//! number. This is the engine behind it.
//!
//! It is the port's own, not a recovery of the original's parser. What it
//! accepts is what an electronics program has to accept for the expressions
//! people actually write: the four operators and a power, brackets, a leading
//! minus, the usual functions, and numbers with the engineering suffixes -
//! `1k`, `4u7` is not accepted but `4.7u` is, `1meg` rather than `1M` for a
//! million, since `M` means a thousandth in SPICE and getting that wrong by a
//! factor of a billion is not a small mistake.
//!
//! Names are looked up case-insensitively, because the parameter editor
//! already refuses two parameters whose names differ only in case.

use std::collections::BTreeMap;

/// What went wrong.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// Something was expected and the expression ended instead.
    EndedTooSoon,
    /// A character that means nothing here.
    Unexpected(char),
    /// A number that could not be read.
    NotANumber(String),
    /// A name nothing in the context defines.
    Unknown(String),
    /// A function nothing defines, or one given the wrong number of
    /// arguments.
    NoSuchFunction(String),
    /// A bracket that was opened and not closed, or the other way round.
    Unbalanced,
    /// Something was left over after a complete expression.
    LeftOver(String),
    /// A name that is defined in terms of itself, however far round.
    Circular(String),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::EndedTooSoon => write!(f, "the expression ends too soon"),
            Self::Unexpected(what) => write!(f, "'{what}' means nothing here"),
            Self::NotANumber(what) => write!(f, "'{what}' is not a number"),
            Self::Unknown(name) => write!(f, "nothing defines '{name}'"),
            Self::NoSuchFunction(name) => write!(f, "there is no function '{name}'"),
            Self::Unbalanced => write!(f, "the brackets do not match"),
            Self::LeftOver(what) => write!(f, "'{what}' is left over"),
            Self::Circular(name) => write!(f, "'{name}' is defined in terms of itself"),
        }
    }
}

impl std::error::Error for Error {}

/// The engineering suffixes, longest first so that `meg` is read before `m`.
///
/// `M` on its own is a thousandth, as it is in SPICE, and a million is `meg`.
const SUFFIXES: [(&str, f64); 10] = [
    ("meg", 1e6),
    ("mil", 25.4e-6),
    ("t", 1e12),
    ("g", 1e9),
    ("k", 1e3),
    ("m", 1e-3),
    ("u", 1e-6),
    ("n", 1e-9),
    ("p", 1e-12),
    ("f", 1e-15),
];

/// What a name stands for while an expression is worked out.
pub type Names = BTreeMap<String, f64>;

/// Works out what an expression comes to, with nothing defined.
///
/// # Errors
///
/// Whatever [`Error`] says went wrong.
pub fn evaluate(expression: &str) -> Result<f64, Error> {
    evaluate_with(expression, &Names::new())
}

/// Works out what an expression comes to, with names to look up.
///
/// # Errors
///
/// Whatever [`Error`] says went wrong.
pub fn evaluate_with(expression: &str, names: &Names) -> Result<f64, Error> {
    let lowered: Names = names
        .iter()
        .map(|(name, value)| (name.to_lowercase(), *value))
        .collect();
    let mut reader = Reader {
        text: expression.chars().collect(),
        at: 0,
        names: &lowered,
    };
    reader.skip_space();
    let value = reader.sum()?;
    reader.skip_space();
    if reader.at < reader.text.len() {
        return Err(Error::LeftOver(reader.text[reader.at..].iter().collect()));
    }
    Ok(value)
}

/// Where in an expression the reading has got to.
struct Reader<'a> {
    text: Vec<char>,
    at: usize,
    names: &'a Names,
}

impl Reader<'_> {
    /// What is at the reading position, if anything.
    fn peek(&self) -> Option<char> {
        self.text.get(self.at).copied()
    }

    fn skip_space(&mut self) {
        while self.peek().is_some_and(char::is_whitespace) {
            self.at += 1;
        }
    }

    /// Whether the next character is this one, and steps past it if so.
    fn takes(&mut self, wanted: char) -> bool {
        if self.peek() == Some(wanted) {
            self.at += 1;
            self.skip_space();
            return true;
        }
        false
    }

    /// Additions and subtractions, which bind least tightly.
    fn sum(&mut self) -> Result<f64, Error> {
        let mut value = self.product()?;
        loop {
            if self.takes('+') {
                value += self.product()?;
            } else if self.takes('-') {
                value -= self.product()?;
            } else {
                return Ok(value);
            }
        }
    }

    /// Multiplications and divisions.
    fn product(&mut self) -> Result<f64, Error> {
        let mut value = self.sign()?;
        loop {
            if self.takes('*') {
                value *= self.sign()?;
            } else if self.takes('/') {
                value /= self.sign()?;
            } else {
                return Ok(value);
            }
        }
    }

    /// A leading plus or minus.
    ///
    /// Looser than a power, so `-2^2` is minus four rather than four, which
    /// is what every calculator and every SPICE says it is.
    fn sign(&mut self) -> Result<f64, Error> {
        if self.takes('-') {
            return Ok(-self.sign()?);
        }
        if self.takes('+') {
            return self.sign();
        }
        self.power()
    }

    /// Powers, which group to the right: `2^3^2` is two to the ninth.
    ///
    /// The exponent is read as a signed thing, so `2^-3` is an eighth.
    fn power(&mut self) -> Result<f64, Error> {
        let base = self.term()?;
        if self.takes('^') {
            let exponent = self.sign()?;
            return Ok(base.powf(exponent));
        }
        Ok(base)
    }

    /// A number, a name, a function call, or a bracketed expression.
    fn term(&mut self) -> Result<f64, Error> {
        self.skip_space();
        let Some(next) = self.peek() else {
            return Err(Error::EndedTooSoon);
        };

        if next == '(' {
            self.at += 1;
            self.skip_space();
            let value = self.sum()?;
            self.skip_space();
            if !self.takes(')') {
                return Err(Error::Unbalanced);
            }
            return Ok(value);
        }
        if next.is_ascii_digit() || next == '.' {
            return self.number();
        }
        if next.is_alphabetic() || next == '_' {
            return self.name_or_call();
        }
        Err(Error::Unexpected(next))
    }

    /// A number, with an engineering suffix where it has one.
    fn number(&mut self) -> Result<f64, Error> {
        let from = self.at;
        while self.peek().is_some_and(|c| c.is_ascii_digit() || c == '.') {
            self.at += 1;
        }
        // An exponent, which is part of the number and not a suffix.
        if matches!(self.peek(), Some('e' | 'E')) {
            let before = self.at;
            self.at += 1;
            if matches!(self.peek(), Some('+' | '-')) {
                self.at += 1;
            }
            if self.peek().is_some_and(|c| c.is_ascii_digit()) {
                while self.peek().is_some_and(|c| c.is_ascii_digit()) {
                    self.at += 1;
                }
            } else {
                // Not an exponent after all - `2e` is two with no suffix that
                // means anything, and the letters are read as one below.
                self.at = before;
            }
        }
        let digits: String = self.text[from..self.at].iter().collect();
        let value: f64 = digits
            .parse()
            .map_err(|_| Error::NotANumber(digits.clone()))?;

        // Letters straight after a number are its suffix. The rest of the
        // word is ignored, which is what lets `1kOhm` and `10uF` be read.
        let letters_from = self.at;
        while self.peek().is_some_and(char::is_alphanumeric) {
            self.at += 1;
        }
        let letters: String = self.text[letters_from..self.at]
            .iter()
            .collect::<String>()
            .to_lowercase();
        self.skip_space();

        if letters.is_empty() {
            return Ok(value);
        }
        for (suffix, scale) in SUFFIXES {
            if letters.starts_with(suffix) {
                return Ok(value * scale);
            }
        }
        // Letters that are not a suffix - `10Ohm` - are a unit, and a unit
        // does not change what the number is worth.
        Ok(value)
    }

    /// A name, or a function applied to arguments.
    fn name_or_call(&mut self) -> Result<f64, Error> {
        let from = self.at;
        while self.peek().is_some_and(|c| c.is_alphanumeric() || c == '_') {
            self.at += 1;
        }
        let word: String = self.text[from..self.at].iter().collect();
        let lowered = word.to_lowercase();
        self.skip_space();

        if self.peek() == Some('(') {
            self.at += 1;
            self.skip_space();
            let mut arguments = Vec::new();
            if self.peek() != Some(')') {
                loop {
                    arguments.push(self.sum()?);
                    self.skip_space();
                    if !self.takes(',') {
                        break;
                    }
                }
            }
            if !self.takes(')') {
                return Err(Error::Unbalanced);
            }
            return apply(&lowered, &arguments);
        }

        if let Some(value) = self.names.get(&lowered) {
            return Ok(*value);
        }
        if let Some(value) = constant(&lowered) {
            return Ok(value);
        }
        Err(Error::Unknown(word))
    }
}

/// The names that always stand for something.
fn constant(name: &str) -> Option<f64> {
    match name {
        "pi" => Some(std::f64::consts::PI),
        "e" => Some(std::f64::consts::E),
        _ => None,
    }
}

/// A function applied to its arguments.
fn apply(name: &str, arguments: &[f64]) -> Result<f64, Error> {
    let one = |f: fn(f64) -> f64| -> Result<f64, Error> {
        match arguments {
            [only] => Ok(f(*only)),
            _ => Err(Error::NoSuchFunction(name.to_owned())),
        }
    };
    let two = |f: fn(f64, f64) -> f64| -> Result<f64, Error> {
        match arguments {
            [left, right] => Ok(f(*left, *right)),
            _ => Err(Error::NoSuchFunction(name.to_owned())),
        }
    };

    match name {
        "sin" => one(f64::sin),
        "cos" => one(f64::cos),
        "tan" => one(f64::tan),
        "asin" => one(f64::asin),
        "acos" => one(f64::acos),
        "atan" => one(f64::atan),
        "sinh" => one(f64::sinh),
        "cosh" => one(f64::cosh),
        "tanh" => one(f64::tanh),
        "exp" => one(f64::exp),
        "ln" => one(f64::ln),
        "log" | "log10" => one(f64::log10),
        "sqrt" => one(f64::sqrt),
        "abs" => one(f64::abs),
        "floor" => one(f64::floor),
        "ceil" => one(f64::ceil),
        "round" => one(f64::round),
        "sgn" => one(f64::signum),
        "atan2" => two(f64::atan2),
        "pow" => two(f64::powf),
        "min" => two(f64::min),
        "max" => two(f64::max),
        _ => Err(Error::NoSuchFunction(name.to_owned())),
    }
}

#[cfg(test)]
mod tests {
    use super::{Error, Names, evaluate, evaluate_with};

    /// Close enough for a number that went through floating point.
    fn near(left: f64, right: f64) -> bool {
        (left - right).abs() < 1e-9 * right.abs().max(1.0)
    }

    #[test]
    fn a_bare_number_is_itself() {
        assert!(near(evaluate("42").unwrap(), 42.0));
        assert!(near(evaluate("4.7").unwrap(), 4.7));
        assert!(near(evaluate(" 2.5e3 ").unwrap(), 2500.0));
        assert!(near(evaluate("1e-3").unwrap(), 0.001));
    }

    #[test]
    fn the_operators_bind_the_way_arithmetic_does() {
        assert!(near(evaluate("2+3*4").unwrap(), 14.0));
        assert!(near(evaluate("(2+3)*4").unwrap(), 20.0));
        assert!(near(evaluate("10/4").unwrap(), 2.5));
        assert!(near(evaluate("10-4-3").unwrap(), 3.0));
        assert!(near(evaluate("2^3").unwrap(), 8.0));
        // A power groups to the right, so this is two to the ninth.
        assert!(near(evaluate("2^3^2").unwrap(), 512.0));
    }

    #[test]
    fn a_leading_minus_is_a_sign_and_not_a_subtraction() {
        assert!(near(evaluate("-5").unwrap(), -5.0));
        assert!(near(evaluate("3*-2").unwrap(), -6.0));
        assert!(near(evaluate("--4").unwrap(), 4.0));
        assert!(near(evaluate("-2^2").unwrap(), -4.0));
        assert!(near(evaluate("2^-3").unwrap(), 0.125));
    }

    #[test]
    fn the_engineering_suffixes_mean_what_they_do_in_spice() {
        assert!(near(evaluate("1k").unwrap(), 1e3));
        assert!(near(evaluate("4.7K").unwrap(), 4700.0));
        assert!(near(evaluate("10u").unwrap(), 1e-5));
        assert!(near(evaluate("100n").unwrap(), 1e-7));
        assert!(near(evaluate("2p").unwrap(), 2e-12));
        assert!(near(evaluate("3G").unwrap(), 3e9));
    }

    #[test]
    fn a_million_is_meg_because_m_is_a_thousandth() {
        assert!(near(evaluate("1m").unwrap(), 1e-3));
        assert!(near(evaluate("1meg").unwrap(), 1e6));
        assert!(near(evaluate("1MEG").unwrap(), 1e6));
        // And the one that would otherwise be wrong by a billion.
        assert!(near(evaluate("2M").unwrap(), 2e-3));
    }

    #[test]
    fn a_unit_after_a_number_does_not_change_what_it_is_worth() {
        assert!(near(evaluate("10Ohm").unwrap(), 10.0));
        assert!(near(evaluate("1kOhm").unwrap(), 1000.0));
        assert!(near(evaluate("10uF").unwrap(), 1e-5));
    }

    #[test]
    fn a_name_stands_for_what_it_was_given() {
        let mut names = Names::new();
        names.insert("Vcc".to_owned(), 12.0);
        names.insert("gain".to_owned(), 2.5);

        assert!(near(evaluate_with("Vcc", &names).unwrap(), 12.0));
        assert!(near(evaluate_with("2*Vcc", &names).unwrap(), 24.0));
        // Case does not matter, because the editor already refuses two names
        // that differ only in case.
        assert!(near(evaluate_with("vcc*GAIN", &names).unwrap(), 30.0));
    }

    #[test]
    fn a_name_nothing_defines_says_so() {
        assert_eq!(evaluate("Vcc"), Err(Error::Unknown("Vcc".to_owned())));
    }

    #[test]
    fn the_usual_functions_are_there() {
        assert!(near(evaluate("sqrt(2)").unwrap(), std::f64::consts::SQRT_2));
        assert!(near(evaluate("abs(-3)").unwrap(), 3.0));
        assert!(near(evaluate("max(2,7)").unwrap(), 7.0));
        assert!(near(evaluate("min(2,7)").unwrap(), 2.0));
        assert!(near(evaluate("pow(2,10)").unwrap(), 1024.0));
        assert!(near(evaluate("log(1000)").unwrap(), 3.0));
        assert!(near(evaluate("exp(0)").unwrap(), 1.0));
        assert!(near(evaluate("sin(0)").unwrap(), 0.0));
        assert!(near(evaluate("cos(pi)").unwrap(), -1.0));
    }

    #[test]
    fn a_function_nothing_defines_says_so() {
        assert_eq!(
            evaluate("wobble(2)"),
            Err(Error::NoSuchFunction("wobble".to_owned()))
        );
        // And one given the wrong number of arguments.
        assert_eq!(
            evaluate("sqrt(1,2)"),
            Err(Error::NoSuchFunction("sqrt".to_owned()))
        );
    }

    #[test]
    fn what_is_wrong_is_said_rather_than_guessed_at() {
        assert_eq!(evaluate(""), Err(Error::EndedTooSoon));
        assert_eq!(evaluate("2+"), Err(Error::EndedTooSoon));
        assert_eq!(evaluate("(2+3"), Err(Error::Unbalanced));
        assert_eq!(evaluate("2 3"), Err(Error::LeftOver("3".to_owned())));
        assert_eq!(evaluate("#"), Err(Error::Unexpected('#')));
    }

    #[test]
    fn an_expression_of_several_parts_comes_out_whole() {
        let mut names = Names::new();
        names.insert("Vin".to_owned(), 5.0);
        names.insert("R".to_owned(), 1e3);

        assert!(near(
            evaluate_with("sqrt(2)*Vin/2", &names).unwrap(),
            std::f64::consts::SQRT_2 * 2.5
        ));
        assert!(near(evaluate_with("Vin/R", &names).unwrap(), 5e-3));
        assert!(near(
            evaluate_with("(Vin + 1) * 2k", &names).unwrap(),
            12_000.0
        ));
    }
}
