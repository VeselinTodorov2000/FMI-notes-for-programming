#pragma once
#include "Box.cpp"

template<typename T>
class LList
{
    private:
    Box<T>* first;

    public:
    LList();
    LList(const LList<T>&);
    LList& operator=(const LList<T>&);
    ~LList();

    void print();
    void push(const T&);
    void push_back(const T&);
    void pop();
    void pop_back(); 
    void clear();
    void insertAfter(const T&, size_t); 
    void deleteAt(size_t);
    size_t size() const;
    const Box<T>* front() const;
    bool empty() const;

    class Iterator
    {
        private:
        Box<T>* current;

        public:
        Iterator(Box<T>*);
        bool operator!=(const Iterator&);
        Iterator operator++();
        T operator*();
    };
    Iterator begin();
    Iterator end();
};
