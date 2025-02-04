#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;


template<class ItemType>
class List
{
private:
    static const int CHUNK_SIZE=5;
    ItemType *list;
    int numItems;
    int maxItems;
public:
    List() { numItems = 0; maxItems = CHUNK_SIZE;
        list = new ItemType[CHUNK_SIZE]; }
    ~List() { delete [] list; }
    
    bool isEmpty()  const { return numItems==0; }
    int getLength() const { return numItems; }
    bool insert(int pos, const ItemType& item);
    bool remove(int pos);
    
    void clear() { numItems = 0; }
    
    ItemType getEntry(int pos) const;
    
    void setEntry(int pos, const ItemType& item);
    void resize(int newCapacity);
    void display();
};

template<class ItemType>
void List<ItemType>::display()
{
    for(int i=0; i<numItems; i++) {
        cout << list[i];
        if (i < numItems - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

template<class ItemType>
void List<ItemType>::resize(int newCapacity)
{
    cout << "Resizing the list to " << newCapacity << " slots.\n";
    ItemType* tmpList = new ItemType[newCapacity];
    for (int i = 0; i < numItems; i++)
    {
        tmpList[i] = list[i];
    }
    delete [] list;
    list = tmpList;
    maxItems = newCapacity;
}

template<class ItemType>
bool List<ItemType>::insert(int pos, const ItemType& item)
{
    bool canAdd;
    
    canAdd = ((pos > 0) && (pos <= numItems + 1));
    if (canAdd)
    {
        if (numItems >= maxItems)
        {
            int newCapacity = maxItems + CHUNK_SIZE;
            while (newCapacity <= numItems) {
                newCapacity += CHUNK_SIZE;
            }
            resize(newCapacity);
        }
        for(int i=numItems; i>=pos; i--)
            list[i] = list[i-1];
        
        list[pos-1] = item;
        
        numItems++;
    }
    
    return canAdd;
}

template<class ItemType>
ItemType List<ItemType>::getEntry(int pos) const
{
    if(pos<1 || pos>getLength()) {
        throw invalid_argument("ERROR: getEntry() using invalid position");
    }
    return list[pos-1];
}


template<class ItemType>
void List<ItemType>::setEntry(int pos, const ItemType& item)
{
    if(pos<1 || pos>getLength()) {
        throw invalid_argument("ERROR: setEntry() using invalid position");
    }

    list[pos-1] = item;
}

template<class ItemType>
bool List<ItemType>::remove(int pos)
{
    bool canRemove;
    
    canRemove = ((pos > 0) && (pos <= numItems));
    if (canRemove)
    {
        for(int i = pos; i < numItems; i++)
        {
            list[i-1] = list[i];
        }
        
        numItems--;
    }
    list[numItems] = ItemType();
    return canRemove;
}

int getTrack()
{
    bool inputCheck;
    int trackNumber;
    
    do
    {
        inputCheck = true;
        cout << "Please enter the track number you'd like to view: ";
        if (!(cin >> trackNumber))
        {
            cout << "Please enter numbers only.\n";
            cin.clear();
            cin.ignore(10000,'\n');
            inputCheck = false;
        }
    } while (!inputCheck);
    return trackNumber;
}


int main()
{
    List<string> songs;
    char goAgain = 'y';
    int trackNumber;
    string trackName;

    songs.insert(1, "Track 5");
    songs.insert(1, "Track 4");
    songs.insert(1, "Track 3");
    songs.insert(1, "Track 2");
    songs.insert(1, "Track 1");

    songs.display();

    songs.remove(2);
    songs.display();

    songs.setEntry(2, "Replaced Track");
    try
    {
        songs.setEntry(200, "Replaced Track");
    }
    catch (invalid_argument& arg)
    {
        cout << arg.what() << endl;
    }

    songs.display();

    songs.insert(1, "New track 9");
    songs.insert(1, "New track 8");
    songs.insert(1, "New track 7");
    songs.insert(1, "New track 6");
    songs.insert(1, "New track 5");
    songs.insert(1, "New track 4");
    songs.insert(1, "New track 3");
    songs.insert(1, "New track 2");
    songs.insert(1, "New track 1");
    songs.display();

    cout << "\nCreating a new list\n";    
    songs.clear();
    songs.insert(1, "One More Saturday Night");
    songs.insert(1, "Friday I'm in Love");
    songs.insert(3, "Sunday Morning Coming Down");
    songs.insert(1, "California Love");
    songs.display();
    cout << endl;

    
    cout << "Welcome!  There are " << songs.getLength() << " tracks.\n";
    while (goAgain!='n')
    {
        trackNumber = getTrack();
        try
        {
            trackName = songs.getEntry(trackNumber);
        }
        catch (invalid_argument arg)
        {
            cout << arg.what() << endl;
            trackName = "No Track";
        }
        cout << "Your track name is " << trackName << endl;
        cout << "Go again? (y/n) ";
        cin >> goAgain;
    }
         
    cout << "Rock on!\n";
    return 0;
}

/*
Track 1, Track 2, Track 3, Track 4, Track 5
Track 1, Track 3, Track 4, Track 5
ERROR: setEntry() using invalid position
Track 1, Replaced Track, Track 4, Track 5
Resizing the list to 10 slots.
Resizing the list to 15 slots.
New track 1, New track 2, New track 3, New track 4, New track 5, New track 6, New track 7, New track 8, New track 9, Track 1, Replaced Track, Track 4, Track 5

Creating a new list
California Love, Friday I'm in Love, One More Saturday Night, Sunday Morning Coming Down

Welcome!  There are 4 tracks.
Please enter the track number you'd like to view: 100
ERROR: getEntry() using invalid position
Your track name is No Track
Go again? (y/n) y
Please enter the track number you'd like to view: 3
Your track name is One More Saturday Night
Go again? (y/n) n
Rock on!
*/
