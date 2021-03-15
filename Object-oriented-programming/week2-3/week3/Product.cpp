#pragma once
#include "Product.h"
#include <iostream>
#include <cstring>

void printUnit(Unit& u)
{
    switch(u)
    {
        case Liter: std::cout << "Liter"; break;
        case Kilogram: std::cout << "Kilogram"; break;
    }
}

void Product::print()
{
    std::cout << this->productName << " " << this->quantity << " ";
    printUnit(this->unitOfProduct);
    std::cout << std::endl;
}

Product::Product()
{
    quantity = 0;
}

Product::Product(const char* _name, const Unit& u, double _quantity)
{
    strcpy(productName, _name);
    unitOfProduct = u;
    quantity = _quantity;
}

Product::Product(const Product& other)
{
    strcpy(productName, other.productName);
    unitOfProduct = other.unitOfProduct;
    quantity = other.quantity;
}

Product& Product::operator=(const Product& other)
{
    if(this != &other)
    {
        strcpy(productName, other.productName);
        unitOfProduct = other.unitOfProduct;
        quantity = other.quantity;
    }
    return *this;
}   

Product& Product::operator+=(double _quantity)
{
    quantity += _quantity;
    return *this;
}

Product& Product::operator-=(double _quantity)
{
    quantity -= _quantity;
    return *this;
}