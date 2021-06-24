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
        string nome;
        int armaMax;
        int armaMin;    

    public:
        Armas(string nomeArma);
        int danoFisico();
};