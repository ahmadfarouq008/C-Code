// Using For Loop: Because we already know how many times we need to repeat i.e from 1 to n.

#include <iostream>
using namespace std;

int main () {
    int n=0;
    int factorial=1;

    cout << "Enter a positive integer:" ;
    cin >> n;

    for (int i=1;i<=n;i++) {
        factorial*=i;

    }
    cout << "Factorial is " << factorial << endl;
    return 0;

}

/*  
Using While Loop :

#include <iostream>
using namespace std;

int main () {
    int n=0;
    int factorial=1;
    int i=1;
    
    cout << "Enter a positive integer:" ;
    cin >> n;
    
    while (i<=n) {

        factorial*=i;
        i++;            
                          
    }
    cout << "factorial is " << factorial << endl; 
    return 0;
}
*/