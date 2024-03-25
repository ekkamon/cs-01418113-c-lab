#include <iostream>
#include <string>

using namespace std;

class Music {
private:
    string name;
public:
    Music(string name) : name(name) {};

    string getName()
    {
        return this->name;
    }
};

class MusicPlaylist {
private:
    int count, currTrackId;
    Music *list[20];

public:
    MusicPlaylist() : count(0), currTrackId(1) {};

    void add(string musicName)
    {
        list[count++] = new Music(musicName);
    }

    void setCurrentTrack(int id)
    {
        this->currTrackId = id;
    }

    string play()
    {
        return this->list[this->currTrackId-1]->getName();
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}
