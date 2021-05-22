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

        ~Container();

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
