#include "Bibliotecas/character.h"
#include "Bibliotecas/weapon.h"

Armas::Armas()
{
    srand(time(0));

    danoMax = 0;
    danoMin = 0;
};

Armas *arma = new Armas();

void Armas::Besta()
{
    arma->danoMax = 420;
    arma->danoMin = 220;
};

void Armas::Cajado()
{
    arma->danoMax = 200;
    arma->danoMin = 50;
};

void Armas::EsferaDeAtaque()
{
    arma->danoMax = 400;
    arma->danoMin = 200;
};

void Armas::EspadaBarroca()
{
    arma->danoMax = 500;
    arma->danoMin = 300;
};

void Armas::GarraLetal()
{
    arma->danoMax = 300;
    arma->danoMin = 100;
};

void Armas::Porrete()
{
    arma->danoMax = 380;
    arma->danoMin = 180;
};

void Armas::TridenteSagrado()
{
    arma->danoMax = 420;
    arma->danoMin = 220;
};

int Armas::aplicaDano()
{
    cout << "teste1";
    int x = arma->danoMin + (rand() % arma->danoMax - arma->danoMin + 1);
    cout << x;

    return x;
};

void Armas::retornaStatus()
{
    cout << "Dano Maximo: " << arma->danoMax << "\n"
         << "Dano Minimo: " << arma->danoMin << "\n";
};

