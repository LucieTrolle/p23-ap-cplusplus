#include <iostream>

void swap(int* x,int* y){
    int aux =*x;
    *x=*y;
    *y= aux;

}

int main(){
int a =17;
int b=82;
swap( &a, &b);
if ((82 ==a) and (b==17)){
    std:: cout << "Oui ça a marché" << std :: endl;}
else{
    std:: cout << "Non t'es nulle" << std :: endl;};
}

int* pi = &i;:/* & = adresse de */
int& ri = i; /* référence l'objet i comme un pointeur mais pas un pointeur
donc ri =ri +1 comme si l'objet était changé */