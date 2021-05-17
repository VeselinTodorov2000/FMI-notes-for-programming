#pragma once
#include "LList.h"
#include <exception>

template<typename T>
LList<T>::LList()
{
    first = nullptr;
}

template<typename T>
LList<T>::LList(const LList<T>& others)
{
    if(others.empty())
    {
        this->first = nullptr;
        return;
    }
    Box<T>* current = others.first;
    Box<T>* thisCurrent = new Box<T>(current->data, nullptr);
    first = thisCurrent;

    while(current->next != nullptr)
    {
        current = current->next;
        thisCurrent->next = new Box<T>(current->data, nullptr);
        thisCurrent = thisCurrent->next;
    }
}

template<typename T>
LList<T>& LList<T>::operator=(const LList<T>& others)
{

}

template<typename T>
LList<T>::~LList()
{
    clear();
}

template<typename T>
void LList<T>::print()
{
    Box<T>* current = first;
    while(current != nullptr)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

template<typename T>
void LList<T>::push(const T& newElem)
{
    first = new Box<T>(newElem, first);
}

template<typename T>
void LList<T>::push_back(const T& newElem)
{
    if(first == nullptr)
    {
        first = new Box<T>(newElem, nullptr);
        return;
    }

    Box<T>* current = first;
    while(current->next != nullptr)
    {
        current = current->next;
    }
    current->next = new Box<T>(newElem, nullptr);
}

template<typename T>
void LList<T>::pop()
{
    if(first == nullptr)
    {
        throw std::range_error("You can't take element from an empty list");
    }
    Box<T>* toDelete = first;
    first = first->next;
    delete[] toDelete; 
}

template<typename T>
void LList<T>::pop_back() 
{
    if(first == nullptr)
    {
        throw std::range_error("You can't take element from an empty list");
    }
    Box<T>* current = first;
    while(current->next->next != nullptr)
    {
        current = current->next;
    }

    delete[] current->next;
    current->next = nullptr;
}

template<typename T>
void LList<T>::clear()
{
    while(!this->empty())
    {
        Box<T>* toDelete = first;
        first = first->next;
        delete[] toDelete;
    }
}

template<typename T>
void LList<T>::insertAfter(const T&, size_t) 
{

}

template<typename T>
void LList<T>::deleteAt(size_t)
{

}

template<typename T>
size_t LList<T>::size() const
{
    Box<T>* current = first;
    size_t cnt = 0;
    while(current != nullptr)
    {
        current = current->next;
        cnt++;
    }

    return cnt;
}

template<typename T>
const Box<T>* LList<T>::front() const
{
    return first;    
}

template<typename T>
bool LList<T>::empty() const
{
    return first == nullptr;
}