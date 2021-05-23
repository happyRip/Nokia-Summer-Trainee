#include "../include/calculate.h"
#include "../include/subject.h"
#include "../include/observe.h"
#include "../include/data.h"

int main() {
    Data d;
    
    Calculate c1, c2;

    d.addObserver(c1);
    d.addObserver(c2);

    d.updateFirst(1);
    d.updateSecond(2);
}
