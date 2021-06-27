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
class Armas{
    private:
        int armaMax;
        int armaMin;

    public:
        Armas(int idArma);
        void recebeArma(int idArma);
        int danoFisico();
        int retornaDanoMax();
        int retornaDanoMin();
        void retornaValores();
        string nomeArma;
        string nome;
};