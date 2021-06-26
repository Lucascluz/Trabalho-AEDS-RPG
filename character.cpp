#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/character.h"
#include "Bibliotecas/armas.h"
#include "Bibliotecas/magias.h"

Personagem::Personagem(string classePersonagem)
{
    srand(time(0));

    int qtdAtributos = 8;

    Accessdata *a = new Accessdata(qtdAtributos);

    int *atributos = a->obtemAtributos(classePersonagem);

    this->vida = atributos[0];
    this->mana = atributos[1];
    this->forca = atributos[2];
    this->magia = atributos[3];
    this->armadura = atributos[4];
    this->resistencia = atributos[5];
    this->agilidade = atributos[6];
    this->numArmas = atributos[7]; 
    /*
    int j = 0;
    for (int i = 8; i < this->numArmas; i++)
     {
         this->armas[j++] = 
         Armas *a = new Armas(atributos[i]);
     };
    // Armas arma;
    // for (int i = 7; i < this->numArmas; i++)
    // {
    //     this->armas[j++] = new Armas(atributos[i]);
    // };
    // this->armas =
    /*
    for(int i = nArmas; i < nGeral; i++){

    }
    */

    // delete a;
    // delete atributos;
};
/*
int Personagem::calculaEsquiva()
{
    int esquiva = (rand() % 100) + 1;

    if (esquiva <= this->agilidade)
    {
        return 1;
    }

    return 0;
};

void Personagem::danoDeArmaRecebido()
{
    return (this->forca / 100) * danoFisico(this->armaUsando);
};

void Personagem::recebeDanoArma()
{
    if (calculaEsquiva() == 1)
        ;
    return 0;

    int danoTotal = danoDeArmaRecebido();

    if (danoTotal > this->vida)
        this->vida = 0;
    else
        this->vida -= danoTotal;

    return danoTotal;
};*/