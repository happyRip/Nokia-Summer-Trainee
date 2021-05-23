#ifndef DATA_H
#define DATA_H

#include "subject.h"

class Data : public Subject {
    private:
        const int size = 2;
        int arr[2];

    public:
        void updateFirst(int value);
        void updateSecond(int value);
        int getFirst();
        int getSecond();
};

#endif
