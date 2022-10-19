#include <iostream>
using namespace std;

//Write a program to accept two integers and check whether they are equal or not

int main(){
    int a;
    int b;
    cout << "Enter 2 numbers" << endl;
    cin >> a;
    cin >> b;
    if (a == b){
        cout << "They are equal";
    }
    else {
        cout << "They are not equal";
    }
return 0;
}
