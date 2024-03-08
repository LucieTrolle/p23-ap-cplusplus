/*dans une class tout est privée à l'intérieur 
dans un struct tout est publique donc dans le main on peu utiliser s.nb par exemple*/

/*on utilise toujours class puis pour rendre public ou privé on utilise 
- private : (...)
- public : (...)
- protected : (...)

on peut les manipuler sans soucis jusque différence*/

class Stack 
{
    private : 
        int nb;
        int size;
        int *tab;

    public: 
    /*fonction inline permet d'éviter le coût d'appel d'une fct 
    elles le sont par défaut si elle sont dans la class */
        Stack(int m) : nb(0), size (m) {
            if (size <= 0){
                throw "erreur : pas de pile de taille négative";
                /*permet de définir une erreur, et arrête le prgmm*/
                }
            this -> tab = new char[size];}; 
            /*this = adresse de l'objet membre (qui est modifié ???)*/

        /*tilde devant nom de struct est le destrcuteur*/
        ~Stack() {delete[] this->tab;};

        void print() const{
             
            }


        void push(char c){
            if (is_full()) {
                throw "erreur : la pile est déjà pleine";}
             else {
                tab[nb] = c;
                nb = nb + 1;
                };
            };

        char pop(){
             if (is_empty()){
                throw "erreur : la pile est déjà vide";
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

}

/*définition en dehors de la class alors on écrit :*/
inline Stack ::~Stack(){delete [] tab }
/*fonction inline si on rajoute inline */