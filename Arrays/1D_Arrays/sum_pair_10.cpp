#include <iostream>
using namespace std ;

int main (){

    int arr [6] = {0};

    cout << "Enter 6 integers :" ;
    for (int i=0; i<6; i++) {
        cin >> arr[i] ;

    }
    cout << endl;

    cout << "pair with sum 10 :" << endl;
    
    for (int i=0; i<6; i++) { // outer loop selects one element each time after completion of inner loop.


        for (int j=i+1; j<6; j++) { // inner loop compares that element with all remaining elements and i+1 make it to initialize comparing with the next number unitil j<6.

            if (arr[i] + arr[j] == 10) {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl; 
            }

        }
    }
    return 0; 

}