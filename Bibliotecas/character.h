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
    int recebeDanoMagia(int danoMagia);

    int retornaForca();
    int retornaMagia();
    int retornaVida();
    int retornaMana(int custo);

    int verificaMana();

    void retornaVidaMana();
    void retornaAtributos();

    void recuperaMana();
    void recuperaVida();

    void Guerreiro();
    void Ladrao();
    void Mago();
    void Paladino();
    void Animal();
    void Troll();
    void Dragao();
    void Zumbi();

    ~Personagem();
};