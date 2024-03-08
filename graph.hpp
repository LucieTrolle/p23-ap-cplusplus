#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <vector>

class Vertex;

class Edge /*arrêtes*/
{
    friend class Vertex;
    private:
        double value = 0.0;
        Vertex* target =nullptr ;
        Vertex* start =nullptr ;

    public :
        Edge()= default;
        Edge(double poids, Vertex* cible) : value(poids), target(cible){};
};

class Graph;

class Vertex /*sommets*/
{
    friend class Edge;
    friend class Graph;

    private :
        int index;
        std::vector<Edge> edges;
    
    public:
        Vertex(int nom) : index(nom) {};
    
        void add_edge(Vertex *cible, int valeur){ 
            edges.push_back(Edge(valeur , cible));
            };
        
        void visite(Vertex sommet){
            for 
        }

    };

class Graph
{
    private:
        std::vector<Vertex> vertices;

    public:    
        void add_vertex(int i) {return vertices.push_back(i);};

        void add_edge(int s0, int s1, double poids) {
            vertices[s0].add_edge(&vertices[s1], poids);}
        
        void parcourir(){}
        
 };
