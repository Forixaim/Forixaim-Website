#pragma once
#include <iostream>
#include <string>

class Unit
{
	private:
  //Core Stats
  std::string Name;
	int Health;
	int MaxHealth;
	int Mana;
	int MaxMana;
	int Ultimate;
	int MaxUltimate;
	int Experience;
	int MaxExperience;
  int Level;
  int MaxLevel = 100;
  int BodyTemperature;
  //Attributes
  int PhysAttack;
  int MagAttack;
  int Dexterity;
  int Constitution;
  int Intelligence;
  int Speed;
  int Defense;
  int Resistance;
  int Sleeper;
  int Charm;
  //Combat Skills
  int SwordExp;
  int MaxSwordExp;
  char SwordRank;
  int SpearExp;
  int MaxSpearExp;
  char SpearRank;
  int AxeExp;
  int MaxAxeExp;
  char AxeRank;
  int BowExp;
  int MaxBowExp;
  char BowRank;
  int StaffExp;
  int MaxStaffExp;
  char StaffRank;
  int TomeExp;
  int MaxTomeExp;
  char TomeRank;
  int CrossbowExp;
  int MaxCrossbowExp;
  char CrossbowRank;
  int FirearmExp;
  int MaxFirearmExp;
  char FirearmRank;
  int BrawlExp;
  int MaxBrawlExp;
  char BrawlRank;
  int ShieldExp;
  int MaxShieldExp;
  char ShieldRank;
  int AcrobaticsExp;
  int MaxAcrobaticsExp;
  char AcrobaticsRank;
  int ArmorExp;
  int MaxArmorExp;
  char ArmorRank;
  int RidingExp;
  int MaxRidingExp;
  char RidingRank;
  //Out of Combat Skills
  int CookingExp;
  int MaxCookingExp;
  char CookingRank;
  int FishingExp;
  int MaxFishingExp;
  char FishingRank;
  int TrackingExp;
  int MaxTrackingExp;
  char TrackingRank;
  int SocialExp;
  int MaxSocialExp;
  char SocialRank;
  //Positions
  int XCoordinate;
	int YCoordinate;
	int ZCoordinate;
	int Direction;
	int AttackDirection;
  //Public Variables
	public:
  //Change Stat Values
	void Damage();
	void Heal();
  void ManaDamage();
  void ManaHeal();
	void LevelUp();
	void AddExperience();
  //Movement
	void Move(int speed, int Direction);
	void ChangeDirection();
	void SetAttackDirection();
  //Set Initial Stats
  void SetMaxHealth();
  void SetExperience();
  void SetMaxExperience();
  void SetLevel(int BaseLevel);
  void SetMana();
  void SetMaxMana();
  void SetMaxLevel();
  void SetUltimate();
  void SetMaxUltimate();
  void SetName();
  //Get Directional Data
	int GetDirection();
	int GetAttackDirection();
  int GetLevel();
  //Get Stats
  std::string GetName();
  int GetHealth();
  int GetMana();
  int GetMaxHealth();
  int GetMaxMana();
  int GetExperience();
  //Constructor
	Unit(int BaseLevel);
  //Destructor
	~Unit();
};