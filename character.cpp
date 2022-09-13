#include "Bibliotecas\character.h"
#include "Bibliotecas\weapon.h"
#include "Bibliotecas\magic.h"

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
    this->mana = 60;
    this->manaMax = 60;
    this->forca = 50;
    this->magia = 40;
    this->armadura = 20;
    this->resistencia = 60;
    this->agilidade = 80;
};

void Personagem::Mago()
{
    this->vida = 2750;
    this->vidaMax = 2750;
    this->mana = 100;
    this->manaMax = 100;
    this->forca = 40;
    this->magia = 100;
    this->armadura = 30;
    this->resistencia = 80;
    this->agilidade = 20;
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
    this->vida = 3500;
    this->vidaMax = 3500;
    this->mana = 40;
    this->manaMax = 4040;
    this->forca = 100;
    this->magia = 20;
    this->armadura = 80;
    this->resistencia = 40;
    this->agilidade = 60;
};

void Personagem::Troll()
{
    this->vida = 2800;
    this->vidaMax = 2800;
    this->mana = 40;
    this->manaMax = 40;
    this->forca = 100;
    this->magia = 30;
    this->armadura = 70;
    this->resistencia = 40;
    this->agilidade = 30;
};

void Personagem::Dragao()
{
    this->vida = 3000;
    this->vidaMax = 3000;
    this->mana = 40;
    this->manaMax = 40;
    this->forca = 100;
    this->magia = 100;
    this->armadura = 40;
    this->resistencia = 50;
    this->agilidade = 30;
};

void Personagem::Zumbi()
{
    this->vida = 5000;
    this->vidaMax = 2500;
    this->mana = 60;
    this->manaMax = 60;
    this->forca = 40;
    this->magia = 20;
    this->armadura = 80;
    this->resistencia = 100;
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
        cout << "\t\tOPONETE ESQUIVOU\n";
        return 0;
    }
    else
    {
        cout << "\t\tVoce causou " << (((danoArma * this->armadura) / 100) - danoArma) * -1 << " de dano\n";
    }

    if (danoArma >= this->vida + (danoArma * this->armadura) / 100)
        this->vida = 0;
    else
        this->vida = (this->vida + ((danoArma * this->armadura) / 100)) - danoArma;
};

int Personagem::recebeDanoMagia(int danoMagia)
{
    cout << "\t\tVoce causou " << (((danoMagia * this->resistencia) / 100) - danoMagia) * -1 << " de dano\n";

    if (danoMagia >= this->vida + (danoMagia * this->resistencia) / 100)
        this->vida = 0;
    else
        this->vida = (this->vida + ((danoMagia * this->resistencia) / 100)) - danoMagia;
};

void Personagem::recuperaVida()
{
    if ((this->vida + 200) >= this->vidaMax)
        this->vida = this->vidaMax;
    else
        this->vida = this->vida + 200;
};

void Personagem::recuperaMana()
{
    if ((this->mana + 10) >= this->manaMax)
        this->mana = this->manaMax;
    else
        this->mana = this->mana + 10;
}

void Personagem::retornaVidaMana()
{
    cout << "   " << this->vida << "Hp | " << this->mana << "Mp"
        << "   ";
};

int Personagem::retornaForca()
{
    return this->forca;
    if ((this->mana + 15) >= this->manaMax)
        this->mana = this->manaMax;
    else
        this->mana = this->mana + 15;
};

int Personagem::retornaVida()
{
    return this->vida;
};

int Personagem::retornaMana(int custo)
{
    if (this->mana <= custo)
        this->mana = 0;
    else if (this->mana >= custo)
        this->mana = mana - custo;

    return this->mana;
};

int Personagem::retornaMagia()
{
    return this->magia;
};

int Personagem::verificaMana()
{
    if (mana == manaMax)
        return 2;
    else
        return 1;
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
         << "agilidade:   " << this->agilidade << "\n";
};