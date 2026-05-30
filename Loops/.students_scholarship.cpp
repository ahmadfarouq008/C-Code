#include <iostream> 
using namespace std;

int main () {
    float cgpa=0;
    int attendence=0;

    for (int i=1; i<=4; i++) {

        cout << "Enter CGPA and attendence of student " << i << ": " << endl;
        cin >> cgpa >> attendence ;
        
        if (cgpa >= 3.5 && attendence >= 80) {
            cout << "Sudent " << i << ": Scholarship Awarded" << endl;
        }
        else {
            cout << "Not Awarded" << endl;
        }
    }
    return 0;
}
