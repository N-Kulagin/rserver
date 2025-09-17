/**
 * @file main.cpp
 * @author N. Kulagin (n.kulagin.it@gmail.com)
 *
 * @date 2025-09-07
 * @copyright Copyright (c) 2025
 */

#include <CLI/CLI.hpp>

#include "network/socket.h"

static void foo(int x)
{
    std::cout << x << '\n';
}

int main(int argc, char** argv)
{
    CLI::App app{"App description"};
    argv = app.ensure_utf8(argv);

    std::string filename = "default";
    app.add_option("-f,--file", filename, "A help string");

    int x;
    int y = 100;
    double z = 2.5;
    double ww = 2.5;
    double www = 3.5;
    double wwww = 4.5;
    double zzz = 3.5;
    foo(zzz);
    foo(z);
    int zz = 3.5;
    int zzzz = 3.4;

    if (true)
        return 1;
    else
        return 2;

    CLI11_PARSE(app, argc, argv);

    std::cout << filename << '\n';

    rserver::sayHello();
}
