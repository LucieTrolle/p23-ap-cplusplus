
// vr: mettre le pragma en tête du fichier
// pour éviter au compilo d'inclure quoi que ce soit
#pragma once

#include "shape.hpp"
#include <iostream>

// vr: le code est bon
// une autre fonction à implémenter serait la fonction print qui affiche les caractéristiques de la forme
class Rectangle : public Shape
{
    int width;
    int height;

public:
    Rectangle(int posx, int posy, int larg, int longu, int col = 250) : Shape(posx, posy, col), width(larg), height(longu) {} /* constructeur */

    float area() const { return width * height; }
    /* mesure de l'air du rectangle*/

    float perimeter() const { return (width * 2 + height * 2); }
    /* mesure de le périmètre du rectangle*/

    void print() const { 
        std::cout << "Rectangle de position (" << <<
        }
};