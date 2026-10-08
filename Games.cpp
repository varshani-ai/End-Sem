#include <iostream>
using namespace std;

class Player {
  public:
    string name = "Arjun";
    int level = 10;
};

class Warrior: public Player {
  public:
    string weapon = "Sword";
};

class Wizard: public Player {
  public:
    int magicPower = 90;
};

int main()
{
  Warrior warrior;
  Wizard wizard;

  cout << "Warrior: " << warrior.name << " "<< warrior.level << " "<< warrior.weapon << endl;

  cout << "Wizard: " << wizard.name << " "<< wizard.level << " "<< wizard.magicPower << endl;

  return 0;
}
