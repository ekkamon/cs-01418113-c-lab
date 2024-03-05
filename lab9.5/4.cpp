#include <iostream>

using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main()
{
    string input;
    Word data[20];
    int i, last_word = 0, find = 0;

    while (true)
    {
        cin >> input;
        if (input == "exit")
            break;

        for(i = 0; i < 20; i++)
            if (input == data[i].word)
            {
                find = i;
                break;
            }

        if (i == 20)
        {
            data[last_word].word = input;
            data[last_word].count = 1;
            last_word++;
        } else data[find].count++;
    }

    cout << "Output:" << endl;
    for(int i = 0; i < last_word; i++)
        cout << data[i].word << " = " << data[i].count << endl;
}