#include <iostream>
using namespace std;

int main () {

    int n=0;

    cout << "Enter number:" ;
    cin >> n;

    for (int i=2; i<=n; i+=2) {  // code int i<=50, if you want to print until 50 without user's input. 

        cout << i << " " ;
     }
    return 0;
}