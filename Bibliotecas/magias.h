#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

class Magias{
    private:
        string nome;
        int magiaDano;
        int magiaCura;
        int magiaCusto;

    public:
        Magias(string nomeMagia);
        int danoMagico();
};