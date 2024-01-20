#include <iostream>
using namespace std;

int meow(string name){
    cout << "whatsappp boiii" << endl << name;
    // heloo  how r u???
    return 100;
}

int gello(string name){
    while (true){
        cout << endl << "your name is: " << name;
    }
}

int main(){
    meow("kairav");
    cout << endl << "hello world!!";
    gello("kairav is good boi");
    return 0;
}
