#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        int year;
    
        void display() {
            cout << brand << " - " << year << endl;
        }
    };
    
    int main() {
        Car myCar;
        myCar.brand = "Toyota";
        myCar.year = 2022;
        myCar.display();
    }
    