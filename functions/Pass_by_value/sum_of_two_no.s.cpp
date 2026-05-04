// Pass by value : The copy of argument from main() is passed to parameters of function def.

#include <iostream>
using namespace std;

int sum (int a,int b) { // a stores 5 and b stores 4.
    int sum=0;
    sum = a+b ;  //or return = a+b;
    return sum;

} 

int main () {
    int x=5; // here if we write 'a' then this 'a' is different from above sum() function parameter 'int a' because both 'a' are stored in different functions at differnt addresses.  
    int y=4; // here if we write 'b' then this 'b' is different from above sum() function parameter 'int b' because both 'b' are stored in different functions at differnt addresses.

    cout << "sum is:" << sum(x,y) << endl; // here when the sum() function is called , the arguments sum (x[5],y[4]) are passed to parameters (a,b) and 5,4 stores in parameters a,b as the copy of arguments.So int a=5 and int b=4 and then function perform its work.  
    return 0;
 
}
