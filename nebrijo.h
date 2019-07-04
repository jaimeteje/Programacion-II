#ifndef NEBRIJO_H
#define NEBRIJO_H
#include <iostream>



using namespace std;

class Nebrijo
{
public:
    Nebrijo(string _nombre, string _dni,int _curso, string _type);



    int getCurso() const;

    string getType() const;

protected:
    string nombre;
    string dni;
    int curso;
    string type;


};

#endif // NEBRIJO_H
