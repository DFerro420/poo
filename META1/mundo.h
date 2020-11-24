#ifndef MUNDO_H
#define MUNDO_H
#include "bibliotecas.h"
#define MAX_DUR 12
#define ANOS 2

class Mundo{
    //string nome;
    int turnos;
    vector<Territorios> territorios;

public:
    Mundo();
    ~Mundo();
    int get_turnos() const;
    void set_turnos();
};
#endif /* MUNDO_H */
