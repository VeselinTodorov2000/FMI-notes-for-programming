#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
#include "Circle.cpp"
#include "Rectangle.cpp"
#include <string>

int main()
{
    Vector<Circle> c;
    Vector<Rectangle> r;

    std::ifstream input("circles.txt");
    std::string row = "";
    while(!input.eof())
    {
        std::getline(input, row);
        std::string typeOfFigure = "";
        int index = 0;
        for(; index < row.size(); index++)
        {
            if(row[index] == ' ')
            {
                index++;
                break;
            }
            typeOfFigure += row[index];
        }
        
        if(typeOfFigure == "Circle")
        {
            int cx = 0, cy = 0, r = 0;
            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                cx *= 10;
                cx += (currentSymbol - '0');
            }

            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                cy *= 10;
                cy += (currentSymbol - '0');
            }

            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                r *= 10;
                r += (currentSymbol - '0');
            }

            c.push_back(Circle(cx,cy,r));
        }
        else if(typeOfFigure == "Rectangle")
        {
            int width = 0, height = 0, color = 0;
            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                width *= 10;
                width += (currentSymbol - '0');
            }

            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                height *= 10;
                height += (currentSymbol - '0');
            }

            for(; index < row.size(); index++)
            {
                char currentSymbol = row[index];
                if(currentSymbol == ' ')
                {
                    index++;
                    break;
                }

                color *= 10;
                color += (currentSymbol - '0');
            }

            r.push_back(Rectangle(width, height, color));
        }
        else
        {
            std::cout << "Losho" << std::endl;
        }
    }    
    input.close();

    c[1].setCX(1440);

    for(int i = 0; i < c.getSize(); i++)
    {
        c[i].print("figures.txt");
    }
    for(int i = 0; i < r.getSize(); i++)
    {
        r[i].print("figures.txt");
    }
    return 0;
}