#include "matrix.hpp"

int main()

{   Matrix matrice(2,2);
    matrice.print();

    matrice.at(1,1,2);
    matrice.at(1,2,5); 
    matrice.at(2,1,4);
    matrice.at(2,2,8);

    matrice.print();

    }