use iced::widget::{button, column, container, horizontal_rule, horizontal_space, row, text};
use iced::{Alignment, Background, Border, Color, Element, Length, Theme};
use iced_aw::menu::{Item, Menu, MenuBar};

pub fn frame<'a, M>(
    title: &'a str,
    menu: Element<'a, M>,
    toolbar: Element<'a, M>,
    body: Element<'a, M>,
    status: &'a str,
) -> Element<'a, M>
where
    M: Clone + 'a,
{
    let heading =
        container(row![text(title).size(18), horizontal_space(),].align_y(Alignment::Center))
            .padding([5, 8])
            .width(Length::Fill)
            .style(toolbar_style);

    container(
        column![
            heading,
            menu,
            horizontal_rule(1),
            toolbar,
            body,
            status_bar(status),
        ]
        .width(Length::Fill)
        .height(Length::Fill),
    )
    .width(Length::Fill)
    .height(Length::Fill)
    .into()
}

pub fn menu_bar<'a, M>(groups: &'a [(&'a str, &'a [&'a str])], message: M) -> Element<'a, M>
where
    M: Clone + 'a,
{
    let roots = groups
        .iter()
        .map(|(label, labels)| {
            let items = labels
                .iter()
                .map(|item| {
                    Item::new(
                        button(text(*item))
                            .padding([4, 10])
                            .width(Length::Fill)
                            .on_press(message.clone()),
                    )
                })
                .collect();
            let menu = Menu::new(items).max_width(240.0).offset(4.0).spacing(1.0);

            Item::with_menu(
                button(text(*label))
                    .padding([3, 9])
                    .on_press(message.clone()),
                menu,
            )
        })
        .collect();

    container(MenuBar::new(roots))
        .padding([1, 4])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
}

pub fn empty_menu<'a, M>() -> Element<'a, M>
where
    M: 'a,
{
    container(horizontal_space())
        .height(Length::Fixed(1.0))
        .width(Length::Fill)
        .into()
}

pub fn toolbar<'a, M>(labels: &'a [&'a str], message: M) -> Element<'a, M>
where
    M: Clone + 'a,
{
    let buttons = labels.iter().map(|label| {
        Element::from(
            button(text(*label))
                .padding([5, 8])
                .on_press(message.clone()),
        )
    });

    container(row(buttons).spacing(4))
        .padding([3, 6])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
}

pub fn surface<'a, M>(label: &'a str) -> Element<'a, M>
where
    M: 'a,
{
    container(text(label).color(Color::from_rgb8(120, 120, 120)))
        .center_x(Length::Fill)
        .center_y(Length::Fill)
        .width(Length::Fill)
        .height(Length::Fill)
        .style(work_area_style)
        .into()
}

fn status_bar<'a, M>(status: &'a str) -> Element<'a, M>
where
    M: 'a,
{
    container(row![text(status), horizontal_space()])
        .padding([4, 8])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
}

fn toolbar_style(_theme: &Theme) -> iced::widget::container::Style {
    iced::widget::container::Style {
        background: Some(Background::Color(Color::from_rgb8(238, 238, 238))),
        border: Border {
            color: Color::from_rgb8(188, 188, 188),
            width: 0.5,
            radius: 0.0.into(),
        },
        ..Default::default()
    }
}

fn work_area_style(_theme: &Theme) -> iced::widget::container::Style {
    iced::widget::container::Style {
        background: Some(Background::Color(Color::WHITE)),
        border: Border {
            color: Color::from_rgb8(150, 150, 150),
            width: 1.0,
            radius: 1.0.into(),
        },
        ..Default::default()
    }
}
