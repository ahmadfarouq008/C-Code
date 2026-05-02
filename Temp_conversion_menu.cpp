#include <iostream>
using namespace std;

int main() {
    int choice=0;
    float temp_c=0;
    float temp_f=0;

    cout << "Select an option:" << endl;
    cout << "1. Celcius to fahrenheigt." << endl;
    cout << "2. Fahrenheight to celcius." << endl;

    cout << "Enter your choice:" ;
    cin >> choice;

    if (choice==1) {

    cout << "Enter temp. in celcius:";
    cin >> temp_c;

    temp_f= (temp_c * 9.0/5.0)+32.0 ;

    cout << "Temp. in fahrenheight:" << temp_f << endl;

    }
    else if (choice==2) {

    cout << "Enter temp. in Fahrenheight:";
    cin >> temp_f;

    temp_c= (temp_f * 5.0/9.0)-32.0 ;

    cout << "Temp. in celcius:" << temp_c << endl;

    }
    else {
        cout << "No such option exist." << endl;
    }

return 0;    
}