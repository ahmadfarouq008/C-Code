#include <iostream>
using namespace std;

int sum_of_digits(int num) {     // it takes integer as num(2356) as input and promises to return int as output. 
    
    int sum=0;
    int last_digit=0;

    while (num>0) {              // the loop stops when the num becomes 0 or less then 0 .

        last_digit = num % 10;   // here the modulo will find the last digit as remainder. 
        num = num / 10;          // here the remaining digits will be finded as quotient and value of num decreses to 0 as 235 then 23 then 2 then 0 and then loop stops.
        sum = sum + last_digit;  // In 1st iteration here 0 is added to 6 i.e 0+6 ,in 2nd 0+6+5, in 3rd 0+6+5+3 , in 4th 0+6+5+3+2 and then loop stops because num becomes 0 and sum=16 is printed. 

    }
    return sum;
}            
int main () {
    cout << "Sum of digits:" << sum_of_digits(2356) << endl;
    return 0;

}
