#include <iostream>
using namespace std;

int factorialN(int n) {
    int factorial=1; // here we intialize factorial with 1 not with 0 beacause when the counter(i)=1 multiplies with 0 then 0 is the answer (factorial=0) and then 0 multiplies with counter(i)=2 which gives factorial=0 and so on. So factorial remains always equal to 0 .  

    for(int i=1;i<=n;i++) {
        factorial *= i;
    }
    return factorial;

}
int main () {

    cout << "Factorial of n numbers is:" << factorialN(4) << endl;
    cout << "Factorial of n numbers is:" << factorialN(10) << endl;
    cout << "Factorial of n numbers is:" << factorialN(19) << endl; // value of n more then 20 will make int data type overpowered so we need to use double datatype to calculatte n values more then 20.  
    
}