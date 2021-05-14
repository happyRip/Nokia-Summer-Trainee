#include <iostream>
#include <ostream>
#include <vector>

int main() {
    std::vector<int> v;

    std::cout << "vector size: " << v.size() << std::endl;

    for(int i = 9; i >= 0; i--)
        v.push_back(i);

    std::cout << "extended size: " << v.size() << std::endl;

    for(unsigned int i = 0; i < v.size(); i++)
        std::cout << "value of v[" << i << "] = " << v[i] << std::endl;

    std::vector<int>::iterator vi = v.begin();
    while(vi != v.end()) {
        std::cout << "value of vi = " << *vi << std::endl;
        vi++;
    }

    return 0;
}
