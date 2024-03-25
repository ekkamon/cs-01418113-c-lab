#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation
{
private:
    double distance;
public:
    Taxi() : distance(0) {};

    void setDistance(double distance)
    {
        if (distance <= 0)
            return;
        
        this->distance = distance;
    };

    double fare()
    {
        return 35.00 + (this->distance * 2.00);
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        cout << "Taxi fare: "
             << taxi.fare() << endl;
    } else if(tc == 2) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        Transportation *transport = &taxi;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}