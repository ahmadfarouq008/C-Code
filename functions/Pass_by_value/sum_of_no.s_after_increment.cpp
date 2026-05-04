
#include <iostream>
using namespace std;

int sum (int a,int b) {
    int sum=0;
    a=a+10; // 15 , here a=5 has increment to 15 which has no effect on a of (cout << a << endl;) line. 
    b=b+10; // 14 , here b=5 has increment to 14 which has no effect on b of (cout << b << endl;) line.

    sum = a+b ; // 29
    return sum;
} 

int main () {
    int a=5;   
    int b=4;

    cout << "Sum is:" << sum(a,b) << endl; // it willl print sum=29.

    cout << a << endl;   
    cout << b << endl; 
                      // here these a and b are are still 5 and 4 because there is no increment of these variable values insie this function and these a nd b has no access to sum function because these a nd b are not written as arguments of sum() function ,since only arguments can copy to sum function.
    return 0;
 
}
