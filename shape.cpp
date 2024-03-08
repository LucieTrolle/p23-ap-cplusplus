#include <iostream>
#include <stdexcept>

class Shape{
    protected : 
        int x; 
        int y;
        int color;
    
    public :
        Shape(int posx, int posy, int colorshape =230) : 
        x(posx), y(posy), color(colorshape){}
        /*constructeur à partir de coordonnées et couleurs
        mais la copuleurs est défini par défaut aussi*/
    
    public :
        void move(int dx, int dy){
            x = x+dx;
            y = y+dy;
        }
    };

class Circle : public Shape 
    {int radius;
    
    public :
        Circle(int posx, int posy, int r, int col =230) : 
        Shape(posx, posy, col), radius(r){}

        float area() const {return 3.14 * radius * radius; }
    };


