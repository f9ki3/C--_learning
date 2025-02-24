#include <iostream>

using namespace std;

int main(){
    int a = 10, b=3;

    //Arithmetic
    cout << a + b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    //Comparison
    cout << (a != b) << endl;
    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;

    //Logical
    cout << (a != b && a == b) << endl;
    cout << (a < b || a > b) << endl;
    cout << !(a > b) << endl;

    return 0;
}