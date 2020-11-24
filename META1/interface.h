#ifndef INTERFACE_H
#define INTERFACE_H
#include "bibliotecas.h"
#include "territorios.h"
#include "jogador.h"
#include "mundo.h"

class Interface{
    
public:
    Interface();
    vector<Territorios*> territorios;
    void readfileTerritorios(string filename);
};
#endif /* INTERFACE_H */
