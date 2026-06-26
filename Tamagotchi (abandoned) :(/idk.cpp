#include <iostream>
#include <string>
#include "UTILS.hpp"

class Basic_Info {
private:
	std::string owner_name;
    std::string name;
	int age;
	int birthday;
	bool gender;
    
public:
    //setters ot Basic_Info
	void SetOwnerName(std::string Owner_Name) { owner_name = Owner_Name; }
    void SetBirthday(int Birthday) { birthday = Birthday; }
    void SetGender(bool Gender) { gender = Gender; }
	void SetName(std::string Name) { name = Name; }
    void SetAge(int Age) { age = Age; }

    //getters of  Basic_Info
    std::string GetOwnerName() { return owner_name; }
    int GetBirthday() { return birthday; }
    int GetGender() { return gender; }
    std::string GetName() { return name; }
    int GetAge() { return age;}
 };
    
class Stats {
private:
    int hunger;
	int thirst;
	int energy;
	int health;
	int happiness;
	int sleepiness;

public:
    //setters of Stats
	void SetHunger(int Hunger) { hunger = Hunger;  }
	void SetThirst(int Thirst) { thirst = Thirst; }
	void SetEnergy(int Energy) { energy = Energy;  }
    void SetHealth(int Health) { health = Health;  }
	void SetHappiness(int Happiness) { happiness = Happiness; }
	void SetSleepiness(int Sleepiness) { sleepiness = Sleepiness; }

    //getters of Stats
    int GetHunger() {return hunger;}
    int GetThirst() {return thirst;}
    int GetEnergy() {return energy;}
    int GetHealth() {return health;}
    int GetHappiness() {return happiness;}
    int GetSleepiness() {return sleepiness;}
};   
    
     
class Growth {
private:
	int knowledge;
	int weight;
	int height;

public:
    //setters of Growth
    void SetKnowledge(int Knowledge) { knowledge = Knowledge; }
    void SetWeight(int Weight) { weight = Weight; }
    void SetHeight(int Height) { height = Height; }

    //getters of Growth
    int GetKnowledge() {return knowledge;}
    int GetWeight() {return weight;}
    int GetHeight() {return height;}
};

class Pet {
private:
    Growth growth;
    Stats stats;
    Basic_Info info;

public:
   
};
   
int main() {
   print("dusjsb");

    return 0;
}
