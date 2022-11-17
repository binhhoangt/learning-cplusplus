#include <iostream>
using namespace std;

void test(int value) {
    cout << "Hello " << value << endl;
}

int main() {
    test(8);

    void (*pTest)(int) = test;

    pTest(7);

    return 0;
}