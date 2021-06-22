#include <iostream>

using namespace std;

class Menu
{
  public:
	Menu();
	//Operators

	int *p1;
	int choice;
	bool playing;

	//Functions

	void mainMenu();
	void characterMenu();
	void combatMenu();

	void rest();

	//Accessors

	inline bool getPlaying() const { return this->playing; }

	//Modifiers
};


