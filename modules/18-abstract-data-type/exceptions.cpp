#include <iostream>

using namespace std;

template<class ItemType>
class Box
{
    private:
        ItemType item;
    public:
        void setItem(const ItemType& i)
            {   item = i;   }

        ItemType getItem() const
            {   return item;   }
};

Box<string> findBox(Box<string> boxes[], int size, string target)
{
    int i = 0;
    bool found = false;

    while (!found && i < size)
    {
        if (boxes[i].getItem() == target)
        {
            found = true;
        }
        else
        {
            i++;
        }
    }

    if (!found)
    {
        throw logic_error("Target not found in any box");
    }

    return boxes[i];
}


int main() {
    int size = 3;
    Box<int> intBox;
    Box<string> stringBox;
    Box<string> boxes[] = {Box<string>(), Box<string>(), Box<string>()};
    boxes[0].setItem("one");
    boxes[1].setItem("two");
    boxes[2].setItem("three");

    intBox.setItem(7);
    stringBox.setItem("seven");
    cout << intBox.getItem() << endl;
    cout << stringBox.getItem() << endl;
    
    Box<string> foundBox = findBox(boxes, size, "two");
    cout << foundBox.getItem() << endl;

    cout << "---" << endl;

    try
    {
        foundBox = findBox(boxes, size, "four");
    }
    catch(logic_error logErr)
    {
        cout << logErr.what() << endl;
        foundBox.setItem("Nothing");
    }

    cout << foundBox.getItem() << endl;   

    return 0;
}
