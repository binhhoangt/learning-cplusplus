#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // LIFO
    stack<int> stackNumbers;
    stackNumbers.push(10);
    stackNumbers.push(20);
    stackNumbers.push(30);

    while (!stackNumbers.empty()) {
        cout << stackNumbers.top() << endl;
        stackNumbers.pop();
    }

    cout << endl;

    // FIFO
    queue<int> queueNumbers;
    queueNumbers.push(10);
    queueNumbers.push(20);
    queueNumbers.push(30);

    while (!queueNumbers.empty()) {
        cout << queueNumbers.front() << endl;
        queueNumbers.pop();
    }
}
