#include "Bibliotecas/character.h"
#include "Bibliotecas/weapon.h"
#include "Bibliotecas/magic.h"

Armas::Armas()
{
    srand(time(0));

    danoMax = 0;
    danoMin = 0;
};

void Armas::Besta()
{
    this->danoMax = 420;
    this->danoMin = 220;
};

void Armas::Cajado()
{
    this->danoMax = 200;
    this->danoMin = 50;
};

void Armas::EsferaDeAtaque()
{
    this->danoMax = 400;
    this->danoMin = 200;
};

void Armas::EspadaBarroca()
{
    this->danoMax = 500;
    this->danoMin = 300;
};

void Armas::GarraLetal()
{
    this->danoMax = 300;
    this->danoMin = 100;
};

void Armas::Porrete()
{
    this->danoMax = 380;
    this->danoMin = 180;
};

void Armas::TridenteSagrado()
{
    this->danoMax = 420;
    this->danoMin = 220;
};

void Armas::Bulkathos(){
    this->danoMax = 900;
    this->danoMin = 500;
}

int Armas::danoBulkathos(int forca)
{
    int dano = this->danoMin + (rand() % (this->danoMax - this->danoMin));

    if(rand() % 3 == 0){
        return (dano + ((forca * dano) / 100)) * 2;
    }
    else{
        return dano + ((forca * dano) / 100);
    }
};

int Armas::aplicaDano(int forca)
{
    int dano = this->danoMin + (rand() % (this->danoMax - this->danoMin));
    
    return dano + ((forca * dano) / 100);
};

void Armas::retornaStatus()
{
    cout << "Dano Maximo: " << this->danoMax << "\n"
         << "Dano Minimo: " << this->danoMin << "\n";
};

Armas::~Armas()
{
    delete &this->danoMax;
    delete &this->danoMin;
};