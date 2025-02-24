#include <iostream>
using namespace std;

int main(){
    char grade = 'C';

    switch (grade){
        case 'A': cout << "Excellent"<< endl; break;
        case 'B': cout << "Good Job!"<< endl; break;
        case 'C': cout << "Passed!"<< endl; break;
        default: cout << "Invalid Input"; break;
    }
    return 0;
}