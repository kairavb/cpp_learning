#include <iostream>
#include <time.h>
using namespace std;
// Number Guessing Game with c++

int luck = time(0) % 10 + 1;
int tries = 5;

int guess(){
    for (int i = tries; i>0;){
        int number;
        cin >> number;
        if (number == luck){
            cout << "YOU GUESSED IT RIGHT!!!!" << endl << "Yur are a lucky person" << endl;
            return 0;
        } 
        else {
            i--;
            cout << "try again... " << i << " Tries left only" << endl;
        }
    }
    cout << "you are not very lucky person!!";
}

int main(){
    // cout << luck;
    cout << "----WELCOME TO MY GAME----" << endl << "you will get only " << tries <<" Tries" << endl;
    cout << "enter a number from 1 to 10 " << endl;
    guess();
    return 0;
}