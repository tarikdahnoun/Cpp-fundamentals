#include <iostream>

using namespace std;

class Base
{
    public:
        virtual void show()
        {cout << "Base\n";}
};

class Derived : public Base
{
    public:
        void show()
        {cout << "Derived\n";}
};

class Player
{
    protected:
        string name;
        double weight;
        double height;
    public:
        Player(string n, double w, double h)
        {
            name = n;
            weight = w;
            height = h;
        }

        virtual void printStats() const = 0;
};

class BasketballPlayer : public Player{
    private:
        int fieldGoals;
        int attempts;
    public:
        BasketballPlayer(string n, double w, double h, int fg, int a) : Player(n, w, h)
        {
            fieldGoals = fg;
            attempts = a;
        }
        void printStats() const
        {
            cout << "Name: " << name << endl;
            cout << "Weight: " << weight << endl;
            cout << "Height: " << height << endl;
            cout << "Field Goals: " << fieldGoals << endl;
            cout << "Attempts: " << attempts << endl;
        }
};

int main() {
    Base b;
    Derived d;

    cout << "===== Polymorphism =====\n";
    Base* ptr = &b;
    ptr->show();

    ptr = &d;
    ptr->show();
    cout << "=========================\n";
    cout << "===== Pure Abstract Class =====\n";



    return 0;
}
