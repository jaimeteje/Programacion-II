#include "nebrijo.h"

Nebrijo::Nebrijo(string _nombre, string _dni, int _curso, string _type):
    nombre{_nombre},
    dni{_dni},
    curso{_curso},
    type{_type}
{

}

int Nebrijo::getCurso() const
{
    return curso;
}

string Nebrijo::getType() const
{
    return type;
}
