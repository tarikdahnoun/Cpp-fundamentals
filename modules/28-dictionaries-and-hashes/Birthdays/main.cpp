#include <iostream>
#include <string>
using namespace std;

struct Birthday
{
    int month;
    int day;
    int year;
};

class Person
{
  private:
    string name;
    Birthday birthday;

  public:
    Person() {}
    Person(string n, Birthday b) : name(n), birthday(b) {}

    string getName() const { return name; }
    Birthday getBirthday() const { return birthday; }

    void display() const
    {
        cout << "Name: " << name << ", Birthday: " << birthday.month << "/" << birthday.day << "/"
             << birthday.year << endl;
    }
};

class Dictionary
{
  private:
    static const int MAX_SIZE = 100;
    Person people[MAX_SIZE];
    int size;

    int binarySearch(const string &target) const
    {
        int left = 0, right = size - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (people[mid].getName() == target)
                return mid;
            else if (people[mid].getName() < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }

    int findInsertIndex(const string &name) const
    {
        int left = 0, right = size;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (people[mid].getName() < name)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }

  public:
    Dictionary() : size(0) {}

    void addPerson(const Person &p)
    {
        if (size >= MAX_SIZE)
        {
            cout << "Dictionary full, cannot add.\n";
            return;
        }
        int index = findInsertIndex(p.getName());
        for (int i = size; i > index; --i)
            people[i] = people[i - 1];
        people[index] = p;
        size++;
    }

    void removePerson(const string &name)
    {
        int index = binarySearch(name);
        if (index == -1)
        {
            cout << "Person not found.\n";
            return;
        }
        for (int i = index; i < size - 1; ++i)
            people[i] = people[i + 1];
        size--;
    }

    void searchBirthday(const string &name) const
    {
        int index = binarySearch(name);
        if (index == -1)
        {
            cout << "Person not found.\n";
        }
        else
        {
            Birthday b = people[index].getBirthday();
            cout << name << "'s birthday: " << b.month << "/" << b.day << "/" << b.year << endl;
        }
    }

    void displayAll() const
    {
        for (int i = 0; i < size; ++i)
            people[i].display();
    }

    void displayByMonth(int month) const
    {
        bool found = false;
        for (int i = 0; i < size; ++i)
        {
            if (people[i].getBirthday().month == month)
            {
                people[i].display();
                found = true;
            }
        }
        if (!found)
            cout << "No entries found for month " << month << ".\n";
    }
};

int main()
{
    Dictionary dict;

    Birthday b1 = {5, 21, 1995};
    Birthday b2 = {12, 10, 1988};
    Birthday b3 = {5, 15, 1999};

    dict.addPerson(Person("Alice", b1));
    dict.addPerson(Person("Bob", b2));
    dict.addPerson(Person("Charlie", b3));

    cout << "\nAll people:\n";
    dict.displayAll();

    cout << "\nSearch for Bob:\n";
    dict.searchBirthday("Bob");

    cout << "\nPeople born in May:\n";
    dict.displayByMonth(5);

    cout << "\nRemoving Alice...\n";
    dict.removePerson("Alice");

    cout << "\nAll people after removal:\n";
    dict.displayAll();

    return 0;
}
