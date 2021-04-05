#pragma once
#include "Vector.h"

template<typename T>
void Vector<T>::copy(const Vector<T>& others)
{
    capacity = others.capacity;
    size = others.size;
    data = new T[capacity];

    for(size_t i = 0; i < size; i++)
    {
        data[i] = others.data[i];
    }
}

template<typename T>
void Vector<T>::destroy()
{
    delete[] data;
}

template<typename T>
void Vector<T>::resize()
{
    capacity *= 2;
    T* newBuffer = new T[capacity];
    for(size_t i = 0; i < size; i++)
    {
        newBuffer[i] = data[i];
    }
    destroy();
    data = newBuffer;
}

template<typename T>
Vector<T>::Vector()
{
    capacity = 8;
    size = 0;
    data = new T[capacity];
}

template<typename T>
Vector<T>::Vector(const Vector<T>& others)
{
    copy(others);   
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& others)
{
    if(this != &others)
    {
        destroy();
        copy(others);
    }
}

template<typename T>
Vector<T>::~Vector()
{
    destroy();   
}

template<typename T>
size_t Vector<T>::getSize() const
{
    return size;
}

template<typename T>
size_t Vector<T>::getCapacity() const
{
    return capacity;
}

template<typename T>
T& Vector<T>::at(size_t i)
{
    if(i < size)
    {
        return data[i];
    }
}

template<typename T>
T Vector<T>::operator[](size_t i) const
{
    return at(i);
}

template<typename T>
T& Vector<T>::operator[](size_t i)
{
    return at(i);
}

template<typename T>
bool Vector<T>::isEmpty() const
{
    return size == 0;
}

template<typename T>
void Vector<T>::push_back(const T& newElem)
{
    if(size == capacity)
    {
        resize();
    }
    data[size++] = newElem;
}

template<typename T>
void Vector<T>::pop_back()
{
    size--;
}

template<typename T>
void Vector<T>::toFile(const char* fileName)
{
    std::ofstream output(fileName, std::fstream::app);
    
    if(output.is_open())
    {
        for(int i = 0; i < size; i++)
        {
            output << data[i] << " ";
        }
        output << "\n";
        output.close();
    }
    else
    {
        std::cout << "File " << fileName << " not opened" << std::endl;
    }
}