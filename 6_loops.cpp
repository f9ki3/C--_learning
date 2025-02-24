#include <iostream>
using namespace std;

int main(){
    //For Loop
    cout << "For Loop" << endl;
    for (int i = 0; i<5; i++){
        cout << i << endl;
    }

    //While Loop
    cout << "While Loop" << endl;
    int j = 0;

    while (j<=5){
        cout << j << endl;
        j++;
    }

    //Do While 
    cout << "Do While Loop" << endl;
    int k = 0;
    do{
        cout << k << endl;
        k++;
    } while (k<5);


    return 0;
}