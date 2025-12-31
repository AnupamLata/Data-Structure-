#include <iostream>
using namespace std;

int main (){
    
    //or
    cout << ((3 < 1) || (3 < 5)) <<endl;
    cout << ((3 < 1) || (3 < 1)) <<endl;
    cout << ((3 > 1) || (3 > 2)) <<endl;


    //and
    cout << ((3 > 1) && (3 > 2)) <<endl;
    cout << ((3 > 1) && (3 > 4)) <<endl;
    cout << ((3 < 1) && (3 < 4)) <<endl;


    //not
    cout << !(3 < 1) <<endl;
    
    return 0;
}
