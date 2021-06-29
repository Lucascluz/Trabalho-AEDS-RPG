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
class Armas
{
private:
    int danoMax;
    int danoMin;

public:
    Armas();

    int aplicaDano(int forca);
    int danoBulkathos(int forca);
    void retornaStatus();

    void GarraLetal();
    void TridenteSagrado();
    void EspadaBarroca();
    void Porrete();
    void Cajado();
    void Besta();
    void EsferaDeAtaque();
    void Bulkathos();


    ~Armas();
};