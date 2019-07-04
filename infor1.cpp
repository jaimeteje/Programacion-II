#include "infor1.h"

Infor1::Infor1():
    Nebrijo{nombre, dni,1,"IngenieriaInformatica"}

{

    asig = {"Progra", "Mates", "Empresa", "Fisica"};



}

float Infor1::media()
{

    float suma{0};
    float num;
    for(auto e: asig){
        cout << "Que nota has sacado en " << e << ": ";
        cin >> num;
        suma = suma + num;
    }

    return suma/asig.size();
}
