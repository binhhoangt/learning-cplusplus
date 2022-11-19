#include <iostream>
using namespace std;

class Parent {
public:
    void speak() {
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

    // Brother *pbb = static_cast<Brother *>(ppb);    -> maybe crash when use pointer

    Parent &&p = static_cast<Parent &&>(parent);
    p.speak();

    return 0;
}
