#include <iostream>
using namespace std ;

int main () {
    int n1=0;
    int n2=0;
    int hcf=0;
    int lcm=0;

    cout << "Input 1st number for LCM:" ;
    cin >> n1;

    cout << "Input 2nd number for LCM:" ;
    cin >> n2;

    for (int i=1; i<=n1 && i<=n2; i++) {  //  the loop checks all the numbers (i) and stops until n1 and n2.  

        if ( n1 % i == 0 && n2 % i == 0 ) {  // the numbers (i) that are divisible by both n1 and n2 (i.e common factors of n1 and n2 ) are founded.
            
            hcf = i; // the last number which is divsible by n1 and n2 (which is the last and heighest common factor 'HCF') at which the loop stops is stored in hcf variable.As the last common factor is always the largest or heighest. 
        }
    }
    cout << "HCf is:" << hcf << endl; // it is just printed for concept. 

    lcm = n1 * n2 / hcf ; // Formula for finding LCM of any two numbers by using HCF.

    cout << "LCM is:" << lcm << endl;

    return 0;
}
