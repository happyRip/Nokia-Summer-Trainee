# include <iterator>
# include <cstddef>
#include <string>

class Container {
    private:
        int *data;
        int size;
    
    public:
        Container(int s);
        Container(int s, int d[]);

        struct Iterator {
            using iterator_category = std::forward_iterator_tag;
            using difference_type = std::ptrdiff_t;
            using value_type = int;
            using pointer = int*;
            using reference = int&;

            Iterator(pointer p) : ptr(p) {}

            reference operator*() const { return *ptr; }
            pointer operator->() { return ptr; }

            Iterator& operator++() { ptr++; return *this; }
            Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

            friend bool operator== (const Iterator& a, const Iterator& b) { return a.ptr == b.ptr; };
            friend bool operator!= (const Iterator& a, const Iterator& b) { return a.ptr != b.ptr; };

        private: 
            pointer ptr;
        };

        Iterator begin();
        Iterator end();

        int getSize();
        int* getData();
};

/* class Iterator */
/* { */
/*     public: */
/*         virtual bool hasNext(); */
/*         virtual std::string current(); */
/*         virtual void next(); */
/* }; */

/* class TaskList */
/* { */
/*     protected: */
/*         int size; */
/*         std::string taskList[10]; */

/*     public: */
/*         TaskList(); */
/*         Iterator createIterator(); */

/*     class ArrayIterator: Iterator */
/*     { */
/*         private: */
/*             int index; */

/*         public: */
/*             ArrayIterator(); */
/*             bool hasNext() override; */
/*             std::string current() override; */
/*             void next() override; */
/*     }; */
/* }; */
