#include "calc.h"

// source: https://en.wikipedia.org/wiki/Reverse_Polish_notation

std::string calculateRPN(int len, char **expression){
    
    std::stack<int> numbers;
    for (int i = 1; i < len; i++) {
        if (isNumber(expression[i])) {
            numbers.push(atoi(expression[i]));
        } else if (isOperator(expression[i])) {
            int a, b;
            b = numbers.top();
            numbers.pop();
            a = numbers.top();
            numbers.pop();
            
            int result;
            switch (*expression[i]) {
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
                    return "Incorrect expression.\n";
            }
            numbers.push(result);
        } else {
            return "Incorrect expression.\n";
        }
    }
    return std::to_string(numbers.top()) + "\n";
}
