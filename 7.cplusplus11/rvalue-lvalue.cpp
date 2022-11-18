#include <iostream>
using namespace std;

int main() {

    int value1 = 7;

    int *pValue1 = &value1;
    // int *pValue2 = &7;

    int *pValue3 = &++value1;
    cout << *pValue3 << endl;

    // int *pValue4 = &value1++;

    // int *s = &(7 + value1);

    return 0;
}
