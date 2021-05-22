#include "iterator.h"

Container::Container(int s) {
    size = s;
    data = new int[size];
}

Container::Container(int s, int d[]) {
    size = s;
    data = new int[size];
    data = d;
}

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

/* TaskList::TaskList() { */
/*     size = 10; */
/* } */

/* TaskList::ArrayIterator::ArrayIterator() { */
/*     index = 0; */
/* } */

/* bool TaskList::ArrayIterator::hasNext() { */
/*     return index < size; */
/* } */

/* std::string TaskList::ArrayIterator::current() { */
/*     return taskList[index]; */
/* } */

/* void TaskList::ArrayIterator::next() { */
/*     ++index; */
/* } */
