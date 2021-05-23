#include <iostream>
#include <string>

class Target {
    public:
        virtual ~Target() = default;

        virtual std::string Request();
};

class Adaptee {
    private:
        int value_;

    public:
        Adaptee();
        Adaptee(int value);

        int getValue();
        void setValue(int value);
};

class Adapter : public Target {
    private:
        Adaptee *adaptee_;

    public:
        Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}; 
        ~Adapter();

        std::string Request() override;
};

class Client {
    public:
        void printString(std::string message);
};
