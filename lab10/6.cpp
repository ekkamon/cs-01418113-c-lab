#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time {
private:
    int hour, minute, second, duration;

    int mod(int a, int b) {
        return (a % b + b) % b;
    }

public:
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second)
    {
        int newValue = (hour * 3600) + (minute * 60) + second;
        this->setDuration(newValue == 86400 ? 0 : newValue);
    }
    
    Time(int duration) : duration(this->mod(duration, 86400)) {
        this->setAttrs();
    };

    void setHour(int hour)
    {
        this->hour = hour;
    }

    void setMinute(int minute)
    {
        this->minute = minute;
    }

    void setSecond(int second)
    {
        this->second = second;
    }

    void setAttrs()
    {
        this->hour = this->duration / 3600;
        this->minute = this->duration % 3600 / 60;
        this->second = this->duration % 3600 % 60;
    }

    void setDuration(int duration)
    {
        this->duration = duration;
    }

    int getHour()
    {
        return this->hour;
    }

    int getMinute()
    {
        return this->minute;
    }

    int getSecond()
    {
        return this->second;
    }

    int getDuration()
    {
        return this->duration;
    }

    Time add(Time other)
    {
        return Time(this->mod((this->duration + other.duration), 86400));
    }

    int subtract(Time other)
    {
        return this->mod((this->duration - other.duration), 86400);
    }

    int equals(Time other)
    {
        return other.duration == this->duration;
    }
    
    string toString()
    {
        char buff[1024];
        sprintf(buff, "%02d:%02d:%02d", this->hour, this->minute, this->second);
        
        return string(buff);
    }
};

int main()
{
    Time t1(2, 2, 2);
    Time t2(1, 1, 1);
    Time t3(82739);
    Time t4(0, 0, 1);
    Time t5(0, 0, 2);
    Time t6(26, 60, 60);
    Time t7(55400);

    cout << t1.subtract(t5) << endl;
    cout << t5.subtract(t1) << endl;

    // cout << t1.subtract(t2) << endl;
    // cout << t1.toString() << endl;

    // cout << t2.subtract(t1) << endl;
    // cout << t2.toString() << endl;
    // cout << t2.getDuration() << endl;

    // cout << t3.toString() << endl;

    // cout << t4.subtract(t5) << endl;
    // cout << t4.toString() << endl;

    // cout << t6.equals(t7) << endl;
    // cout << t6.toString() << endl;
    // cout << t7.toString() << endl;


    // cout << t6.add(t7).getDuration() << endl;
    // cout << t6.toString() << endl;

    // cout << t1.subtract(t2) << endl;
    // cout << t1.toString() << endl;

    // cout << t6.add(t7).toString() << endl;
    // cout << t7.toString() << endl;

    // cout << t6.equals(t7) << endl;

    // cout << t6.getHour() << endl;
    // cout << t6.getMinute() << endl;
    // cout << t6.getSecond() << endl;

    // cout << t4.add(t5).toString() << endl;

    // cout << t4.getDuration() << endl;

    // Time t6(0, 0, 0);
    
    // while(true)
    // {
    //     // if (t6.equals(Time(0, 0, 0)))
    //     //     break;

    //     t6.subtract(Time(0, 1, 0));

    //     cout << t6.toString() << endl;
    // }
}
