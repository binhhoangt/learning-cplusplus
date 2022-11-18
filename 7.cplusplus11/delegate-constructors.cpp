#include <iostream>
using namespace std;

class Parent {
    int dogs{5};
    string text;
public:
    Parent(): Parent("hello") {
        cout << "No parameter parent constructor" << endl;
    }

    Parent(string text) {
        this->text = text;
        cout << "string parent constructor" << endl;
    }
};

class Child: public Parent {
public: 
    Child() = default;
};

int main() {
    Parent parent("Hello");
    Child child;
    return 0;
}
