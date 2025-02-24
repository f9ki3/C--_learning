#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;  // Pointer stores the address of num

    cout << "Value of num: " << num << endl;   // Output: 10
    cout << "Address of num: " << &num << endl; // Memory address of num
    cout << "Pointer value (address stored in ptr): " << ptr << endl; // Same as &num
    cout << "Value at pointer (*ptr): " << *ptr << endl; // Output: 10

    return 0;
}
