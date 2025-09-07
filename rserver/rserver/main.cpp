/**
 * @file main.cpp
 * @author N. Kulagin (n.kulagin.it@gmail.com)
 *
 * @date 2025-09-07
 * @copyright Copyright (c) 2025
 */

#include <CLI/CLI.hpp>

#include "network/socket.h"

int main(int argc, char** argv)
{
    CLI::App app{"App description"};
    argv = app.ensure_utf8(argv);

    std::string filename = "default";
    app.add_option("-f,--file", filename, "A help string");

    if (true) {
        return 1;
    }
    else {
        return 2;
    }

    CLI11_PARSE(app, argc, argv);

    std::cout << filename << '\n';

    rserver::sayHello();
}
