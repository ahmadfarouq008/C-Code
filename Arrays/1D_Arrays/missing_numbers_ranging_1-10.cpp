 //If the range is from 1 to 10 :
#include <iostream> 
using namespace std ;
int main () {
    int arr[9] ={};
    int actual_sum =0;
    int total_sum =0;
    int missing_number =0;

    cout << "enter 9 integers: " << endl;

    for (int i=0; i<9; i++) { // this calculates the sum of inputed numbers.
        cin >> arr[i] ;
        actual_sum = actual_sum + arr[i] ;
    }

    for (int i=1; i<=10; i++){  // find the total sum of inputed numbers from here if the proper range is given, by changing the initalized and ending value and the gap between them by adjusting i++.   
        total_sum = total_sum + i ;
    }

    missing_number = total_sum - actual_sum ;

    cout << "Missing number = " << missing_number << endl;

}

// if range is from 10 to 100 as 10 20 30 50 60 70 80 90 100 (missing = 40)
/*
#include <iostream>
using namespace std;

int main() {

    int arr[9];
    int actualSum = 0;
    int expectedSum = 0;

    cout << "Enter 9 integers: ";

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        actualSum = actualSum + arr[i];
    }

    for (int i = 10; i <= 100; i = i + 10) {
        expectedSum = expectedSum + i;
    }

    cout << "Missing number = "
         << expectedSum - actualSum;

    return 0;
}
*/