#include <cmath>// in c++ programs
#include <iostream>

int i;
class DataFrame{
    int height = 0;
    int width = 0;

};

int main(){
    int j = 4 ;
    {int j = 21; j = j+1; std::cout<< j << ' '<< sizeof(j) <<std::endl;};
    DataFrame df;
    std::cout<< i <<' '<< j << ' '<< sizeof(j) <<std::endl;
    } 
