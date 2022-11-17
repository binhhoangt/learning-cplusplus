#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;

    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);

    for (auto it=numbers.begin(); it!=numbers.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
