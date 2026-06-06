#include <iostream>
using namespace std ;

int main () {
    int marks = 0;
    int sum = 0;
    float average=0;

    for (int i=1;i<=3;i++) {

        sum = 0 ;                                                // we reset the value to 0 because after the first iteration of both loops, the value of sum got from inner loop remains saved and when 2nd iteration is started the previous value of sum passes to outer loop an son on, that's why we reset the sum value to 0. 
        cout << endl;                                            // used this to get space when inputing the next student's marks.
        cout << "Enter marks for student " << i << ":" << endl;
        
        for (int j=1; j<=4 ;j++) {

            cout << "Subject " << j << ":" ;
            cin >> marks ;

            sum = sum + marks;                                   // Written inside inner loop because we update/add values again and again until 4 times, contarary to 'average'.
        }
        average = (float)sum / 4 ;                               // we donot write it inside inner loop because average is recalculated 4 times there but only the last calculation after getting all sum is actually needed so that we donot update 'average' 4 times inside inner loop.
        cout << endl; 
        cout << "student " << i << "-> Total = " << sum << ",Average = " << average << endl;
    }
    return 0;
}