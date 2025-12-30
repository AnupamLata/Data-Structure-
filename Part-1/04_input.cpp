#include <iostream>
using namespace std;

int main(){
    int age;
    cout << age << endl;  // here value is garbage value
    return 0;
}

// input:

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "enter the age :";
    cin >> age;

    cout << "your age is :" << age << endl;
    return 0;
}


// another code :

#include <iostream>
using namespace std;

int main(){
    double price;
    cout << "enter the price :";
    cin >> price;

    cout << "entered the price :" << price << endl;
    return 0;
}
