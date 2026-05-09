#include <iostream>
using namespace std;

int sum(int a, int b) {

    int sum = a+b; // or we can use "return(a+b)" instead of this, but int sum=a+b is better aproach.  
    return sum;    // here return sum mean: when the  main() function calls sum () function, the sum() funtion do its work by doing sum of 10 and 5 as sum=a+b (sum=15) and then it returns the sum(15) to the sum(10,5) of cout statement in main() function and 15 is printed when code runs.       
}
int main () {

    cout << sum(10,5) << endl; // when run, the answer is 15 and we can repeat the answer multiple times if we write or call this 'sum() function' again amd again any number of times.
    
    return 0;
    
}
