#include <iostream>
#include "nebrijo.h"
#include "infor1.h"
#include "infor2.h"
#include "moda2.h"
#include "moda1.h"
#include <vector>


using namespace std;





int main()
{

    int nume{9};
    string nombre;
    string dni;
    int curso;
    vector<Nebrijo*> nabo;

    while (nume!= 0) {
        switch(nume){

        case 9:
            cout << "Añadir alumnos: " << endl <<
                    "Informatica(1): " << endl <<
                    "Moda(2): " << endl <<
                    "Salir(0): " << endl;
            cin >> nume;
            break;

        case 1:
            cout << "Introduce nombre del alumno: " << endl;
            cin >> nombre;
            cout << "Introduce dni del alumno: " << endl;
            cin >> dni;
            cout << "Introduce curso del alumno: " << endl;
            cin >> curso;
            if(curso == 1){
                nabo.push_back(new Infor1());

            }else{

                nabo.push_back(new Infor2());
            }


        case 2:



        default:
            nume = 0;



            }

    }




    return 0;
}
