#include <iostream>
using namespace std;

void test(void (*pFunc)()) {
    pFunc();
}

int main() {

    auto func = []() { cout << "hello" << endl; };

    func();

    test([]() { cout << "hello again" << endl; });

    return 0;
}
