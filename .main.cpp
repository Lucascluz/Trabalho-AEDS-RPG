#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>

#include ",accessdata.h"
#include ",personagem.h"

using namespace std;

void characterMenu()
{
    int classe;
    int qtdAtributos = 7;
    Accessdata *a = new Accessdata(qtdAtributos);
    int *atributos;

    switch (classe)
    {
    case 0:
    break;

    case 1:
        int *atributos = a->obtemAtributos("guerreiro.txt");
    break;

    case 2:
        int *atributos = a->obtemAtributos("animal.txt");
    break;

    case 3:
        int *atributos = a->obtemAtributos("mago.txt");
    break;
    }
}

void mainMenu()
{
    cout << "Bem vindo ao jogo!";

    int choice;

    cout << "\n\tMenu principal\nSelecione uma das opcoes abaixo";
    cout << "\n0: Sair do programa\n1: Iniciar jogo";
    cin >> choice;

    switch (choice)
    {
    case 0:
        cout << "Programa finalizado!";
        break;

    case 1:
        cout << "Escolha seu personagem";
        characterMenu();
        break;

    default:
        cout << "\n\tOpção invalida!\n";
        mainMenu();
        break;
    }
}

int main()
{
    mainMenu();

    return 0;
}
