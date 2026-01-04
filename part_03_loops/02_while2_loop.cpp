#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number : ";
    cin >> n;

    int count = 1;

    while(count <= n){
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}
