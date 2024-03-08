#include <iostream>
#include <stdexcept>

struct Stack
{int nb; int size; char* tab;

Stack(int m) : nb(0), size (m) {
    if (size <= 0){
        throw std:: invalid_argument("erreur : pas de pile de taille négative");
        /*permet de définir une erreur, et arrête le prgmm*/
    }
    tab = new char[size];}; 
 /* c'est un constructeur donc 
on ne met pas void car ce n'est pas une méthode, 
il peut y avoir plusieurs constructeur de défini*/


/*copy constrcuteur qui permet de recopier le stack dans la pile mémoire d'exécution
mais attention les 2 sont modifié au même moment */
/*Stack( const Stack& rs) : nb(rs.nb), size(rs.size) {tab = rs.tab;}*/
/*const pour consider la pile à copier comme constante 
        => elle ne peut pas être modifié dans la fct
stack& pour avoir référence et ne pas avoir*/

/*constructeur qui duplique et décorrèle à partir d'un stack*/
Stack(const Stack& rs) : nb(rs.nb), size(rs.size) {
    tab = new char[size];
    for (int i =0; i<nb ; i++){
        tab[i]=rs.tab[i];
    };
};
/* &variable = adresse de variable
class& = type = référence d'un objet de cette classe*/

/*on peut interdire la copie en écrivant 
Stack(const Stack& rs) = delete; */

/*tilde devant nom de struct est le destrcuteur*/
~Stack() {delete[]tab;};

/*affectation s1=s2
Stack operator= (const Stack& rs) :  nb(rs.nb), size(rs.size) {tab = new char[size];
    for (int i =0; i<nb ; i++){
        tab[i]=rs.tab[i];
    };}*/


void push(char c){
    if (is_full()) {
        throw std :: invalid_argument("erreur : la pile est déjà pleine");}
    else {
        tab[nb] = c;
        nb = nb + 1;
        };
    };

char pop(){
    if (is_empty()){
        throw std :: invalid_argument("erreur : la pile est déjà vide");
    }
    else {
        nb = nb - 1;
        return tab[nb];
        };
    };

bool is_empty() const {
    /*ne modifie pas l'ibjet sur lequel elle est appelé
    => objet constant à préciser*/
    return (nb==0);
    };

bool is_full() const{
    return (nb == size );
    };

void print(){
    for (int i = 0 ; i<nb ; i++) {
        std :: cout<<tab[i]<<' ';
    };
    std:: cout<< '\n';
    /*à faire*/};

char top(){
    if (is_empty()){
        throw "erreur : la pile est vide";
    };
    return tab[nb-1];
    };
};


int main(){
    Stack s1(5); /*construction originale*/
    /* Stack s2 = s1;construction par copie*/
    s1.push('l');
    s1.push('u');
    s1.push('c');
    s1.push('i');
    s1.push('e');
    s1.print();
    std :: cout<<s1.pop()<< '\n';
    std :: cout<<s1.top()<< '\n';
    s1.print();

    Stack i(12); /*constructeur */
    i.push('c');
    i.push('l');
    i.push('a');
    i.push('r');
    i.push('a');
    i.print();
    Stack j(i) ; /*copy constructeur*/
    j.print();
    i = s1; /*affectation*/
    i.print();

    /*à la fin du main ya un delete pour chaque truc de la pile*/
    }

