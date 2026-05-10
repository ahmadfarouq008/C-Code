#include <iostream>
using namespace std;

int main () {

    int n=0;

    cout << "Enter a positve integer:" ;
    cin >> n;

    for (int i=2;i<=n;i++) { //Because we want divisor other than 1 So we ignore divisor 1 by putting i=2.

        if (n%i == 0) { //First divisor found is automatically the smallest because loop checks from smallest to largest. 
            
            cout << "smallest divisor is " << i << endl;     
            break ; // Stops loop immediately after finding first divisor(which is the smallest.)
        }
    }    
        return 0;
    
}