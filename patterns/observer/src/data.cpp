#include "../include/data.h"

void Data::updateFirst(int value) {
    arr[0] = value;
    notifyObservers();
}

void Data::updateSecond(int value) {
    arr[1] = value;
    notifyObservers();
}

int Data::getFirst() {
    return arr[0];
}

int Data::getSecond() {
    return arr[1];
}
