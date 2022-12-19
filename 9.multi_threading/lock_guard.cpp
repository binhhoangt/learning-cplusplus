#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <exception>

using namespace std;

mutex print_mutex;

void print(string str) {
    try {
        for (int i=0; i<5; ++i) {
            lock_guard<mutex> lg(print_mutex);
            cout << str << endl;
            throw std::exception();
            print_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
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
