#include <iostream>
using namespace std;

int main() {

    int marks1 = 0;
    int marks2 = 0;
    int marks3 = 0;
    int average = 0;


    cout << "Enter marks for three subjects: ";
    cin >> marks1 >> marks2 >> marks3;
    
    average = (marks1 + marks2 + marks3) / 3;

    if(  average >= 90) {
        cout << "Average: " << average << endl;
        cout << "Grade: A" << endl;
    }
    else if(average >= 80 && average < 90) {
        cout << "Average: " << average << endl;
        cout << "Grade: B" << endl;
    }
    else if (average >= 70 && average < 80) {
        cout << "Average: " << average << endl;
        cout << "Grade: C" << endl;
    }
    
    else if (average >= 60 && average < 70) {
        cout << "Average: " << average << endl;
        cout << "Grade: D" << endl;
    }
    else if (average < 60) {
        cout << "Average: " << average << endl;
        cout << "Grade: F" << endl;
    }

    return 0;

}