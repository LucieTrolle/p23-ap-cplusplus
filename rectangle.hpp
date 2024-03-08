#include "shape.hpp"
#pragma once
#include <iostream>

class Rectangle : public Shape
    {int width;
    int height;

    public :
        Rectangle(int posx, int posy, int larg, int longu, int col =250) :
        Shape(posx, posy, col), width(larg), height(longu){} /* constructeur */
        
        float area() const { return width*height;}
        /* mesure de l'air du rectangle*/

        float perimeter() const{return (width*2+height*2);}
        /* mesure de le périmètre du rectangle*/

    };