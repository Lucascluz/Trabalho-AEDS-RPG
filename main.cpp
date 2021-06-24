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

    cout << "\n\tSelecione uma acao"
         << "\n 1 - Ataque com arma"
         << "\n 2 - Utiliza com magia"
         << "\n 3 - Trocar de arma"
         << "\n 4 - Descansar";

    cin >> choice;

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
}

void characterMenu()
{
    int classe1, classe2;
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
            break;

        case 2:
            p1 = new Personagem("Personagens/dragao.txt");
            break;

        case 3:
            p1 = new Personagem("Personagens/guerreiro.txt");
            break;

        case 4:
            p1 = new Personagem("Personagens/ladrao.txt");
            break;

        case 5:
            p1 = new Personagem("Personagens/mago.txt");
            break;

        case 6:
            p1 = new Personagem("Personagens/paladino.txt");
            break;

        case 7:
            p1 = new Personagem("Personagens/troll.txt");
            break;

        case 8:
            p1 = new Personagem("Personagens/zumbi.txt");
            break;

        default:
            cout << "\n----------- Número Inválido -----------";
            classe = 9;
            break;
        }
    }

    classe = 9;
    while (0 < classe < 9)
    {

        cout << "\nPlayer 2: ";
        cin >> classe;

        switch (classe)
        {
        case 1:
            p1 = new Personagem("Personagens/animal.txt");
            break;

        case 2:
            p1 = new Personagem("Personagens/dragao.txt");
            break;

        case 3:
            p1 = new Personagem("Personagens/guerreiro.txt");
            break;

        case 4:
            p1 = new Personagem("Personagens/ladrao.txt");
            break;

        case 5:
            p1 = new Personagem("Personagens/mago.txt");
            break;

        case 6:
            p1 = new Personagem("Personagens/paladino.txt");
            break;

        case 7:
            p1 = new Personagem("Personagens/troll.txt");
            break;

        case 8:
            p1 = new Personagem("Personagens/zumbi.txt");
            break;

        default:
            cout << "\n----------- Número Inválido -----------";
            classe = 9;
            break;
        }
    }
}

void mainMenu()
{
    int jogo = 0; //variavel para iniciar o jogo ou sair

    while (jogo != 2)
    {

        cout << "\n \n 1. Iniciar Jogo";
        cout << "\n 2.Sair do Jogo\n";
        cin >> jogo;

        switch (jogo)
        {
        case 1:
            characterMenu(); //função para selecionar sua classe

            //função que inicia o jogo
            break;

        case 2: //Editar DEPOIS
            cout << "\n\tCréditos"
                 << "\n Jogo desenvolvido pro:\n Gabriel Lucchesi\n Lucas Carvalho da Luz"
                 << "\n Feito em 28 de junho de 2021 "
                 << "\n Desenvolvido para: disciplina Algoritmos e Estudo de Dados - 1º período - Puc Minas"
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
