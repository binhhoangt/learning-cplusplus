#include <iostream>
using namespace std;

class Animal {
public:
    virtual void run()=0;
    virtual void speak()=0;
};

class Dog: public Animal {
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Labradar: public Dog {
public:
    Labradar() {
        cout << "new Labradar" << endl;
    }
    virtual void run() {
        cout << "Labradar running" << endl;
    }
};

void test(Animal &a) {
    a.run();
}

int main() {
    
    Animal *animals[5];

    Labradar lab;
    lab.run();
    lab.speak();

    animals[0] = &lab;
    animals[0]->speak();

    test(lab);

    return 0;
}
