#include <iostream>
#include <string>
using namespace std;

template <typename T>
T myMin(const T& x, const T&  y) {
    // Copy Constructor 에 대해 공부!
    return (x < y) ? x : y;
}
/*
int main() {
    string name = "Junhyek Park";
    cout << myMin(string("Banana"), name);
    return 0;
}
*/