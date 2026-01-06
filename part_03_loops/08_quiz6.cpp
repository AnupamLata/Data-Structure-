// sum of all Odd numbers from 1 to N:
#include <iostream>
using namespace std;

int main (){
    int n = 12;
    int oddsum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 != 0){
         oddsum += i;
        }
    }
    cout << "odd sum = " << oddsum << endl;
    return 0;
}
