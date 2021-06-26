#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//bibliotecas de para gerar numeros aleatorios
#include <ctime>
#include <cstdlib>

#include "armas.h"
#include "magias.h"

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
int numArmas;
string armaUsando;

Armas *armas;
Magias *magias;

int calculaEsquiva();

public:

Personagem(string classePersonagem);
int retornaVida();
int retornaMana();
int atacar();
void recebeDanoArma();
void recebeDanoMagia();
void danoDeArmaRecebido();
~Personagem();

};