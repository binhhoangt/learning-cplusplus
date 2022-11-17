#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_front(2);

    auto it = numbers.begin();
    ++it;
    numbers.insert(it, 10);

    for (auto it=numbers.begin(); it!=numbers.end();) {
        if(*it == 10) {
            it = numbers.erase(it);
        } else {
            ++it;
        }
    }

    for (auto it=numbers.begin(); it!=numbers.end(); ++it) {
        cout << *it << " ";
    }
    

    return 0;
}
