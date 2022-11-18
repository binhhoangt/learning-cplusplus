#include <iostream>
using namespace std;

class Test {
private:
    int value;
    string text;
public: 
    Test (){

    }

    Test(int val) {
        value = val;
    }
};

Test getTest() {
    return Test();
}

void check(const Test &value) {
    cout << "lValue function!" << endl;
}

void check(Test &&value) {
    cout << "rValue function!" << endl;
}

int main() {

    Test test1 = getTest();

    Test &lTest1 = test1;

    Test &&rTest1 = getTest();

    check(test1);
    check(getTest());
    check(Test());

    return 0;
}
