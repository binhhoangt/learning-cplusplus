#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string, int> ages;

    ages.insert(make_pair("Mike", 40));
    ages.insert(make_pair("Rai", 20));
    ages.insert(make_pair("Vicky", 30));

    ages.insert(make_pair("Rai", 10));

    for (auto it=ages.begin(); it!=ages.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;

    auto target = ages.equal_range("Rai");
    for (auto it=target.first; it!=target.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
