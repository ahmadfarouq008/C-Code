#include <iostream>
using namespace std ;

int main () {
    int n=0;
    int positive_count=0;
    int negative_count=0;

    cout << "Enter a number:" ;
    cin >> n;

    while (n!=0) {                   // you can suppose while as an if(condition) statement. and then write more nested if or else if inside it.
  
        if (n>0) {
            positive_count++ ;       // it counts(i) the positve numbers.
        }

        else if (n<0) {
            negative_count++ ;       // it counts(i) the negative numbers.
        }
        cout << "Enter a number:" ;  // Taking of input from user repeats until 0 is entered.
        cin >> n;
     
    }
    cout << "Positives:" << positive_count << ","  ;
    cout << "Negatives:" << negative_count ;

    return 0;
}