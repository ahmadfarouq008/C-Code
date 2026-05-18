#include <iostream>
using namespace std;

int main () {
    int n=0;
    int first=0;
    int second=1;
    int third=0;

    cout << "Input number of terms to display:" ;
    cin >> n ;

    cout << "Here is the fibonacci series upto " << n << " terms:" << endl;

    for (int i=1; i<=n; i++) {

        cout << first << " " ;    // we only print 'first' because first is the curent number which changes according to fibonacci series.

        third = first + second ;  // according to def, fibonacci is the sum of previous two numbers. 

        first = second ;          // first number is shifted to second.Now second becomes first. 

        second = third ;          // second number is shifted to first.Now second becomes third.

    }
    cout << endl;
    return 0;
}   