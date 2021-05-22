#include "../include/iterator.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>

Container::Container(int s) {
    size = s;
    data = new int[size];
}

Container::Container(int s, int d[]) {
    size = s;
    data = new int[size];
    std::copy(d, d+size, data);
}

Container::~Container() { delete[] data; }

Container::Iterator Container::begin() {
    return Iterator(&data[0]);
}

Container::Iterator Container::end() {
    return Iterator(&data[size]);
}

int Container::getSize() {
    return size;
}

int* Container::getData() {
    return data;
} 
