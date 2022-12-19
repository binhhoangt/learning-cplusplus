#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <exception>
#include <future>

using namespace std;

std::atomic_flag lock_count = ATOMIC_FLAG_INIT;

int produce() {
    int x{3};
    this_thread::sleep_for(std::chrono::seconds(1));
    return x;
}

int main() {
    auto f = async(produce);

    try {
        int x = f.get();
        cout << "Get x: " << x << endl;
    } catch (exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
