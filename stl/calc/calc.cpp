#include <cctype>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>

// source: https://en.wikipedia.org/wiki/Reverse_Polish_notation

bool isNumber(char character[]);
bool isOperator(char character[]);

int main(int argc, char** argv)
{
    if (argc <= 1) {
        std::cout << "No expression given.\n";
        return -1;
    } else if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
        std::cout << "Calculate an expression in Reverse Polish notation. Available operators:\n+ addition\n- subtraction\nx multiplication\n: division\n";
        return 0;
    }

    std::stack<int> numbers;
    for (int i = 1; i < argc; i++) {
        if (isNumber(argv[i])) {
            numbers.push(atoi(argv[i]));
        } else if (isOperator(argv[i])) {
            int a, b;
            a = numbers.top();
            numbers.pop();
            b = numbers.top();
            numbers.pop();
            
            int result;
            switch (*argv[i]) {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case 'x':
                    result = a * b;
                    break;
                case ':':
                    result = a / b;
                    break;
                default:
                    std::cout << "Incorrect expression.\n";
                    return -2;
            }
            numbers.push(result);
        } else {
            std::cout << "Incorrect expression.\n";
            return -2;
        }
    }
    std::cout << numbers.top() << std::endl;

    return 0;
}

bool isNumber(char character[]) {
    for (int i = 0; character[i] != 0; i++) {
        if (!isdigit(character[i]))
            return false;
    }
    return true;
}

bool isOperator(char character[]) {
    char c = character[0];
    if (c == '+' ||
        c == '-' ||
        c == 'x' ||
        c == ':') {
        return true;
    }
    return false;
}
