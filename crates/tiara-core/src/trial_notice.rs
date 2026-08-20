#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TrialPage {
    Order,
    Distributors,
}

impl TrialPage {
    #[must_use]
    pub const fn url(self) -> &'static str {
        match self {
            Self::Order => "https://www.designsoftware.com/orders/order01.php?id=tina",
            Self::Distributors => {
                "http://www.designsoftware.com/home/English/start.php?page=/distribution.php"
            }
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum StartupOutcome {
    #[default]
    Continue,
    Stop,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct TrialPeriod {
    pub elapsed_days: u32,
    pub total_days: u32,
}

impl TrialPeriod {
    #[must_use]
    pub const fn remaining_days(self) -> u32 {
        self.total_days.saturating_sub(self.elapsed_days)
    }
}

#[cfg(test)]
mod tests {
    use super::{StartupOutcome, TrialPage, TrialPeriod};

    #[test]
    fn typed_pages_keep_the_recovered_fixed_urls() {
        assert_eq!(
            TrialPage::Order.url(),
            "https://www.designsoftware.com/orders/order01.php?id=tina"
        );
        assert_eq!(
            TrialPage::Distributors.url(),
            "http://www.designsoftware.com/home/English/start.php?page=/distribution.php"
        );
    }

    #[test]
    fn remaining_trial_days_saturate_and_default_to_continue() {
        assert_eq!(
            TrialPeriod {
                elapsed_days: 5,
                total_days: 30,
            }
            .remaining_days(),
            25
        );
        assert_eq!(
            TrialPeriod {
                elapsed_days: 31,
                total_days: 30,
            }
            .remaining_days(),
            0
        );
        assert_eq!(StartupOutcome::default(), StartupOutcome::Continue);
    }
}
