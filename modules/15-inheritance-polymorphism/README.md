# Inheritance and Polymorphism

## Base class specification

| **Base Class Access Specification** | **How Members of the Base Class Appear in the Derived Class**                                 |
|-------------------------------------|------------------------------------------------------------------------------------------------|
| **private**                         | - Private members of the base class are inaccessible to the derived class.                    |
|                                     | - Protected members of the base class become private members of the derived class.           |
|                                     | - Public members of the base class become private members of the derived class.              |
| **protected**                       | - Private members of the base class are inaccessible to the derived class.                   |
|                                     | - Protected members of the base class become protected members of the derived class.         |
|                                     | - Public members of the base class become protected members of the derived class.            |
| **public**                          | - Private members of the base class are inaccessible to the derived class.                   |
|                                     | - Protected members of the base class become protected members of the derived class.         |
|                                     | - Public members of the base class become public members of the derived class.               |

## Constructors and destructors in base and derived classes

* The base class constructore is called before the derived class constructor
* The best class destructor is called after the derived class destructor
* By default, default constructors are called unless parameters are provided

## Polymorphism

"Many uses", allows an object pointer or object reference variable to reference objects of different types and call the appropriate member function depending on the type of object being referenced.

## Virtual functions

* A virtual member function is dynamically bound at runtime
* A non-virtual member function is statically bound at compile time

## Abstract classes and pure virtual functions

* Abstract classes cannot be instantiated, but other classes can be derived from it
* A pure virtual function is a virtual member function fo a base class that must be overriden in derived classes
* When a class contains a pure virtual function as a member, it becomes an abstract base class.

**Why pure virtual functions?** It is a way to enforce things.

## Multiple inheritance

A derived class may have two or more base classes. Not all languages allow this, not good practice to use it unless theres a good reason

This can be dangerous, know the "deadly diamond of death".
