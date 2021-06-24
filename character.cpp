#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/character.h"

Personagem::Personagem(string classePersonagem)
{
    
    int qtdAtributos = 7;

    Accessdata *a = new Accessdata(qtdAtributos);

    int *atributos = a->obtemAtributos(classePersonagem);

    this->vida = atributos[0];
    this->mana = atributos[1];
    this->forca = atributos[2];
    this->magia = atributos[3];
    this->armadura = atributos[4];
    this->resistencia = atributos[5];
    this->agilidade = atributos[6];
    //this->armas = atributos[7....]

    delete a;
    delete atributos;
};




int Personagem::calculaEsquiva()
{

};

int Personagem::recebeDanoArma(int dano)
{
    if (calculaEsquiva());
    return 0;

    int danoDeArmaRecebido;
    if (danoDeArmaRecebido > this->vida)
        this->vida = 0;
    else
        this->vida -= danoDeArmaRecebido;
    return danoDeArmaRecebido;
};