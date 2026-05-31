#include <iostream>
using namespace std;

// Abstract Class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived Class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    return 0;
}