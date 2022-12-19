#include <iostream>
#include <thread>

using namespace std;

void hello() {
    cout << "Hello" << endl;
}

void hello2(string str) {
    cout << str << endl;
}

void hello3(string& str) {
    str = "xyz";
}

void func(string&& s) {

}

class greeter {
public:
    void hello() {std::cout << "Hello, Member function" << endl;}
};

int main() {
    // string s{"abc"};
    // thread t{hello3, std::ref(s)};
    // thread t{func, std::move(s)};

    // greeter greet;
    // thread t{greeter::hello, &greet};

    thread t{[]() {cout << "Hello lamda" << endl;}};

    cout << "Doing some work.. " << endl;
    t.join();
}
