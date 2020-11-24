#ifndef TERRITORIOS_H
#define TERRITORIOS_H
#include "bibliotecas.h"

class Territorios{
    int id_territorio;                  //ID DO TERRITORIO
    string nome;                        //NOME DO TERRITORIO
    string categoria;                   //NOME CATEGORIA
    int resistencia;                    //RESISTENCIA DO TERRITORIO A ATAQUES
    int c_produtos;                     //CRIACAO DE PRODUTOS POR TURNO
    int c_ouro;                         //CRIACAO DE OURO POR TURNO
    int p_vitoria;                      //PONTOS QUE CONTRIBUI PARA O JOGADOR
    const Jogador *conquistador;    
    
public:
    Territorios(int id_territorio, string nome, string categoria, int c_produtos, int c_ouro, int p_vitoria);
    Territorios();
    ~Territorios();
    
};

class Armazem:Territorios{
    int total_produtos;
    int total_ouro;
    
public:
    Armazem();
};


#endif /* TERRITORIOS_H */

