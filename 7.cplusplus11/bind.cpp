#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test {
public:
    int add(int a, int b, int c) {
        cout << a << ", " << b << ", " << c << endl;
        return a+b+c;
    }
};

int run(function<int(int, int)> func) {
    return func(7,3);
}

int main() {
    
    Test test;

    auto calculate = bind(&Test::add, test, _1, 100, _2);

    cout << calculate(10, 30) << endl;
    cout << run(calculate) << endl;

    return 0;
}
