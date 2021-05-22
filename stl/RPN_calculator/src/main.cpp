#include "../include/utils.h"
#include "../include/calc.h"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <stack>

int main(int argc, char** argv)
{
    if (argc <= 1) {
        std::cout << "No expression given.\n";
        return -1;
    } else if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
        std::cout << "Calculate an expression in Reverse Polish Notation.\n"
            << "    Available operators:\n"
            << "\t+ addition\n\t- subtraction\n\tx multiplication\n\t: division\n";
        return 0;
    }

    std::cout << calculateRPN(argc, argv);

    return 0;
}
