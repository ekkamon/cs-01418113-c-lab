#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird : public Animal {
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet {
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird : public Bird, public Pet {
public:
    OwnedBird(string, int, int, int);
};

Animal::Animal(int happiness, int energy, int fullness) : happiness(happiness), energy(energy), fullness(fullness)
{
    this->limitStat();
}

void Animal::limitStat()
{
    this->happiness = max(0, min(this->MAX_HAPPINESS, this->happiness));
    this->energy = max(0, min(this->MAX_ENERGY, this->energy));
    this->fullness = max(0, min(this->MAX_FULLNESS, this->fullness));
}

int Animal::getHappiness()
{
    return this->happiness;
}

int Animal::getEnergy()
{
    return this->energy;
}

int Animal::getFullness()
{
    return this->fullness;
}

void Animal::eat(int food)
{
    if (food <= 0)
        return;

    this->fullness += food;
    if (this->fullness > this->MAX_FULLNESS)
        this->happiness -= 10;

    this->limitStat();
}

void Animal::play(int hour)
{
    if (hour <= 0 || this->energy == 0 || this->fullness == 0)
        return;
    
    this->energy -= (10 * hour);
    this->fullness -= (20 * hour);
    this->happiness += (5 * hour);
    this->limitStat();
}

void Animal::sleep(int hour)
{
    if (hour <= 0)
        return;

    this->energy += (10 * hour);
    this->fullness -= (10 * hour);
    this->limitStat();
}

Bird::Bird(int happiness, int energy, int fullness) : Animal(happiness, energy, fullness) {};

void Bird::fly(int hour)
{
    if (hour <= 0)
        return;
    
    this->energy -= (5 * hour);
    this->limitStat();
}

void Bird::sing()
{
    this->happiness += 5;
    this->limitStat();
}

Pet::Pet(string name) : name(name) {};

string Pet::getName()
{
    return this->name;
}

void Pet::setName(string name)
{
    this->name = name;
}

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness) : Pet(name), Bird(happiness, energy, fullness) {};

int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}
