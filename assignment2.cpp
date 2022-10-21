#include <iostream>
using namespace std;
// Write a program in C++ to check whether a number is prime or not

int main(){
    int num;
    cout << "enter a number to check prime or not:--";
    cin >> num;
    if (num < 3){
        cout << endl << "Numbr too small";
        return 0;
    } 
    for (int i=3; i<num; i++)
        if (num%i == 0){
            cout << endl << "the number " << num << " is not a prime!!";
            return 0;
        }
    cout << endl << "CONGOOOO " << num << " PRIME!!!";
    return 0;
}
