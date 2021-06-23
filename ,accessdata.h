#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

class Accessdata
{
private:
  int * atributos;
  int qtdAtributos;
  string abreArquivo(string nomeDaClasse);

public:
  Accessdata(int qtdAtributos);
  int * obtemAtributos(string nomeDaClasse);
};
