#ifndef JOGADOR_H
#define JOGADOR_H
#include "bibliotecas.h"

class Jogador{
    int id;
    string nome;
    int q_territorios;
    int q_ouro;
    int q_produtos;
    int pontuacao;
    
public:
    Jogador();
    ~Jogador();
};

#endif /* JOGADOR_H */
