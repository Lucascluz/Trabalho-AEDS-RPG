#include "Bibliotecas/character.h"
#include "Bibliotecas/weapon.h"

Personagem::Personagem()
{
    vida = 0;
    mana = 0;
    forca = 0;
    magia = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
}

void Personagem::Guerreiro()
{
    this->vida = 4000;
    this->vidaMax = 4000;
    this->mana = 30;
    this->manaMax = 30;
    this->forca = 100;
    this->magia = 20;
    this->armadura = 80;
    this->resistencia = 20;
    this->agilidade = 20;
};

void Personagem::Ladrao()
{
    this->vida = 2800;
    this->vidaMax = 2800;
    this->mana = 50;
    this->manaMax = 50;
    this->forca = 50;
    this->magia = 30;
    this->armadura = 40;
    this->resistencia = 50;
    this->agilidade = 80;
};

void Personagem::Mago()
{
    this->vida = 2500;
    this->vidaMax = 2500;
    this->mana = 100;
    this->manaMax = 100;
    this->forca = 40;
    this->magia = 100;
    this->armadura = 30;
    this->resistencia = 80;
    this->agilidade = 40;
};

void Personagem::Paladino()
{
    this->vida = 3200;
    this->vidaMax = 3200;
    this->mana = 80;
    this->manaMax = 80;
    this->forca = 60;
    this->magia = 50;
    this->armadura = 60;
    this->resistencia = 60;
    this->agilidade = 60;
};

void Personagem::Animal()
{
    this->vida = 3200;
    this->vidaMax = 3200;
    this->mana = 30;
    this->manaMax = 30;
    this->forca = 100;
    this->magia = 20;
    this->armadura = 80;
    this->resistencia = 20;
    this->agilidade = 50;
};

void Personagem::Troll()
{
    this->vida = 2800;
    this->vidaMax = 2800;
    this->mana = 20;
    this->manaMax = 20;
    this->forca = 100;
    this->magia = 20;
    this->armadura = 80;
    this->resistencia = 20;
    this->agilidade = 20;
};

void Personagem::Dragao()
{
    this->vida = 3000;
    this->vidaMax = 3000;
    this->mana = 40;
    this->manaMax = 40;
    this->forca = 100;
    this->magia = 20;
    this->armadura = 50;
    this->resistencia = 50;
    this->agilidade = 30;
};

void Personagem::Zumbi()
{
    this->vida = 2500;
    this->vidaMax = 2500;
    this->mana = 20;
    this->manaMax = 20;
    this->forca = 40;
    this->magia = 20;
    this->armadura = 40;
    this->resistencia = 80;
    this->agilidade = 50;
};

int Personagem::calculaEsquiva()
{
    int esquiva = (rand() % 100) + 1;

    if (esquiva <= this->agilidade)
    {
        return 1;
    }

    return 0;
};

int Personagem::recebeDanoArma(int danoArma)
{
    if (calculaEsquiva() == 1)
    {
        cout << "\n\tESQUIVOU!\n";
        return 0;
    }

    if (danoArma >= this->vida + (danoArma * this->armadura) / 100)
        this->vida = 0;
    else
        this->vida = (this->vida + ((danoArma * this->armadura) / 100)) - danoArma;
};

void Personagem::descansa()
{
    if ((this->vida + 200) >= this->vidaMax)
        this->vida = this->vidaMax;
    else
        this->vida = this->vida + 200;
};

//int Personagem::atacar(){};

void Personagem::retornaVidaMana()
{
    cout << "\n--------------------------------------------\n"
         << "Vida: " << this->vida << "\t" << "mana: " << this->mana << "\n";
};

int Personagem::retornaForca()
{
    return this->forca;
};

void Personagem::retornaAtributos()
{
    cout << "\n--------------------------------------------\n"
         << "vida:        " << this->vida << "\n"
         << "mana:        " << this->mana << "\n"
         << "forca:       " << this->forca << "\n"
         << "magia:       " << this->magia << "\n"
         << "armadura:    " << this->armadura << "\n"
         << "resistencia: " << this->resistencia << "\n"
         << "agilidade:   " << this->agilidade << "\n"
         << "--------------------------------------------\n";
};

Personagem::~Personagem()
{
delete &this->vida;
delete &this->mana;
delete &this->forca;
delete &this->magia;
delete &this->armadura;
delete &this->resistencia;
delete &this->agilidade;
};
