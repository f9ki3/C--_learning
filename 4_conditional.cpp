#include <iostream>
using namespace std;

int main(){
    int age = 200;

    if (age < 18){
        cout << "You are underage. " << endl;   
    } else if (age < 100) {
        cout << "You are Legal age. " << endl;
    } else{
        cout << "You are hundred plus old";
    }
    return 0;
}