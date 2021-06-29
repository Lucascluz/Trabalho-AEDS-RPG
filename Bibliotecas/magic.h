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

class Magia
{
private:
    int danoMagia;
    int gastoMana;

public:
    Magia();

    int aplicaDanoMagia(int magia);
    int curaEfeito(int chamada);

    void retornaStatusMagia();
    
    int retornaCusto();

    void menuMagias();

    void HalitoDeFogo();
    void Bio();
    void Cura();
    void FlamaGelada();
    void Intoxicacao();
    void Tempestade();

    ~Magia();
};