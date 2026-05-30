#include <iostream> 
using namespace std;

int main () {
    int salary=0;
    int age=0;

    for (int i=1; i<=5; i++) {

        cout << "Enter salary and age of applicant " << i << ": " << endl;
        cin >> salary >> age ;
        
        if (salary > 50000 && age >= 25) {
            cout << "Applicant " << i << ": Loan Approved" << endl;
        }
        else {
            cout << "Loan Rejected" << endl;
        }
    }
    return 0;
}
