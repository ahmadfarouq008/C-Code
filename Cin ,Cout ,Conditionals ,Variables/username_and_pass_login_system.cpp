#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << "Login successful!" << endl;
    }
    else if (username != "admin") {
        cout << "Invalid username" << endl;
    }
    else {
        cout << "Invalid password" << endl;
    }

    return 0;
}