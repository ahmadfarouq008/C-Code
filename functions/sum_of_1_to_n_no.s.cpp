#include <iostream>
using namespace std;

int sumN(int n=0) {  //as the value of n is not fixed so we can take it as parameter.

    int sum=0;

    for (int i=1;i<=n;i++) { // here we wrote this code inside sumN function only one time but we made this for-loop code to run three times in below main function by just calling it three times. 
        sum += i; 

    }
    return sum;

}
int main () {

    cout << "sum of n numbers is: " << sumN(5) << endl;       
    cout << "sum of n numbers is: " << sumN(10) << endl;
    cout << "sum of n numbers is: " << sumN(57) << endl;

    return 0; 

}