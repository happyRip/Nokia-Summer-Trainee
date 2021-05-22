#include <iostream>
#include "iterator.h"

int main(){
    int array[10] = {2,1,3,7,2,1,1,5,6,9};
    Container c(10, array);

    for (auto i : c)
        std::cout << i << std::endl;

    return 0;
}
