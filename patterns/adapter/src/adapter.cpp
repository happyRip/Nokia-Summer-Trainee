#include "../include/adapter.hpp"
#include <cstdio>

std::string Target::Request() {
    return "foo";
}

Adaptee::Adaptee() {
    value_ = 0;
}

Adaptee::Adaptee(int value) {
    value_ = value;
}

int Adaptee::getValue() {
    return value_;
}

void Adaptee::setValue(int value) {
    value_ = value;
}

Adapter::~Adapter() {
    delete adaptee_;
}

std::string Adapter::Request() {
    int result = adaptee_ -> getValue();
    return std::to_string(result);
}

void Client::printString(std::string message) {
    printf("%s\n", message.c_str());
}
