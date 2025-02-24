#include <iostream>
using namespace std;

// Functions
int add(int a, int b){
    int answer = a + b;
    return answer;
}

void display(int answer){
    cout << "The answer is " << answer << endl;
}


int main(){
    int answer= add(2, 3);
    display(answer);
    return 0;
}