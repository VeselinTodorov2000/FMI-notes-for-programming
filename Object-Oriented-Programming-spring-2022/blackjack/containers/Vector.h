#pragma once
#include <iostream>

template<typename T>
class Vector 
{
    private:
    T* data;
    int size;
    int capacity;

    void copy(const Vector& other);
    void destroy();
    void resize();

    public:
    Vector(int capacity);
    Vector(const Vector& other);
    Vector& operator=(const Vector& other);
    ~Vector();

    int currentSize() const;
    int maxSize() const;
    bool isEmpty() const;

    T operator[](int i) const;
    T& operator[](int i);

    Vector& push_back(T element);
    Vector& operator+(T element);
    Vector& operator+=(T element);
    Vector& pop_back();
    Vector& operator~();

    Vector& insert(size_t pos, T element);
    Vector& erase(size_t pos);
    Vector& swap(size_t sourceOnePosition, size_t sourceTwoPosition);
    Vector& pop();
    Vector& push(T element);

    bool operator==(const Vector& other) const;
    bool operator!=(const Vector& other) const;
    bool operator<(const Vector& other) const;
    bool operator<=(const Vector& other) const;
    bool operator>(const Vector& other) const;
    bool operator>=(const Vector& other) const;

    // friend std::ostream& operator<<(std::ostream& out, const Vector& v);
    // friend std::istream& operator>>(std::istream& in, Vector& v);
};
