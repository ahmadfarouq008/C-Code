// Name: Hafiz Ahmad Farooq
// Roll No: L1S26BSCS0035

/*Task 1
#include <iostream>
using namespace std;
int main() {
    int var=13;
    cout << "Variable value: " << var << endl;
    return 0;
}*/

/*Task 2
#include <iostream>
using namespace std;

int main() {
    int var=55;

    cout << "Enter variable value: ";
    cin>> var;

    cout << "Variable value entered: " << var << endl;
    return 0;
}*/

/*Task 3
#include <iostream>
using namespace std;
int main() {
    int x=25;
    int y=13;

    cout << "Value of x is 25 and value of y is 13" << endl;
    cout << "Sum of x+y is " << (x + y) << endl;
    cout << "Difference of x-y is " << (x - y) << endl;
    cout << "Multiplication of x*y is " << (x * y) << endl;
    cout << "Division of y/x is " << (y / x) << endl; 
    return 0;
}*/

/*Task 4
#include <iostream>
using namespace std;

int main() {
    int x=25;
    int y=13;

    int Sum = x + y;
    int Sub = x - y;
    int Sub1 = y - x;
    int Mul = x * y;
    int Div = x / y;
    int Div1 = y / x;

    cout << "Value of x is " << x << " and value of y is " << y << endl;
    cout << "Sum of x+y is " << Sum << endl;
    cout << "Difference of x-y is " << Sub << endl;
    cout << "Difference y-x is " << Sub1 << endl;
    cout << "Multiplication of x*y is " << Mul << endl;
    cout << "Division of x/y is " << Div << endl;
    cout << "Division of y/x is " << Div1 << endl;
    return 0;
}*/

/*Task 5
#include <iostream>
using namespace std;

int main() {
    int x=0;
    int y=0;

    cout << "Please enter value of x: ";
    cin >> x;
    cout << "Please enter value of y: ";
    cin >> y;

    int Sum = x + y;
    int Sub = x - y;
    int Sub1 = y - x;
    int Mul = x * y;
    int Div = x / y;
    int Div1 = y / x;


    cout << "Value of x is " << x << " and value of y is " << y << endl;
    cout << "Sum of x+y is " << Sum << endl;
    cout << "Difference of x-y is " << Sub << endl;
    cout << "Difference y-x is " << Sub1 << endl;
    cout << "Multiplication of x*y is " << Mul << endl;
    cout << "Division of x/y is " << Div << endl;
    cout << "Division of y/x is " << Div1 << endl;
    return 0;

}*/

/*Task 6 (Error Fixed) 
#include <iostream>
using namespace std;

int main() {
int x=5;

cout <<"The value of x is " << x << endl;
return 0;
}*/

/* Task 7 (Error Fixed)
#include <iostream>
using namespace std;

int main()
{
cout << "hello world"<< endl;
int x=5;
cout<<"x = " << x << endl;
return 0;
}*/

/*Task 8
#include <iostream>
using namespace std;
int main(){

    int C = 37;
    float F = 0;

    F = (C * 9.0/5.0) + 32;
    cout << "Temperature in Celsius: " << C << endl;
    cout << "Temperature in Fahrenheit: " << F << endl;
    return 0;

}*/

/* Task 9
#include <iostream>
using namespace std;

int main() {
    float radius = 7.5;
    float area = 0 ;

    area = 22.0/7.0 * radius * radius;

    cout << "Radus: " << radius << endl;
    cout << "Area: " << area << endl;
    return 0;
}*/


/*Task 10
#include <iostream>
using namespace std;
int main(){
    int var = 0;

    var= 22/7; 

    cout << var << endl;
}
// Reason: The answer is not 3.24 becaue the expression 22/7 is an integer division and var is also declared as an int., which results in 3.
// To get a 3.14, we can use floating-point division , like this: var = 22.0/7.0; This will give us the value of approximately 3.142857.
*/

/*Task 11

#include <iostream>
using namespace std;

int main() {
    cout << "22/7 = " << 22/7 << endl;
    cout << "22.0/7 = " << 22.0/7 << endl;
    cout << "22/7.0 = " << 22/7.0 << endl;

    return 0;
}

// Comparing and Explaining the Difference:

1. 22/7
 Both numbers are integers.
 Integer division happens.
 Decimal part is removed.
 Result: 3

2. 22.0/7
 22.0 is a floating-point number.
 Division becomes floating-point division.
 Result: 3.14286

 3. 22/7.0
  7.0 is a floating point number.
  floating-point division.
  Result: 3.14286

*/