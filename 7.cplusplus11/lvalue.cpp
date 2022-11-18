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

int main() {

    Test test1 = getTest();

    Test &rTest1 = test1;

    // Test &rTest2 = getTest();

    const Test &rTest2 = getTest();

    Test test2(Test(1));

    return 0;
}
