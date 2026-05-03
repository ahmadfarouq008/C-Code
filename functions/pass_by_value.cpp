#include <iostream>
using namespace std;

int sum (int a,int b) {
    int sum=0;
    sum = a+b ;
    return sum;

} 

int main () {
    int x=0;
    int y=0;

    cout << "sum is:" << sum(x,y) << endl;
    return 0;
 
}

#include <iostream>
using namespace std;

int sum (int a,int b) {
    int sum=0;

    a=a+10;
    b=b+10;

    sum = a+b ;

    cout << "sum:" << sum << endl;
    return sum;

} 

int main () {
    int x=5;
    int y=6;

    cout << "sum is:" << sum(x,y) << endl;

    cout << x << endl;
    cout << y << endl; 
    return 0;
 
}
