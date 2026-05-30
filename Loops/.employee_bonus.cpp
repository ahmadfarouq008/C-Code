#include <iostream> 
using namespace std;

int main () {
    int salary=0;
    int service_years=0;

    for (int i=1; i<=4; i++) {

        cout << "Enter salary and years of service for employee " << i << ": " << endl;
        cin >> salary >> service_years ;
        
        if (salary > 5000 && service_years > 5) {
            cout << "Employee " << i << ": 20% Bonus" << endl;
        }
        else if (salary > 5000 || service_years > 5) {
            cout << "Employee " << i << ": 10% Bonus" << endl;
        }
        else {
            cout << "No Bonus" << endl;
        }
    }
    return 0;
}
