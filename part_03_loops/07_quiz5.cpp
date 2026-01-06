// print all ODD numbers from 1 to N;

#include <iostream>
using namespace std;

int main(){
    int n = 12;

    for(int i=1; i<=n; i++ ){
        if(i%2 != 0){
            cout << i << " ";
        }
    
    }
    cout << endl;
    return 0;
}
