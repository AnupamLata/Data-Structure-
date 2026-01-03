#include <iostream>
using namespace std;

int main(){
    int age;
    
    cout << "enter age : ";
    cin >> age;

    if(age >= 18){
        cout << "you are vote\n";
    } else {
        cout << "you are not vote\n";
    }
    return 0;
}
