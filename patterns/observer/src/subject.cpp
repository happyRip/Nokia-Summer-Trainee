#include "../include/subject.h"

void Subject::addObserver(Observer observer) {
    observers.push_back(observer);
}

void Subject::removeObserver(Observer observer) {
    observers.erase(std::remove_if(observers.begin(), observers.end(), observer), observers.end());
}

void Subject::notifyObservers() {
    for (auto o : observers) {
        o.update();
    }
}
