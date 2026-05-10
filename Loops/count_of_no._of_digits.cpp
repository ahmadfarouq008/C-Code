#include <iostream>
using namespace std;

int main () {
    unsigned int n=0;
    int i=0; // Here we make i=0 because 0 is itself one digit.If initialize i with 1, then at n=12345 -> i=1 and at n=0 -> i=6 so no. of digits would be 6.     

    cout << "Enter a positive integer:" ;
    cin >> n;

    while(n>0) { 

    n = n / 10; // we do not need the actual digit values(d=n%10) we only need to know how many digits exist(n=n/10).
    i++;
    
    }
    cout << "Number of digits is " << i << endl;
}