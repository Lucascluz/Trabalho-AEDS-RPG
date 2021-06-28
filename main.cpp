#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>

#include "Bibliotecas/character.h"
#include "Bibliotecas/weapon.h"

using namespace std;

Personagem *vetorPersona = new Personagem();
Personagem *vetorPersona2 = new Personagem();
Armas *vetorArma = new Armas();
Armas *vetorArma2 = new Armas();
int classe1, classe2;

int combatMenu(int *i)
{
    int choice, choice2;

    vetorPersona->retornaVidaMana();

    cout << "\n\tTurn: PLayer 1"
         << "\n\t1 - Atacar com arma"
         << "\t2 - Atacar com magia"
         << "\n\t3 - Troca de arma"
         << "\t4 - Descansar (+200 vida)"
         << "\n\t5 - Sair da partida\nOption: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        vetorPersona2->recebeDanoArma(vetorArma->aplicaDano(vetorPersona->retornaForca()));
        break;

    case 2:
        vetorPersona->retornaVidaMana();

        break;

    case 3:

        break;

    case 4:
        vetorPersona->descansa();
        vetorPersona->retornaVidaMana();
        break;

    case 5:
        *i = 0;
        break;

    default:

        break;
    }

    if (*i != 5)
    {
        vetorPersona2->retornaVidaMana();

        cout << "\n\tTurn: PLayer 2"
             << "\n\t1 - Atacar com arma"
             << "\t2 - Atacar com magia"
             << "\n\t3 - Troca de arma"
             << "\t4 - Descansar (+200 vida)"
             << "\n\t5 - Sair da partida\nOption: ";
        cin >> choice2;

        switch (choice2)
        {
        case 1:
            vetorPersona->recebeDanoArma(vetorArma2->aplicaDano(vetorPersona2->retornaForca()));
            break;

        case 2:
            vetorPersona2->retornaVidaMana();

            break;

        case 3:

            break;

        case 4:
            vetorPersona2->descansa();
            vetorPersona2->retornaVidaMana();
            break;

        case 5:
            *i = 0;
            break;

        default:

            break;
        }
    }
}

void characterMenu()
{
    cout << "\n\t1 - Guerreiro "
         << "\t2 - Ladrao";
    cout << "\n\t3 - Mago      "
         << "\t4 - Paladino";
    cout << "\n\t5 - Animal    "
         << "\t6 - Troll";
    cout << "\n\t7 - Dragao    "
         << "\t8 - Zumbi";
    cout << "\n \n Player 1: "
         << "\nOption: ";
    cin >> classe1;

    switch (classe1)
    {
    case 1:
        vetorPersona->Guerreiro();
        vetorArma->Porrete();
        break;
    case 2:
        vetorPersona->Ladrao();
        vetorArma->Cajado();
        break;
    case 3:
        vetorPersona->Mago();
        vetorArma->Cajado();
        break;
    case 4:
        vetorPersona->Paladino();
        vetorArma->TridenteSagrado();
        break;
    case 5:
        vetorPersona->Animal();
        vetorArma->GarraLetal();
        break;
    case 6:
        vetorPersona->Troll();
        vetorArma->Cajado();
        break;
    case 7:
        vetorPersona->Dragao();
        vetorArma->GarraLetal();
        break;
    case 8:
        vetorPersona->Zumbi();
        vetorArma->Cajado();
        break;
    default:
        break;
    }

    cout << "\n"
         << " Player 2: "
         << "\nOption: ";
    cin >> classe2;
    switch (classe2)
    {
    case 1:
        vetorPersona2->Guerreiro();
        vetorArma2->Porrete();
        break;
    case 2:
        vetorPersona2->Ladrao();
        vetorArma2->Cajado();
        break;
    case 3:
        vetorPersona2->Mago();
        vetorArma2->Cajado();
        break;
    case 4:
        vetorPersona2->Paladino();
        vetorArma2->TridenteSagrado();
        break;
    case 5:
        vetorPersona2->Animal();
        vetorArma2->GarraLetal();
        break;
    case 6:
        vetorPersona2->Troll();
        vetorArma2->Cajado();
    case 7:
        vetorPersona2->Dragao();
        vetorArma2->GarraLetal();
        break;
    case 8:
        vetorPersona2->Zumbi();
        vetorArma2->Cajado();
        break;
    default:
        break;
    }

    cout << "\n Player 1 stats \n";
    vetorPersona->retornaAtributos();
    vetorArma->retornaStatus();

    cout << "\n Player 2 stats \n";
    vetorPersona2->retornaAtributos();
    vetorArma2->retornaStatus();
}

int main()
{
    cout << "------------ Bem vindo ao RPG de AEDS ------------";
    int jogo = 0;

    while (jogo != 2)
    {
        cout << "\n1. Novo Jogo\n"
             << "\n2. Sair do programa"
             << "\nOption: ";
        cin >> jogo;

        switch (jogo)
        {
        case 1:
            characterMenu();
            for (int i = 1; i != 0; i++)
            {
                cout << "\n \n------------------------- Turno " << i << " -------------------------";
                combatMenu(&i);
            }
            cout << "\n----- Fim de Jogo -----\n";
            jogo = 0;
            break;

        case 2:
            cout << "\n\n\n\tCreditos"
                 << "\n Jogo desenvolvido pro:\n Gabriel Lucchesi\n Lucas Carvalho da Luz"
                 << "\n Feito em 28 de junho de 2021 "
                 << "\n Desenvolvido para: disciplina Algoritmos e Estudo de Dados - 1 periodo - Puc Minas"
                 << "\n\t------------ Obrigado por Jogar ------------\n\n\n";
            break;
        }
    }
    return 0;
}