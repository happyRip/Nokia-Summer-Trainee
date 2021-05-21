#include "iterator.h"

bool TaskList::ArrayIterator::hasNext() {
    return index < size;
}

std::string TaskList::ArrayIterator::current() {
    return taskList[index];
}

void TaskList::ArrayIterator::next() {
    ++index;
}
