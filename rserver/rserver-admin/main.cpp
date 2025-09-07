#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

#include "network/socket.h"

int main()
{
    rserver::sayHello();

    using namespace ftxui;

    Element document = hbox({
        text("left") | border,
        text("middle") | border | flex,
        text("right") | border,
    });

    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    Render(screen, document);
    screen.Print();
}
