#include <iostream>
#include <stdexcept>

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

Box<int> findBox(Box<int> boxes[], int size, int target)
{
    if (target < 0)
    {
        throw logic_error("Target cannot be negative");
    }

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
    int size = 5;
    int target = 1111;
    Box<int> boxes[] = {Box<int>(), Box<int>(), Box<int>(), Box<int>(), Box<int>()};
    boxes[0].setItem(2345);
    boxes[1].setItem(7654);
    boxes[2].setItem(1111);
    boxes[3].setItem(9182);
    boxes[4].setItem(7364);

    Box<int> foundBox;
    try
    {
        foundBox = findBox(boxes, size, target);
    }
    catch(const logic_error& logErr)
    {
        cout << logErr.what() << endl;
        foundBox.setItem(0);
    }

    cout << foundBox.getItem() << endl;   

    return 0;
}

/*
1111
*/
