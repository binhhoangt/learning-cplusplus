#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Rai"] = 20;
    ages["Vicky"] = 30;

    ages.insert(make_pair("Peter", 10));

    for (auto it=ages.begin(); it!=ages.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    if (ages.find("Rai") != ages.end()) {
        cout << "Found Rai" << endl;
    } else {
        cout << "NotFound" << endl;
    }
    
    return 0;
}
