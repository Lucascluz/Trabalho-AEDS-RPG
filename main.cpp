#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>

#include "Bibliotecas/accessdata.h"
#include "Bibliotecas/character.h"

using namespace std;

void combatMenu()
{
    int choice;
    int choice2;

    cout << "\n\t------------ Player2 -------------"
         << "\n\tSelecione uma acao"
         << "\n 1 - Ataque com arma"
         << "\n 2 - Utiliza com magia"
         << "\n 3 - Trocar de arma"
         << "\n 4 - Descansar";

    cin >> choice;

    Armas *a1, *a2;

    switch (choice)
    {
    case 1:

        break;

    case 2:
        break;

    case 3:

        break;

    default:
        break;
    }

    cout << "\n\t------------ Player2 -------------"
         << "\n\tSelecione uma acao"
         << "\n 1 - Ataque com arma"
         << "\n 2 - Utiliza com magia"
         << "\n 3 - Trocar de arma"
         << "\n 4 - Descansar";

    cin >> choice2;

    switch (choice2)
    {
    case 1:
        break;

    case 2:
        break;

    case 3:
        break;

    default:
        break;
    }
}

void characterMenu()
{
    Personagem *p1, *p2;

    int classe = 9;

    while (classe != 0)
    {
        cout << "\nPlayer 1: ";
        cin >> classe;

        switch (classe)
        {
        case 1:

            p1 = new Personagem("Personagens/animal.txt");
            classe = 0;
            break;

        case 2:
            p1 = new Personagem("Personagens/dragao.txt");
            classe = 0;
            break;

        case 3:
            p1 = new Personagem("Personagens/guerreiro.txt");
            classe = 0;
            break;

        case 4:
            p1 = new Personagem("Personagens/ladrao.txt");
            classe = 0;
            break;

        case 5:
            p1 = new Personagem("Personagens/mago.txt");
            classe = 0;
            break;

        case 6:
            p1 = new Personagem("Personagens/paladino.txt");
            classe = 0;
            break;

        case 7:
            p1 = new Personagem("Personagens/troll.txt");
            classe = 0;
            break;

        case 8:
            p1 = new Personagem("Personagens/zumbi.txt");
            classe = 0;
            break;
        }
    }

    classe = 9;
    while (classe != 0)
    {
        cout << "\nPlayer 2: ";
        cin >> classe;

        switch (classe)
        {
        case 1:
            p2 = new Personagem("Personagens/animal.txt");
            classe = 0;
            break;

        case 2:
            p2 = new Personagem("Personagens/dragao.txt");
            classe = 0;
            break;

        case 3:
            p2 = new Personagem("Personagens/guerreiro.txt");
            classe = 0;
            break;

        case 4:
            p2 = new Personagem("Personagens/ladrao.txt");
            classe = 0;
            break;

        case 5:
            p2 = new Personagem("Personagens/mago.txt");
            classe = 0;
            break;

        case 6:
            p2 = new Personagem("Personagens/paladino.txt");
            classe = 0;
            break;

        case 7:
            p2 = new Personagem("Personagens/troll.txt");
            classe = 0;
            break;

        case 8:
            p2 = new Personagem("Personagens/zumbi.txt");
            classe = 0;
            break;
        }
    }
   
       
}

void mainMenu()
{
    int jogo = 0; //variavel para iniciar o jogo ou sair

    while (jogo != 2)
    {

        cout << "\n \n 1. Novo Jogo";
        cout << "\n 2.Sair do programa\n";
        cin >> jogo;

        switch (jogo)
        {
        case 1:
            characterMenu(); //função para selecionar sua classe

            //função que inicia o jogo
            break;

        case 2: //Editar DEPOIS
            cout << "\n\tCreditos"
                 << "\n Jogo desenvolvido pro:\n Gabriel Lucchesi\n Lucas Carvalho da Luz"
                 << "\n Feito em 28 de junho de 2021 "
                 << "\n Desenvolvido para: disciplina Algoritmos e Estudo de Dados - 1º periodo - Puc Minas"
                 << "\n\t------------ Obrigado por Jogar ------------\n";
            break;

        default:
            cout << "\n----------- Número Inválido -----------";
            break;
        }
    }
}

int main()
{
    cout << "------------ Bem vindo ao RPG de AEDS ------------";
    mainMenu();

    return 0;
}
