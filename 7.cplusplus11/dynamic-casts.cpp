#include <iostream>
using namespace std;

class Parent {
public:
    virtual void speak() {
        cout << "Parent" << endl;
    }

};

class Brother: public Parent {

};

class Sister: public Parent {

};

int main() {
    Parent parent;
    Brother brother;

    Parent *ppb = &brother;

    // Brother *pb = static_cast<Brother *>(&parent); -> maybe crash when use pointer

    Brother *pbb = dynamic_cast<Brother *>(ppb);

    if (pbb == nullptr) {
        cout << "invalid cast" << endl;
    } else {
        cout << ppb << endl;
    }

    return 0;
}
