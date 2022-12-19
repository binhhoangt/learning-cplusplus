#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <exception>
#include <atomic>

using namespace std;

std::atomic_flag lock_count = ATOMIC_FLAG_INIT;

void print(string str) {
    try {
        for (int i=0; i<5; ++i) {
            while(lock_count.test_and_set()) {}
            cout << str << endl;
            lock_count.clear();
        }
    } catch (std::exception &e) {
        // cout << "Exception catch";
    }

}

int main() {
    thread t1{print, "abc"};
    thread t2{print, "xyz"};

    t1.join();
    t2.join();

}
