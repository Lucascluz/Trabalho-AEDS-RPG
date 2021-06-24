#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/magias.h"

Magias::Magias(string nomeMagia)
{
    int qtdAtributos = 3;

    Accessdata *a = new Accessdata(qtdAtributos);

    int *atributos = a->obtemAtributos(nomeMagia);
   
    this->magiaDano = atributos[0];
    this->magiaCura = atributos[1];
    this->magiaCusto = atributos[2];

    delete a;
    delete atributos;
};