#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Pet {
public:
    void play() {
        cout << "Pet plays" << endl;
    }
};

class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();   
    myDog.play();  
    myDog.bark();  

    return 0;
}

