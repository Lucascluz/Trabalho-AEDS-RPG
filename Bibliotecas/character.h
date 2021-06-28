#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//bibliotecas de para gerar numeros aleatorios

#include <ctime>
#include <cstdlib>

using namespace std;

class Personagem
{
private:
    int vidaMax;
    int mana;
    int manaMax;
    int forca;
    int magia;
    int armadura;
    int resistencia;
    int agilidade;

    int calculaEsquiva();

public:
    int vida;

    Personagem();
    //int aplicaDano(int danoAplicado);

    int calculaDanoArma(int danoArma);
    int recebeDanoArma(int danoArma);

    void descansa();

    void Guerreiro();
    void Ladrao();
    void Mago();
    void Paladino();
    void Animal();
    void Troll();
    void Dragao();
    void Zumbi();

    void retornaVidaMana();
    int retornaForca();
    void retornaAtributos();

    //int atacar();
    //int enfeiticar();

    ~Personagem();
};