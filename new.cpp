int* create_tab(int m){
    int* i = new int[m];
    return i;
}

int main(){
    int* tab = create_tab(10);
    tab[0] = 200;
}