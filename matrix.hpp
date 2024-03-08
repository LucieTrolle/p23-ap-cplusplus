#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <vector> /*très important sinon n'a pas accès à l'outil*/


class Matrix{
  protected : 
    int rows; 
    int columns; 
    std::vector<int> matrice;
  
  public :
    Matrix(int lignes, int colones) : 
      rows(lignes), columns(colones), matrice(lignes*colones, 0)
      {
      if ((lignes <= 0) || (colones <= 0 )){
        throw "stop"; 
      }
    /* pour ne pas creer de matrice impossible  avec nbr de colone ou de ligne négatif*/
    }

    float at(int i, int j) const{return matrice[((i-1)*columns)+(j-1)];};
    /* les élément de ma matrice sont rangé comme suit dans le vecteur: 
    [m(1,1), m(1,2), ... m(1,col), m(2,1), ..., m(2,col), ..., m(row,1), m(row,2) ...  m(row,col)]
    donc j'accède à l'élément (i,j) grâce à "(i-1)*columns+j-1*/
    

    void at(int i, int j, int v) {matrice[((i-1)*columns)+(j-1)] = v;}

    void print(){
      for (int i = 0; i < rows ; i++){
        for (int j = 0; j < columns ; j++){
          std::cout << at(i,j) << ' ';
          };
        std::cout<< std::endl;
      };
      std::cout<< std::endl;
    }

    ~Matrix(){};
};