#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>

#include "Bibliotecas\character.h"
#include "Bibliotecas\weapon.h"
#include "Bibliotecas\magic.h"

using namespace std;

Personagem *vetorPersona = new Personagem();
Personagem *vetorPersona2 = new Personagem();

Armas *vetorArma = new Armas();
Armas *vetorArma2 = new Armas();

Magia *vetorMagia = new Magia();
Magia *vetorMagia2 = new Magia();

int classe1, classe2;
int durabilidade = 0, durabilidade2 = 0;

int combatMenu()
{
    int bulkathos, trocarPara, choice, choiceMagia;

    for (int i = 1; i > 0; i++)
    {
        cout << "\n \n------------------------- Turno " << i << " -------------------------";

        cout << "\nAtacando - Player 1";
        vetorPersona->retornaVidaMana();

        if (durabilidade <= 0)
        {
            switch (classe1)
            {
            case 1:
                vetorArma->Porrete();
                break;
            case 2:
                vetorArma->Cajado();
                break;
            case 3:
                vetorArma->Cajado();
                break;
            case 4:
                vetorArma->TridenteSagrado();
                break;
            case 5:
                vetorArma->GarraLetal();
                break;
            case 6:
                vetorArma->Cajado();
                break;
            case 7:
                vetorArma->GarraLetal();
                break;
            case 8:
                vetorArma->Cajado();
                break;
            }
        }
        else
        {
            cout << " Durabilidade da arma: " << durabilidade;
        }

        cout << "\nDefendendo - Player 2";
        vetorPersona2->retornaVidaMana();

        cout << "\n";
        bulkathos = (rand() % 20) + 1;
        if (bulkathos == 1)
        {
            vetorArma->Bulkathos();
            cout << "----Voce recebeu o VOTO SOLENE DE BUL-KATHOS----\n";
            durabilidade = 1;
        }

        cout << "\n\t1 - Atacar com arma"
             << "\t2 - Atacar com magia"
             << "\n\t3 - Troca de arma"
             << "\t4 - Descansar (+200 vida)"
             << "\n\t0 - Sair da partida"
             << "\n Option: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            i = -1;
            break;

        case 1:
            vetorPersona->recuperaMana();
            if (bulkathos == 1)
            {
                vetorPersona2->recebeDanoArma(vetorArma->danoBulkathos(vetorPersona->retornaForca()));
            }
            else
            {
                vetorPersona2->recebeDanoArma(vetorArma->aplicaDano(vetorPersona->retornaForca()));
            }
            durabilidade--;
            break;

        case 2:
            if (classe1 == 2 || classe1 == 3 || classe1 == 4)
            {
                switch (classe1)
                {
                case 2:
                    cout << "\n\t1 - Intoxicacao (10Mp) \t2 - Tempestade(12Mp)"
                         << "\n Escolha sua Magia: ";
                    cin >> choiceMagia;

                    switch (choiceMagia)
                    {
                    case 1:
                        vetorMagia->Intoxicacao();
                        break;
                    case 2:
                        vetorMagia->Tempestade();
                        break;
                    }
                    if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                    {
                        cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                        vetorPersona->recuperaMana();
                    }
                    else
                    {
                        vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                    }
                    break;

                case 3:
                    cout << "\n1 - Bio (18Mp)  2 - Cura (6Mp)   3 - Flama Gelada (16Mp)  4 - Intoxicacao (10Mp)  5 - Tempestade (12Mp)"
                         << "\n Escolha sua Magia: ";
                    cin >> choiceMagia;

                    switch (choiceMagia)
                    {
                    case 1:
                        vetorMagia->Bio();
                        if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona->recuperaMana();
                        }
                        else
                        {
                            vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                        }
                        break;
                    case 2:
                        vetorMagia->Cura();
                        if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona->recuperaMana();
                        }
                        else
                        {
                            vetorPersona->recuperaVida();
                            vetorPersona->recuperaVida();
                        }
                        break;
                    case 3:
                        vetorMagia->FlamaGelada();
                        if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona->recuperaMana();
                        }
                        else
                        {
                            vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                        }
                        break;
                    case 4:
                        vetorMagia->Intoxicacao();
                        if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona->recuperaMana();
                        }
                        else
                        {
                            vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                        }
                        break;
                    case 5:
                        vetorMagia->Tempestade();
                        if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona->recuperaMana();
                        }
                        else
                        {
                            vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                        }
                        break;
                    }
                    break;

                case 4:
                    cout << "\n\t1 - Flama Gelada (10Mp) \t2 - Tempestade Mp(12)"
                         << "\n Escolha sua Magia: ";
                    cin >> choiceMagia;

                    switch (choiceMagia)
                    {
                    case 1:
                        vetorMagia->FlamaGelada();
                        break;
                    case 2:
                        vetorMagia->Tempestade();
                        break;
                    }

                    if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                    {
                        cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                        vetorPersona->recuperaMana();
                    }
                    else
                    {
                        vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                    }
                    break;
                }
            }
            else
            {
                if (vetorPersona->retornaMana(vetorMagia->retornaCusto()) <= 0)
                {
                    cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                    vetorPersona->recuperaMana();
                }
                else
                {
                    vetorPersona->verificaMana() * (vetorPersona2->recebeDanoMagia((vetorMagia->aplicaDanoMagia(vetorPersona->retornaMagia()))));
                }
            }

            vetorPersona->retornaMana(vetorMagia->retornaCusto());
            break;

        case 3:
            vetorPersona->recuperaMana();
            switch (classe1)
            {
            case 1:
                vetorArma->EspadaBarroca();
                cout << "\t\tTrocou para: Espada Barroca\n";
                durabilidade = 3;
                break;

            case 2:
                trocarPara = (rand() % 3) + 1;

                switch (trocarPara)
                {
                case 1:
                    vetorArma->Besta();
                    cout << "\t\tTrocou para: Besta\n";
                    durabilidade = 3;
                    break;

                case 2:
                    vetorArma->Porrete();
                    cout << "\t\tTrocou para: Porrete\n";
                    durabilidade = 3;
                    break;

                case 3:
                    vetorArma->EsferaDeAtaque();
                    cout << "\t\tTrocou para: Esfera de Ataque\n";
                    durabilidade = 3;
                    break;
                }
                break;

            case 3:
                vetorArma->TridenteSagrado();
                cout << "\t\tTrocou para: Tridente Sagrado\n";
                durabilidade = 3;
                break;

            case 4:
                vetorArma->Besta();
                cout << "\t\tTrocou para: Besta\n";
                durabilidade = 3;
                break;

            case 5:
                cout << "\t\tVoce so tem uma arma\n";
                durabilidade = 3;
                break;

            case 6:
                vetorArma->Porrete();
                cout << "\t\tTrocou para: Porrete\n";
                durabilidade = 3;
                break;

            case 7:
                cout << "\t\tVoce so tem uma arma\n";
                durabilidade = 3;
                break;

            case 8:
                trocarPara = (rand() % 2) + 1;

                switch (trocarPara)
                {
                case 1:
                    vetorArma->GarraLetal();
                    cout << "\t\tTrocou para: Garra Letal\n";
                    durabilidade = 3;
                    break;

                case 2:
                    vetorArma->Porrete();
                    cout << "\t\tTrocou para: Porrete\n";
                    durabilidade = 3;
                    break;
                }
                break;
            }
            break;
        case 4:
            vetorPersona->recuperaVida();
            vetorPersona->recuperaMana();
            break;
        }

        if (vetorPersona2->retornaVida() == 0)
        {
            cout << "\n------------ !! PLAYER 1 VENCEU !! ------------";
            i = -1;
        }

        if (i > 0)
        {
            bulkathos = 0;
            cout << "\n---------------------------------------------------------";

            cout << "\nAtacando - Player 2";
            vetorPersona2->retornaVidaMana();

            if (durabilidade2 <= 0)
            {
                switch (classe2)
                {
                case 1:
                    vetorArma2->Porrete();
                    break;
                case 2:
                    vetorArma2->Cajado();
                    break;
                case 3:
                    vetorArma2->Cajado();
                    break;
                case 4:
                    vetorArma2->TridenteSagrado();
                    break;
                case 5:
                    vetorArma2->GarraLetal();
                    break;
                case 6:
                    vetorArma2->Cajado();
                    break;
                case 7:
                    vetorArma2->GarraLetal();
                    break;
                case 8:
                    vetorArma2->Cajado();
                    break;
                }
            }
            else
            {
                cout << " Durabilidade da arma: " << durabilidade2;
            }

            cout << "\nDefendendo - Player 1";
            vetorPersona->retornaVidaMana();

            cout << "\n";
            bulkathos = (rand() % 20) + 1;
            if (bulkathos == 1)
            {
                vetorArma2->Bulkathos();
                cout << "----Voce recebeu o VOTO SOLENE DE BUL-KATHOS----\n";
                durabilidade2 = 1;
            }

            cout << "\n\t1 - Atacar com arma"
                 << "\t2 - Atacar com magia"
                 << "\n\t3 - Troca de arma"
                 << "\t4 - Descansar (+200 vida)"
                 << "\n\t0 - Sair da partida"
                 << "\n Option: ";
            cin >> choice;

            switch (choice)
            {
            case 0:
                i = -1;
                break;

            case 1:
                vetorPersona2->recuperaMana();
                if (bulkathos == 1)
                {
                    vetorPersona->recebeDanoArma(vetorArma2->danoBulkathos(vetorPersona2->retornaForca()));
                }
                else
                {
                    vetorPersona->recebeDanoArma(vetorArma2->aplicaDano(vetorPersona2->retornaForca()));
                }
                durabilidade2--;
                break;

            case 2:
                if (classe2 == 2 || classe2 == 3 || classe2 == 4)
                {
                    switch (classe2)
                    {
                    case 2:
                        cout << "\n\t1 - Intoxicacao (10Mp) \t2 - Tempestade (12Mp)"
                             << "\n Escolha sua Magia: ";
                        cin >> choiceMagia;

                        switch (choiceMagia)
                        {
                        case 1:
                            vetorMagia2->Intoxicacao();
                            break;
                        case 2:
                            vetorMagia2->Tempestade();
                            break;
                        }
                        if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona2->recuperaMana();
                        }
                        else
                        {
                            vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                        }
                        break;

                    case 3:
                        cout << "\n1 - Bio (18Mp)   2 - Cura (6Mp)   3 - Flama Gelada (16Mp)   4 - Intoxicacao (10Mp)   5 - Tempestade (12Mp)"
                             << "\n Escolha sua Magia: ";
                        cin >> choiceMagia;

                        switch (choiceMagia)
                        {
                        case 1:
                            vetorMagia2->Bio();
                            if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                            {
                                cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                                vetorPersona2->recuperaMana();
                            }
                            else
                            {
                                vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                            }
                            break;
                        case 2:
                            vetorMagia2->Cura();
                            if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                            {
                                cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                                vetorPersona2->recuperaMana();
                            }
                            else
                            {
                                vetorPersona2->recuperaVida();
                                vetorPersona2->recuperaVida();
                            }
                            break;
                        case 3:
                            vetorMagia2->FlamaGelada();
                            if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                            {
                                cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                                vetorPersona2->recuperaMana();
                            }
                            else
                            {
                                vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                            }
                            break;
                        case 4:
                            vetorMagia2->Intoxicacao();
                            if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                            {
                                cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                                vetorPersona2->recuperaMana();
                            }
                            else
                            {
                                vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                            }
                            break;
                        case 5:
                            vetorMagia2->Tempestade();
                            if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                            {
                                cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                                vetorPersona2->recuperaMana();
                            }
                            else
                            {
                                vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                            }
                            break;
                        }
                        break;

                    case 4:
                        cout << "\n\t1 - Flama Gelada (16Mp) \t2 - Tempestade (12Mp)"
                             << "\n Escolha sua Magia: ";
                        cin >> choiceMagia;

                        switch (choiceMagia)
                        {
                        case 1:
                            vetorMagia2->FlamaGelada();
                            break;
                        case 2:
                            vetorMagia2->Tempestade();
                            break;
                        }
                        if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                        {
                            cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                            vetorPersona2->recuperaMana();
                        }
                        else
                        {
                            vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                        }
                        break;
                    }
                }
                else
                {
                    if (vetorPersona2->retornaMana(vetorMagia2->retornaCusto()) <= 0)
                    {
                        cout << "\n\tMANA INSUFICIENTE PARA ESTA MAGIA!\n";
                        vetorPersona2->recuperaMana();
                    }
                    else
                    {
                        vetorPersona2->verificaMana() * (vetorPersona->recebeDanoMagia((vetorMagia2->aplicaDanoMagia(vetorPersona2->retornaMagia()))));
                    }
                }
                vetorPersona2->retornaMana(vetorMagia2->retornaCusto());

                break;

            case 3:
                vetorPersona2->recuperaMana();
                switch (classe2)
                {
                case 1:
                    vetorArma2->EspadaBarroca();
                    cout << "\t\tTrocou para: Espada Barroca\n";
                    durabilidade2 = 3;
                    break;

                case 2:
                    trocarPara = (rand() % 3) + 1;

                    switch (trocarPara)
                    {
                    case 1:
                        vetorArma2->Besta();
                        cout << "\t\tTrocou para: Besta\n";
                        durabilidade2 = 3;
                        break;

                    case 2:
                        vetorArma2->Porrete();
                        cout << "\t\tTrocou para: Porrete\n";
                        durabilidade2 = 3;
                        break;

                    case 3:
                        vetorArma2->EsferaDeAtaque();
                        cout << "\t\tTrocou para: Esfera de Ataque\n";
                        durabilidade2 = 3;
                        break;
                    }
                    break;

                case 3:
                    vetorArma2->TridenteSagrado();
                    cout << "\t\tTrocou para: Tridente Sagrado\n";
                    durabilidade2 = 3;
                    break;

                case 4:
                    vetorArma2->Besta();
                    cout << "\t\tTrocou para: Besta\n";
                    durabilidade2 = 3;
                    break;

                case 5:
                    cout << "\t\tVoce so tem uma arma\n";
                    durabilidade2 = 3;
                    break;

                case 6:
                    vetorArma2->Porrete();
                    cout << "\t\tTrocou para: Porrete\n";
                    durabilidade2 = 3;
                    break;

                case 7:
                    cout << "\t\tVoce so tem uma arma\n";
                    durabilidade2 = 3;
                    break;

                case 8:
                    trocarPara = (rand() % 2) + 1;

                    switch (trocarPara)
                    {
                    case 1:
                        vetorArma2->GarraLetal();
                        cout << "\t\tTrocou para: Garra Letal\n";
                        durabilidade2 = 3;
                        break;

                    case 2:
                        vetorArma2->Porrete();
                        cout << "\t\tTrocou para: Porrete\n";
                        durabilidade2 = 3;
                        break;
                    }
                    break;
                }
                break;

            case 4:
                vetorPersona2->recuperaMana();
                vetorPersona2->recuperaVida();
                break;
            }
        }
        bulkathos = 0;
        if (vetorPersona->retornaVida() == 0)
        {
            cout << "\n------------ !! PLAYER 2 VENCEU !! ------------";
            i = -1;
        }
    }
}

