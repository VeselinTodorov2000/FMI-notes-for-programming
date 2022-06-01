#pragma once
#include "Vector.h"

template<typename T>
void Vector<T>::resize()
{
    T* temp = data;
    destroy();
    capacity *= 2;
    data = new T[capacity];
    for(int i = 0; i < size; i++) 
    {
        data[i] = temp[i];
    }
}

template<typename T>
void Vector<T>::copy(const Vector& other)
{
    if(&other == nullptr) {
        return;
    }
    size = other.size;
    capacity = other.capacity;
    data = new T[capacity];

    for(int i = 0; i < size; i++)
    {
        data[i] = other.data[i];
    }
}

template<typename T>
void Vector<T>::destroy()
{
    delete[] data;
}

template<typename T>
Vector<T>::Vector(int capacity)
{
    size = 0;
    this->capacity = capacity;
    data = new T[capacity];
}

template<typename T>
Vector<T>::Vector(const Vector<T>& other)
{
    copy(other);
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
    if(this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

template<typename T>
Vector<T>::~Vector()
{
    destroy();
}

template<typename T>
int Vector<T>::currentSize() const
{
    return size;
}

template<typename T>
int Vector<T>::maxSize() const
{
    return capacity;
}

template<typename T>
bool Vector<T>::isEmpty() const
{
    return size == 0;
}

template<typename T>
T Vector<T>::operator[](int i) const
{
    return data[i];
}

template<typename T>
T& Vector<T>::operator[](int i)
{
    return data[i];
}

template<typename T>
Vector<T>& Vector<T>::push_back(T element)
{
    if(size == capacity)
    {
        resize();
    }
    data[size++] = element;
    return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator+(T element)
{
    push_back(element);
}

template<typename T>
Vector<T>& Vector<T>::operator+=(T element)
{
    push_back(element);
}

template<typename T>
Vector<T>& Vector<T>::pop_back()
{
    if(size != 0)
    {
        size--;
    }
    return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator~()
{
    destroy();
    size = 0;
    capacity = 4;
}

template<typename T>
Vector<T>& Vector<T>::insert(size_t pos, T element)
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

template<typename T>
Vector<T>& Vector<T>::erase(size_t pos)
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

template<typename T>
Vector<T>& Vector<T>::swap(size_t sourceOnePosition, size_t sourceTwoPosition)
{
    T temp = data[sourceOnePosition];
    data[sourceOnePosition] = data[sourceTwoPosition];
    data[sourceTwoPosition] = temp;
    return *this;
}

template<typename T>
Vector<T>& Vector<T>::pop()
{
    return erase(0);
}

template<typename T>
Vector<T>& Vector<T>::push(T element)
{
    return insert(0, element);
}

template<typename T>
bool Vector<T>::operator==(const Vector<T>& other) const
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

template<typename T>
bool Vector<T>::operator!=(const Vector<T>& other) const
{
    return !operator==(other);
}

template<typename T>
bool Vector<T>::operator<(const Vector<T>& other) const
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

template<typename T>
bool Vector<T>::operator<=(const Vector<T>& other) const
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

template<typename T>
bool Vector<T>::operator>(const Vector<T>& other) const
{
    return !operator<=(other);   
}

template<typename T>
bool Vector<T>::operator>=(const Vector<T>& other) const
{
    return !operator<(other);
}

// template<typename T>
// std::ostream& operator<<(std::ostream& out, const Vector<T>& v)
// {
//     for(int i = 0; i < v.currentSize(); i++)
//     {
//         out << v[i] << " ";
//     }
//     out << std::endl;

//     return out;
// }

// template<typename T>
// std::istream& operator>>(std::istream& in, Vector<T>& v)
// {
//     T element;
//     while(in >> element)
//     {
//         v.push_back(element);
//     }
//     return in;
// }