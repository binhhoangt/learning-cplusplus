#include <iostream>
using namespace std;

template<class T>
void print(T n) {
    cout << "Template: " << n << endl;
}

void print(int value) {
    cout << "Non-template: " << value << endl;
}

int main() {
    print<int>(5);
    print<string>("hello");

    print("Hi");

    print(6);
    print<>(6);

    return 0;
}