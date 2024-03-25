#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual int fare() = 0;
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

    int fare()
    {
        return 15 + (this->station * 5);
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        cout << "BTS fare: "
             << bts.fare() << endl;
    } else if(tc == 2) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}