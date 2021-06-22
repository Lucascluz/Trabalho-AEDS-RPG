#include <iostream>
#include "accessdata.h"
#include "menus.h"

using namespace std;

Menu::Menu(){};

void Menu::mainMenu()
{
	cout << "\n\tMenu principal\nSelecione uma das opcoes abaixo";
	cout << "\n0: Sair do programa\n1: Iniciar jogo";
	cin >> choice;

	switch (choice)
	{
	case 0:
		playing = false;
		break;

	case 1:
		playing = true;
		characterMenu();
		break;

	default:
		cout << "\n\tOpção invalida!\n";
		break;
	}
}

void Menu::characterMenu()
{
	int classe;

	cout << "\n-------------------------- Escolha sua classe --------------------------\n";
	cout << " 0. Returnar ";
	cout << "\n";
	cout << " 1. Guerreiro"
		 << "\t"
		 << " 2. Animal"
		 << "\n";
	cout << " 3. Ladrao   "
		 << "\t"
		 << " 4. Troll"
		 << "\n";
	cout << " 5. Mago     "
		 << "\t"
		 << " 6. Dragao"
		 << "\n";
	cout << " 7. Paladino "
		 << "\t"
		 << " 8. Zumbi"
		 << "\n";
	cout << "\nPlayer 1 classe: ";
	cin >> classe;

	int qtdAtributos = 7;
	Accessdata *p1 = new Accessdata(qtdAtributos);

	switch (classe)
	{
	case 0:

		break;

	case 1:
		int *atributos = p1->obtemAtributos("guerreiro.txt");

		cout << "Lusca";

		break;

	case 2:
		int *atributos = p1->obtemAtributos("animal.txt");

		for (int i = 0; i < qtdAtributos; i++)
			cout << atributos[i] << " ";

		cout << endl;
		break;

	case 3:
		int *atributos = p1->obtemAtributos("mago.txt");

		for (int i = 0; i < qtdAtributos; i++)
			cout << atributos[i] << " ";

		cout << endl;
		break;

	case 4:

		break;

	case 5:

		break;

	case 6:
		break;

	case 7:

		break;

	case 8:

		break;

	default:
		break;
	}
};

void Menu::combatMenu()
{
	cout << "\n\tMenu de combate\nSelecione uma das acoes";
	cout << "\n0: Descansar  \n1: Enfeiticar \n2: Golpear";
	cin >> choice;

	switch (choice)
	{
	case 0:

		break;

	case 1:

		break;

	default:
		cout << "\n\tAcao nao existente\n";
		break;
	}
}
