#include "HEADER.hh"
#include <iostream>

int main(int argc, char **argv)
{
    std::cout << argv[argc - 1];
    return 0;
}