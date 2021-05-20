#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>
#include "utils/utils.h"
#include "calc/calc.h"

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
