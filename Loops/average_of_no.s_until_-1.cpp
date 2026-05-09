#include <iostream>
using namespace std;

int main () {
    int n=0;
    int sum=0;
    int count=0;
    double average=0;

    cout << "Enter a number :" ;
    cin >> n;

    while (n!=-1) {
        sum=sum+n ;
        count++ ;

        cout << "Enter a number :" ;
        cin >> n;
    }
    average = (double)sum / count ;

    cout << "Average is " << average << endl;

    return 0;
}