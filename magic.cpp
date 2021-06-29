#include "Bibliotecas/character.h"
#include "Bibliotecas/magic.h"

Magia::Magia()
{
    danoMagia = 0;
    gastoMana = 0;
};

void Magia::HalitoDeFogo()
{
    this->danoMagia = 500;
    this->gastoMana = 7;
};

void Magia::Bio()
{
    this->danoMagia = 480;
    this->gastoMana = 9;
};

void Magia::Cura()
{
    this->danoMagia = 0;
    this->gastoMana = 3;
};

void Magia::FlamaGelada()
{
    this->danoMagia = 400;
    this->gastoMana = 8;
};

void Magia::Intoxicacao()
{
    this->danoMagia = 320;
    this->gastoMana = 5;
};

void Magia::Tempestade()
{
    this->danoMagia = 360;
    this->gastoMana = 6;
};

int Magia::aplicaDanoMagia(int magia)
{
    return danoMagia + ((magia * danoMagia) / 100);
};

int Magia::retornaCusto()
{
    return this->gastoMana;
};

void Magia::menuMagias()
{
    cout << "\n\t1 - Atacar com arma"
         << "\t2 - Atacar com magia"
         << "\n\t3 - Troca de arma"
         << "\t4 - Descansar (+200 vida)"
         << "\n\t0 - Sair da partida"
         << "\n Option: ";
};

Magia::~Magia()
{
    delete &this->danoMagia;
    delete &this->gastoMana;
};