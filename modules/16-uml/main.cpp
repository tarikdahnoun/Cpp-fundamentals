#include <iostream>
#include <string>

using namespace std;

class Song {
    private:
        string name;
        string artist;
    public:
        void setName(string n)
        {  name = n;  }
        void setArtist(string a)
        {  artist = a;  }
        string getName()
        {  return name;  }
        string getArtist()
        {  return artist;  }
};

int main() {
    Song s;
    string input;

    cout << "Please enter the name of the song: ";
    getline(cin, input);
    s.setName(input);
    cout << "Please enter the name of the artist: ";
    getline(cin, input);
    s.setArtist(input);
    cout << endl;

    string name = s.getName();
    string artist = s.getArtist();

    cout << "The name of the song is " << name << endl;
    cout << "The name of the artist is " << artist << endl;

    return 0;
}

/*
Please enter the name of the song: Ring of Fire
Please enter the name of the artist: Johnny Cash

The name of the song is Ring of Fire
The name of the artist is Johnny Cash
*/