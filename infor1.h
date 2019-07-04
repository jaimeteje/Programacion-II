#ifndef INFOR1_H
#define INFOR1_H
#include "nebrijo.h"
#include <vector>

class Infor1 : public Nebrijo
{
public:
    Infor1();

    float media();

private:
    vector<string> asig;
    vector<float> notas;



};

#endif // INFOR1_H
