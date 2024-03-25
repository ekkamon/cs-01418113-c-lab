#include <iostream>
using namespace std;

class Animal
{
private:
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

int main()
{
    Animal cat(100, 100, 100);

    cat.play(1);

    cout << cat.getEnergy() << endl;
    cout << cat.getFullness() << endl;
    cout << cat.getHappiness() << endl;
}