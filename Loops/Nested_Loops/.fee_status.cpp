#include <iostream>
using namespace std;

int main() {

    int fee = 0;

    for (int i = 1; i <= 3; i++) {

    cout << "Class " << i << ":" << endl;

    for (int j = 1; j <= 4; j++) {

        cin >> fee;

        if (fee == 1)
            cout << "Allowed in Exam" << endl;
        else
            cout << "Not Allowed" << endl;
    }
}
}