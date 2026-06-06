#include <iostream>
using namespace std;

int main() {
    int marks=0;
    int fail=0;

    for (int i=1; i<=3 ;i++) {

        fail = 0; // this student has failed in any subject.here we initialize it agin by assumming student is pass.

        cout << "Enter marks of three subjects :-" << endl;
        
        for (int i=1; i<=3; i++) {
            
            cin >> marks ;

            if (marks < 50) {
                fail = 1 ; // means this student has not failed in any subject.
            }
        }
        if (fail == 1) {
            cout << "Student " << i << ": fail "<< endl;
        }
        else {
            cout << "Student " << i << ": Pass "<< endl;
        }
        cout << endl;
    }
    return 0;

}

    