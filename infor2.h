#ifndef INFOR2_H
#define INFOR2_H
#include "nebrijo.h"
#include <vector>

class Infor2 : public Nebrijo
{
public:
    Infor2();

private:

    vector<string> asig;
    vector<float> notas;

};

#endif // INFOR2_H
