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

class Personagem{
private:

string classe;
string nome;

int vida;
int mana;
int forca; 
int magia;
int armadura;
int resistencia;
int agilidade;
//string armaUsado;

/*
Arma *arma;
Magia *magia;
*/
int calculaEsquiva();

public:

Personagem(string classePersonagem);
int retornaVida();
int atacar();
int recebeDanoArma(int dano);
int recebeDanoMagia(int dano);
~Personagem();

};