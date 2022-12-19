#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool is_even(int n) {
    return (n%2==0);
}

void func(int &&x) {
    
}

int main() {

    int y{2};
    func(std::move(y));

    cout << y << endl;

    return 0;
}
