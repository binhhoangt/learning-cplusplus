#include <iostream>
using namespace std;

class Test {
private:
    int id;
    string name;
public:
    Test(): id(0), name("") {

    }

    Test(int id, string name): id(id), name(name) {

    }

    Test (Test &other) {
        cout << "Copy constructor running..." << endl;
        id = other.id;
        name = other.name;
    }

    void print() {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other) {
        cout << "Assignment running..." << endl;
        id = other.id;
        name = other.name;

        return *this;
    }

    friend ostream &operator<<(ostream &out, const Test &test) {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main() {

    Test test1(10, "Mike");
    cout << test1 << endl;

    // Assigment operator
    Test test2(20, "Bob");
    test2 = test1;
    test2.print();

    Test test3;
    test3.operator=(test2);
    test3.print();

    // Copy constructor
    Test test4 = test1;
    test4.print();

    return 0;
}
