#include "../include/iterator.h"
#include <iostream>

int main(){
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    Container c(10, array);

    for (auto i : c)
        std::cout << i << std::endl;

    return 0;
}
