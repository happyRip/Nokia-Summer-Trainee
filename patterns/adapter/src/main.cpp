#include "../include/adapter.hpp"

int main() {
    Target *target = new Target;
    Adaptee *adaptee = new Adaptee(777);
    Adapter *adapter = new Adapter(adaptee);
    Client *client = new Client;

    client  ->  printString(target -> Request());
    client -> printString(adapter -> Request());
}
