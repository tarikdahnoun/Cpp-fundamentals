#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>

class Patient
{
  private:
    std::string name;
    int priority;

  public:
    Patient(std::string n = "", int p = 0) : name(n), priority(p) {}

    std::string getName() const { return name; }
    int getPriority() const { return priority; }

    void print() const { std::cout << name << " (Priority: " << priority << ")"; }

    bool operator<(const Patient &other) const { return this->priority < other.priority; }
    bool operator>(const Patient &other) const { return this->priority > other.priority; }
    bool operator==(const Patient &other) const
    {
        return this->name == other.name && this->priority == other.priority;
    }
};

#endif
