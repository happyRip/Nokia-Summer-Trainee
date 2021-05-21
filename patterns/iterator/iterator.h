#include <string>

class Iterator
{
    public:
        virtual bool hasNext();
        virtual std::string current();
        virtual void next();
};

class TaskList
{
    private:
        int size = 10;
        std::string taskList[10];

    public:
        TaskList();
        Iterator createIterator();

    class ArrayIterator: Iterator
    {
        private:
            int index = 0;

        public:
            ArrayIterator();
            bool hasNext() override;
            std::string current() override;
            void next() override;
    };
};
