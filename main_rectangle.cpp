#include <vector>
#include <iostream>
#include "shape.hpp"
#include "rectangle.hpp"

int main()
{   Rectangle r(10, 20, 300, 500, 450);
    std::cout << r.area() << std::endl;
    Rectangle *pr = &r;
    std::cout << pr->area() << std::endl;
    Shape *psr = &r;
    std::cout << psr->area() << std::endl;
    return 0;
    }