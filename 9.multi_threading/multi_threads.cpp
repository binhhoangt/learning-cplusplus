#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex print_mutex;

void print(string str) {
    print_mutex.lock();
    cout << str << endl;
    print_mutex.unlock();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

int main() {
    thread t1{print, "abc"};
    thread t2{print, "xyz"};

    t1.join();
    t2.join();

}
