#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/armas.h"

Armas::Armas(string nomeArma)
{
    srand(time(0));

    int qtdAtributos = 2;

    Accessdata *a = new Accessdata(qtdAtributos);

    int *atributos = a->obtemAtributos(nomeArma);
    
    this->armaMax = atributos[0];
    this->armaMin = atributos[1];
    
    delete a;
    delete atributos;
};

int Armas::danoFisico(string nomeArma){
    
    int dano = (rand() % this->armaMax) + this->armaMin;

    return dano;
};




