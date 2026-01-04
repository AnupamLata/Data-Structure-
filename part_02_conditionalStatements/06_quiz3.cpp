// find character lowercase or uppercase in  ASCII value form:

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter char : ";
    cin >> ch;

    if(ch >= 65 && ch <=90){
        cout << "upperCase\n";

    }else {
        cout << "lowercase\n";
    }
}
