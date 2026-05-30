#include <iostream> 
using namespace std;

int main () {
    int attendance=0;

    for (int i=1; i<=7; i++) {

        cout << "Enter attendence days of worker " << i << ": " << endl;
        cin >> attendance ;
        
        if (attendance >= 26) {
            cout << "Worker " << i << ": Present" << endl;
        }
        else {
            cout << "Low Attendance" << endl;
        }
    }
    return 0;
}
