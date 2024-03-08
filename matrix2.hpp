#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <vector> /* très important sinon n'a pas accès à l'outil */

class Matrix
{
protected:
  int rows;
  int columns;
  // vr: mets un nom qui ne puisse pas être confondu avec le nom de la classe Matrix
  std::vector<int> buffer;

  // vr: mets en protected (puisque c'est ton implémentation interne)
  // une méthode qui calcule l'indice dans le vector à partir des indices dans la matrice
  int indice(int i, int j) const { 
    // vr: tester et lancer les exceptions avant de faire quoi que ce soit
    // si i est négatif, null ou strictement supérieur à rows (idem pour j et columns)
    return ((i - 1) * columns) + (j - 1); };

public:
  // vr: mets une valeur par défaut dans le constructeur
  Matrix(int lignes, int colones, int value = 0) : rows(lignes), columns(colones), buffer(lignes * colones, value)
  {
    // vr: la création du vector ayant été faire dans la liste d'initialisation
    // une exception aura peut être été lancée avant d'entrer dans le constructeur (genre taille négative)
    if ((lignes <= 0) || (colones <= 0)) // vr: utilises les champs de la classe rows et columns que tu as initialisés
    {
      throw "stop";
      // vr: utilise les exceptions standards (tu dois inclure <stdexcept>), choisis une exception
      // genre throw std::invalid_argument("bad matrix size");
    }
    /* pour ne pas creer de matrice impossible  avec nbr de colone ou de ligne négatif*/
  }

  float at(int i, int j) const { return buffer[indice(i, j)]; };
  /* les élément de ma matrice sont rangé comme suit dans le vecteur:
  [m(1,1), m(1,2), ... m(1,col), m(2,1), ..., m(2,col), ..., m(row,1), m(row,2) ...  m(row,col)]
  donc j'accède à l'élément (i,j) grâce à "(i-1)*columns+j-1*/

  void at(int i, int j, int v) { buffer[indice(i, j)] = v; }

  void print()
  {
    // vr: tu dois commencer à 1 et aller à rows et à columns pas commercer à 0 et aller à rows-1 et columns-1
    // puisque tu as décidé que ta matrice commençait à 1 et pas à 0 (ce qui est un peu source d'erreur)
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= columns; j++)
      {
        std::cout << at(i, j) << ' ';
      };
      std::cout << std::endl;
    };
    std::cout << std::endl;
  }

  // ~Matrix(){}; // vr: ne jamais mettre un destructeur si tu n'en a pas besoin (i.e. que tu ne fais rien dedans !!!
  // vr: si tu voulais vraiment en mettre un qui ne fait rien: mets de constructeur par défaut
  ~Matrix() = default;
};
