#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

//Arma *arma;
//Magia *magia;

int calculaEsquiva();

public:

Personagem(string classePersonagem);
int atacar();
int recebeDanoArma(int dano);
int recebeDanoMagia(int dano);
~Personagem();

};