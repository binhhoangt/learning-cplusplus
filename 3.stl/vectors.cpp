#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(0);
    
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    // numbers.clear();
    // numbers.resize(2);
    numbers.reserve(100);
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    return 0;
}
