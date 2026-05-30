#include <iostream> 
using namespace std;

int main () {
    int temp=0;
    int oxygen=0;

    for (int i=1; i<=4; i++) {

        cout << "Enter temprature and oxygen level of patient " << i << ": " << endl;
        cin >> temp >> oxygen;
        
        if (temp > 100 && oxygen < 90) {
            cout << "Patient " << i << ": Critical" << endl;
        }
        else {
            cout << "Patient " << i << ": Stable" << endl;
        }
    }
    return 0;
}
