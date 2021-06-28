#include "Bibliotecas/character.h"
#include "Bibliotecas/weapon.h"

Personagem::Personagem()
{
    srand(time(0));

    vida = 0;
    mana = 0;
    forca = 0;
    magia = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;
    numArmas = 0;
    idArma = 0;
}

Personagem *perso = new Personagem();

void Personagem::Guerreiro()
{
    perso->vida = 4000;
    perso->vidaMax = 4000;
    perso->mana = 30;
    perso->manaMax = 30;
    perso->forca = 100;
    perso->magia = 20;
    perso->armadura = 80;
    perso->resistencia = 20;
    perso->agilidade = 20;
    perso->numArmas = 2;
    perso->idArma = 4;
};

void Personagem::Ladrao()
{
    perso->vida = 2800;
    perso->vidaMax = 2800;
    perso->mana = 50;
    perso->manaMax = 50;
    perso->forca = 50;
    perso->magia = 30;
    perso->armadura = 40;
    perso->resistencia = 50;
    perso->agilidade = 80;
    perso->numArmas = 4;
    perso->idArma = 5;
};

void Personagem::Mago()
{
    perso->vida = 2500;
    perso->vidaMax = 2500;
    perso->mana = 100;
    perso->manaMax = 100;
    perso->forca = 40;
    perso->magia = 100;
    perso->armadura = 30;
    perso->resistencia = 80;
    perso->agilidade = 40;
    perso->numArmas = 2;
    perso->idArma = 5;
};

void Personagem::Paladino()
{
    perso->vida = 3200;
    perso->vidaMax = 3200;
    perso->mana = 80;
    perso->manaMax = 80;
    perso->forca = 60;
    perso->magia = 50;
    perso->armadura = 60;
    perso->resistencia = 60;
    perso->agilidade = 60;
    perso->numArmas = 2;
    perso->idArma = 2;
};

void Personagem::Animal()
{
    perso->vida = 3200;
    perso->vidaMax = 3200;
    perso->mana = 30;
    perso->manaMax = 30;
    perso->forca = 100;
    perso->magia = 20;
    perso->armadura = 80;
    perso->resistencia = 20;
    perso->agilidade = 50;
    perso->numArmas = 1;
    perso->idArma = 1;
};

void Personagem::Troll()
{
    perso->vida = 2800;
    perso->vidaMax = 2800;
    perso->mana = 20;
    perso->manaMax = 20;
    perso->forca = 100;
    perso->magia = 20;
    perso->armadura = 80;
    perso->resistencia = 20;
    perso->agilidade = 20;
    perso->numArmas = 2;
    perso->idArma = 5;
};

void Personagem::Dragao()
{
    perso->vida = 3000;
    perso->vidaMax = 3000;
    perso->mana = 40;
    perso->manaMax = 40;
    perso->forca = 100;
    perso->magia = 20;
    perso->armadura = 50;
    perso->resistencia = 50;
    perso->agilidade = 30;
    perso->numArmas = 1;
    perso->idArma = 1;
};

void Personagem::Zumbi()
{
    perso->vida = 2500;
    perso->vidaMax = 2500;
    perso->mana = 20;
    perso->manaMax = 20;
    perso->forca = 40;
    perso->magia = 20;
    perso->armadura = 40;
    perso->resistencia = 80;
    perso->agilidade = 50;
    perso->numArmas = 3;
    perso->idArma = 1;
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

int Personagem::calculaDanoArma(int danoArma)
{
    return (perso->forca * danoArma) / 100;
};

int Personagem::recebeDanoArma(int danoArma)
{
    cout << "\nteste3\n";

    if (calculaEsquiva() == 1)
    {
        cout << "\n\tESQUIVOU!\n";
        return 0;
    }

    cout << "\nteste4\n";

    int danoTotal = calculaDanoArma(danoArma);

    cout << danoTotal;

    if (danoTotal > this->vida)
        this->vida = 0;
    else
        this->vida -= danoTotal;

    cout << "\t" << danoTotal;

    return danoTotal;
};

void Personagem::descansa()
{
    if ((perso->vida + 200) >= perso->vidaMax)
        vida = vidaMax;
    else
        vida = vida + 200;
};

//int Personagem::atacar(){};

void Personagem::retornaVidaMana()
{
    cout << "\n--------------------------------------------\n"
         << "vida:        " << perso->vida << "\n"
         << "mana:        " << perso->mana << "\n"
         << "\n--------------------------------------------\n";
};

void Personagem::retornaAtributos()
{
    cout << "\n--------------------------------------------\n"
         << "vida:        " << perso->vida << "\n"
         << "mana:        " << perso->mana << "\n"
         << "forca:       " << perso->forca << "\n"
         << "magia:       " << perso->magia << "\n"
         << "armadura:    " << perso->armadura << "\n"
         << "resistencia: " << perso->resistencia << "\n"
         << "agilidade:   " << perso->agilidade << "\n"
         << "\n--------------------------------------------\n";
};
