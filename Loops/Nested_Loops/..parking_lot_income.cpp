#include <iostream>
using namespace std ;

int main () {
    int hours=0;
    int product=0;
    int sum=0; 
    int charge=50;
    int total=0;

    for (int i=1; i<=3; i++) {
        sum=0;

        cout << "Enter hours for Day " << i << ":" << endl ;

        for (int j=1; j<=3; j++) {
            cout << "Car " << j << ": " ;
            cin >> hours;

            sum += hours ;
        }
        product = sum * charge ;  
        cout << "Day " << i << " income = Rs " << product << endl;  
        total = total + product ;
    }
    cout << endl;
    cout << "Total wekly income = " << total << endl;
    return 0;
}