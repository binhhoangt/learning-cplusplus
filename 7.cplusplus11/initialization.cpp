#include <iostream>
#include <vector>
using namespace std;

void cplusplus11() {
    int value{5};
    cout << value << endl;

    string text{"Hello"};
    cout << text << endl;

    int numbers[]{1,2,4};
    cout << numbers[1] << endl;
    
    int *pInts = new int[3]{1, 2, 3};
    cout << pInts[1] << endl;
    delete pInts;

    int value1{};
    cout << value1 << endl;

    int *pSomething{}; // equaivalent to int *pSomething = nullptr
    cout  << pSomething << endl;

    int numbers1[5]{};
    cout << numbers1[1] << endl;

    struct {
        int value;
        string text;
    } s1{5, "hi"};

    cout << s1.text << endl;

    vector<string> strings{"one", "two", "three"};
    cout << strings[2] << endl;

}

void cplusplus98() {
    int values[] = {1, 4, 5};

    cout << values[0] << endl;

    class C {
    public:
        string test;
        int id;
    };

    C c1 = {"Hello", 7};

    cout << c1.test << endl;

    struct S {
        string test;
        int id;
    };

    S s1 = {"Hello", 7};

    cout << s1.test << endl;


    struct R {
        string test;
        int id;
    } r1 =  {"Hello", 7}, r2 =  {"Hi", 7};

    cout << r1.test << endl;
    cout << r2.test << endl;

    vector<string> strings;

    strings.push_back("one");
}

int main() {

    cplusplus11();

    return 0;
}
