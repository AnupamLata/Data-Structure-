// type conversion:

#include <iostream>
using namespace std;

int main(){
    //char grade = 'A'; // ASCII value of A = 65
    char grade = 'a'; // ASCII value of a = 97

    int value = grade;
    cout << value <<endl;
    return 0;
}


// type casting:

#include <iostream>
using namespace std;

int main(){
    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}
