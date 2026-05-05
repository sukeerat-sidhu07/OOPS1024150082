#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Animal a1;
    Dog d1;

    cout << "Using base class object:" << endl;
    a1.eat();

    cout << "\nUsing derived class object:" << endl;
    d1.eat();
    d1.bark();

    return 0;
}