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

void combatMenu()
{
    int choice, choice2;

    vetorPersona->retornaVidaMana();

    cout << "\n\tTurn: PLayer 1"
         << "\n\t1 - Atacar com arma"
         << "\t2 - Atacar com magia";
    cout << "\n\t3 - Troca de arma"
         << "\t4 - Descansar (+200 vida)"
         << "\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        vetorPersona2->recebeDanoArma(vetorArma->aplicaDano());
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

    default:

        break;
    }
    vetorPersona2->retornaVidaMana();

    cout << "\n\tTurn: PLayer 2"
         << "\n\t1 - Atacar com arma"
         << "\t2 - Atacar com magia";
    cout << "\n\t3 - Troca de arma"
         << "\t4 - Descansar (+200 vida)";
    cin >> choice2;

    switch (choice2)
    {
    case 1:
        vetorPersona->recebeDanoArma(vetorArma2->aplicaDano());
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

    default:

        break;
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
         << "\n";
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
    }
    vetorPersona->retornaAtributos();
    vetorArma->retornaStatus();

    cout << "\n"
         << " Player 2: "
         << "\n";
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
    }
    vetorPersona2->retornaAtributos();
    vetorArma2->retornaStatus();
}

int main()
{
    cout << "------------ Bem vindo ao RPG de AEDS ------------";
    int jogo = 0; //variavel para iniciar o jogo ou sair

    while (jogo != 2)
    {

        cout << "\n \n 1. Novo Jogo";
        cout << "\n2. Sair do Jogo\n";
        cin >> jogo;

        switch (jogo)
        {
        case 1:
            characterMenu();
            for (int i = 1; i != 0; i++)
            {
                combatMenu();
            }
            jogo = 0;
            break;

        case 2:
            cout << "\n\tCreditos"
                 << "\n Jogo desenvolvido pro:\n Gabriel Lucchesi\n Lucas Carvalho da Luz"
                 << "\n Feito em 28 de junho de 2021 "
                 << "\n Desenvolvido para: disciplina Algoritmos e Estudo de Dados - 1 periodo - Puc Minas"
                 << "\n\t------------ Obrigado por Jogar ------------\n";
            break;
        }
    }

    return 0;
}