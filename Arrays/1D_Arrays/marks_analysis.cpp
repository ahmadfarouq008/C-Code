#include <iostream>
using namespace std;

int main () {
    int marks[10]={};
    int sum=0;
    double average=0;
    int highest=0;
    int lowest=0;
    int below_average=0;
    int above_average=0;

    cout << "Enter marks of 10 students:" << endl;
    for ( int i=0; i<10; i++) {
        cin >> marks[i] ;
        sum = sum + marks[i] ; 
    }
    cout << endl;


    highest = marks[0] ;
    lowest = marks[0] ;

    for ( int i=0; i<10; i++) {
        if (marks[i] > highest ){
            highest = marks [i] ;   
        }

        if (marks [i] < lowest ) {
            lowest = marks[i] ;
        }
    }
    average = sum / 10.0 ;

    for ( int i=0 ; i<10 ; i++) {

        if (marks[i] > average){
            above_average++;

        }
        if (marks[i] < average) {
            below_average++ ;
        }
    }

    cout << "Highest marks : " << highest << endl;
    cout << "Lowest marks : " << lowest << endl;
    cout << "Average marks: " << average << endl;
    cout << "Students above average : " << above_average << endl;
    cout << "Students below average : " << below_average << endl;

    return 0;
}



