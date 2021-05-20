#include "utils.h"

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
