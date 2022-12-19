#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <exception>
#include <condition_variable>

using namespace std;
using namespace std::chrono;

mutex mut;
condition_variable cv;
string sdata{"Emty"};
bool condition{false};

void reader_func() {
    cout << "Reading thread starts" << endl;
    unique_lock<std::mutex> lk(mut);
    cv.wait(lk, [] {return condition;});
    cout << "Data is " << sdata << endl;

}

void writer_func() {
   {
        lock_guard<std::mutex> lg(mut);
        cout << "Writing data ... " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        sdata = "Populated";
        condition = true;
    }
    cv.notify_one();
}

int main() {
    thread writer_thread{writer_func};
    std::this_thread::sleep_for(std::chrono::seconds(2));
    thread reader_thread{reader_func};

    writer_thread.join();
    reader_thread.join();
    return 0;
}
