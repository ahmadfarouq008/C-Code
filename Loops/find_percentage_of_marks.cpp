#include <iostream>
using namespace std;

int main() {

    int totalMarks=0; 
    int obtainedMarks=0;
    float percentage;
    char choice;

    do {

        cout << "Enter the Total marks: ";
        cin >> totalMarks;

        cout << "Enter the obtained marks: ";
        cin >> obtainedMarks;

        percentage = (obtainedMarks * 100.0) / totalMarks;

        if (percentage >= 50) {

            cout << "The percentage of obtain marks is " << percentage << "% so the student is pass." << endl;

        } else {

            cout << "The percentage of obtained marks is " << percentage << "% so the student is fail." << endl;
        }

        cout << endl << "Do you want to check another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}