#pragma once
#include <iostream>
#include <fstream>

template<typename T>
class Vector
{
    private:
    T* data;
    size_t size;
    size_t capacity;

    void copy(const Vector&);
    void destroy();
    void resize();
    T& at(size_t);

    public:
    //constructors
    Vector();
    Vector(const Vector&);
    Vector<T>& operator=(const Vector&);
    ~Vector();

    //access
    bool isEmpty() const;
    size_t getSize() const;
    size_t getCapacity() const;
    T operator[](size_t) const;
    T& operator[](size_t);

    void push_back(const T&);
    void pop_back();
    
    void toFile(const char*); 

    class Iterator
    {
        private:
        Vector<T>& vector;
        size_t position;

        public:
        Iterator(Vector<T>&, size_t);
        T& operator*();
        Iterator& operator++();
        bool operator!=(const Iterator&);
    };   

    Iterator begin();
    Iterator end();
};

