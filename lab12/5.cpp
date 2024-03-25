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

class BmtaBus : public Transportation
{
public:
    double fare()
    {
        return 6.50;
    }
};

class BTS : public Transportation
{
private:
    int station = 0;
public:
    void setStation(int station)
    {
        if (station <= 0)
            return;

        this->station = station;
    }

    double fare()
    {
        return 15 + (this->station * 5);
    }
};

class Passenger
{
private:
    double totalFare = 0.0;

public:
    void addTransportation(Transportation &trans)
    {
        double value = trans.fare();
        if (value <= 0)
            return;

        totalFare += value;
    };

    double getTotalFare() { return totalFare; };
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A')
        {
            Taxi *taxi = new Taxi();
        
            double distance;
            cin >> distance;
        
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        }
        else if (transportType == 'B')
        {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        }
        else if (transportType == 'C')
        {
            BTS *bts = new BTS();
        
            int station;
            cin >> station;
            
            bts->setStation(station);
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}