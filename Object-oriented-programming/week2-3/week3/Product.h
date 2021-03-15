#pragma once

struct Date
{
    size_t day;
    size_t month;
    size_t year;  
};

enum Unit{Kilogram, Liter};

class Product
{
    private:
   
    char productName[100];
    Date dateOfExpiry;
    Date dateOfIncome;
    char deliver[100];
    Unit unitOfProduct;
    double quantity;

    public:
    
    void print();
    Product();
    Product(const char*, const Unit&, double);
    Product(const Product&);
    Product& operator=(const Product&);
    
    Product& operator+=(double);
    Product& operator-=(double);
};

//+ - = / * & += -= != & | ~ ->