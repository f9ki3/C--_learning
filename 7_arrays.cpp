#include <iostream>
using namespace std;

int main(){
    char names[3][10] = {"Vin", "Sarah", "Mike"};
    int size = sizeof(names) / sizeof(names[0]); // to get the number of arrays
    
    cout << "List of names:" << endl;
    for (int i = 0; i < size; i++){
        cout << names[i] << endl;
    }
    cout << "-------------------------" << endl;

    cout << "List of houses:" << endl;
    string houses[] = {"hut", "concrete", "wood"};
    int houseSize = sizeof(houses) / sizeof(houses[0]);
    for (int i = 0; i < houseSize; i++){
        cout << houses[i] << endl;
    }
    
    cout << "-------------------------" << endl;

    cout << "List of numbers:" << endl;
    int numbers[] = {1,2,3,4,5};
    int sizeNumbers = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < sizeNumbers; i++){
        cout << numbers[i] << endl;
    }

    return 0;
}