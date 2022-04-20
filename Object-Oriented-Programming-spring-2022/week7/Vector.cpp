#pragma once
#include "Vector.h"

void Vector::resize()
{
    int* temp = data;
    destroy();
    capacity *= 2;
    data = new int[capacity];
    for(int i = 0; i < size; i++) 
    {
        data[i] = temp[i];
    }
}

void Vector::copy(const Vector& other)
{
    if(&other == nullptr) {
        return;
    }
    size = other.size;
    capacity = other.capacity;
    data = new int[capacity];

    for(int i = 0; i < size; i++)
    {
        data[i] = other.data[i];
    }
}

void Vector::destroy()
{
    delete[] data;
}

Vector::Vector(int capacity = 4)
{
    size = 0;
    this->capacity = capacity;
    data = new int[capacity];
}

Vector::Vector(const Vector& other)
{
    copy(other);
}

Vector::Vector(Vector&& other)
{
    copy(other);
    other.data = nullptr;
}

Vector& Vector::operator=(const Vector& other)
{
    if(this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

Vector& Vector::operator=(Vector&& other)
{
    if(this != &other) 
    {
        destroy();
        copy(other);
        other.data = nullptr;
    }

    return *this;
}

Vector::~Vector()
{
    destroy();
}

int Vector::currentSize() const
{
    return size;
}

int Vector::maxSize() const
{
    return capacity;
}

bool Vector::isEmpty() const
{
    return size == 0;
}

int Vector::operator[](int i) const
{
    return data[i];
}

int& Vector::operator[](int i)
{
    return data[i];
}

Vector& Vector::push_back(int element)
{
    if(size == capacity)
    {
        resize();
    }
    data[size++] = element;
    return *this;
}

Vector& Vector::operator+(int element)
{
    push_back(element);
}

Vector& Vector::operator+=(int element)
{
    push_back(element);
}

Vector& Vector::pop_back()
{
    if(size != 0)
    {
        size--;
    }
    return *this;
}

Vector& Vector::operator~()
{
    destroy();
    size = 0;
    capacity = 4;
}

Vector& Vector::insert(size_t pos, int element)
{
    if(size == capacity)
    {
        resize();
    }

    for(int i = size; i > pos; i--) 
    {
        data[i] = data[i-1];
    }
    size++;
    data[pos] = element;
    return *this;
}

Vector& Vector::erase(size_t pos)
{
    if(size == 0) 
    {
        return *this;
    }

    for(int i = pos; i < size; i++) 
    {
        data[i] = data[i+1];
    }
    size--;
    return *this;
}

Vector& Vector::swap(size_t sourceOnePosition, size_t sourceTwoPosition)
{
    int temp = data[sourceOnePosition];
    data[sourceOnePosition] = data[sourceTwoPosition];
    data[sourceTwoPosition] = temp;
    return *this;
}

Vector& Vector::pop()
{
    return erase(0);
}

Vector& Vector::push(int element)
{
    return insert(0, element);
}

bool Vector::operator==(const Vector& other) const
{
    if(size != other.size)
    {
        return false;
    }

    for(int i = 0; i < size; i++) 
    {
        if(data[i] != other[i])
        {
            return false;
        }
    }

    return true;
}

bool Vector::operator!=(const Vector& other) const
{
    return !operator==(other);
}

bool Vector::operator<(const Vector& other) const
{
    if(size != other.size)
    {
        return false;
    }

    for(int i = 0; i < size; i++) 
    {
        if(data[i] >= other[i])
        {
            return false;
        }
    }

    return true;
}

bool Vector::operator<=(const Vector& other) const
{
        if(size != other.size)
    {
        return false;
    }

    for(int i = 0; i < size; i++) 
    {
        if(data[i] > other[i])
        {
            return false;
        }
    }

    return true;
}

bool Vector::operator>(const Vector& other) const
{
    return !operator<=(other);   
}

bool Vector::operator>=(const Vector& other) const
{
    return !operator<(other);
}

std::ostream& operator<<(std::ostream& out, const Vector& v)
{
    for(int i = 0; i < v.currentSize(); i++)
    {
        out << v[i] << " ";
    }
    out << std::endl;

    return out;
}

std::istream& operator>>(std::istream& in, Vector& v)
{
    int element;
    while(in >> element)
    {
        v.push_back(element);
    }
    return in;
}