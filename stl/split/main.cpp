#include <iostream>
#include <iterator>
#include <numeric>
#include <utility>
#include <string>
#include <map>

int main() {

    std::cout
        << "\tSpecify who ate the meal and what was the meal's cost.\n"
        << "\n\tWhen you are done, specify who paid for everyone\n"
        << "\tby writing a value that is less than 0 after his name.\n\n";

    std::map<std::string, double> Bill;
    
    double cost;
    std::string name, whoPaid;
    while (1) {
       std::cin >> name >> cost;

       if (cost < 0) {
           whoPaid = name;
           std::cout << std::endl;
           break;
       }

       Bill[name] += cost;
    }

    double total;
    for (auto& b : Bill) {
        total += b.second;
    }
    std::cout << "Your total was " << total << ".\n";

    for (auto& b : Bill) {
        if (b.first != whoPaid)
            std::cout << b.first << " owes you " << b.second << ".\n";
    }
}