void characterMenu()
{
    cout << "\n \n------------- Escolha sua Classe -------------";
    cout << "\n\t1 - Guerreiro "
         << "\t2 - Ladrao";
    cout << "\n\t3 - Mago      "
         << "\t4 - Paladino";
    cout << "\n\t5 - Animal    "
         << "\t6 - Troll";
    cout << "\n\t7 - Dragao    "
         << "\t8 - Zumbi";

    cout << "\n \n Player 1: ";
    cin >> classe1;

    switch (classe1)
    {
    case 1:
        vetorPersona->Guerreiro();
        vetorArma->Porrete();
        vetorMagia->Tempestade();
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
        vetorMagia->Bio();
        break;
    case 6:
        vetorPersona->Troll();
        vetorArma->Cajado();
        vetorMagia->Intoxicacao();
        break;
    case 7:
        vetorPersona->Dragao();
        vetorArma->GarraLetal();
        vetorMagia->HalitoDeFogo();
        break;
    case 8:
        vetorPersona->Zumbi();
        vetorArma->Cajado();
        vetorMagia->Intoxicacao();
        break;
    default:
        break;
    }

    cout << " Player 2: ";
    cin >> classe2;

    switch (classe2)
    {
    case 1:
        vetorPersona2->Guerreiro();
        vetorArma2->Porrete();
        vetorMagia2->Tempestade();
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
        vetorMagia2->Bio();
        break;
    case 6:
        vetorPersona2->Troll();
        vetorArma2->Cajado();
        vetorMagia2->Intoxicacao();
    case 7:
        vetorPersona2->Dragao();
        vetorArma2->GarraLetal();
        vetorMagia2->HalitoDeFogo();
        break;
    case 8:
        vetorPersona2->Zumbi();
        vetorArma2->Cajado();
        vetorMagia2->Intoxicacao();
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
    cout << "------------------------------ Bem vindo ao RPG de AEDS ------------------------------";
    int jogo = 0;

    while (jogo != 2)
    {
        cout << "\n\tMenu"
             << "\n  1. Novo Jogo"
             << "\n  2. Sair do programa"
             << "\n\n Option: ";
        cin >> jogo;

        switch (jogo)
        {
        case 1:
            characterMenu();
            combatMenu();

            cout << "\n------------------------- Fim de Jogo-------------------------\n";
            jogo = 0;
            break;

        case 2:
            cout << "\n\n\n\tCreditos"
                 << "\n Jogo desenvolvido pro: Gabriel Lucchesi e Lucas Carvalho da Luz"
                 << "\n Data: 28 de junho de 2021"
                 << "\n Desenvolvido para: disciplina Algoritmos e Estrututas de Dados 1 - 1o periodo - Puc Minas"
                 << "\n--------------------------------- Obrigado por Jogar ---------------------------------\n\n\n";
            break;
        }
    }
    return 0;
}