#ifndef SUBJECT_H
#define SUBJECT_H

#include "observe.h"
#include <algorithm>
#include <vector>

class Subject {
    private:
        std::vector<Observer> observers;

    public:
        void addObserver(Observer observer);
        void removeObserver(Observer observer);
        void notifyObservers();
};

#endif
