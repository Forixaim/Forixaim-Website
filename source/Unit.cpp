#include "Unit.h"
#include <iostream>
#include <cmath>

using namespace std;

// Getters

int Unit::GetDirection()
{
  return Direction;
}

int Unit::GetAttackDirection()
{
  return AttackDirection;
}

string Unit::GetName()
{
  return Name;
}

// Setters

void Unit::SetName()
{
  cin >> Name;
}



void Unit::SetMaxHealth()
{
  MaxHealth = rand() % (1000 * ((Level+5)*10000));
  if (MaxHealth > 1000000000)
  {
    MaxHealth = 1000000000;
  }
}

void Unit::SetLevel(int BaseLevel)
{
  Level = BaseLevel;
}

//Constrcutor

Unit::Unit(int BaseLevel)
{
  SetName();
  SetLevel(BaseLevel);
  SetMaxHealth();
  cout << "Successfully constructed Unit called: " << Name << "\n\n";
  cout << "Level: " << Level << "\nHealth: " << MaxHealth;
}

//Destructor

Unit::~Unit()
{
  cout << "\nSuccessfully deleted " << Name << ".\n\n";
}