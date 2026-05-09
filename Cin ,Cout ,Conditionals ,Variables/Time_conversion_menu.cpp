#include <iostream>
using namespace std;
#include <string>

int main () {
    int choice=0;
    int hh=0;
    int mm=0;
    char colon=0;
    string period;

cout << "Select an option:" << endl;
cout << "1. 12 hour to 24 hour." << endl;
cout << "2. 24 hour to 12 hour." << endl;

cout << "Enter your choice:";
cin >> choice;

if (choice==1) {

    cout << "Enter time (hh:mm AM/PM):" ;
    cin >> hh >> colon >> mm >> period ;
    
    if (period == "PM" && hh!=12) {
        hh = hh+12;
    }    
    else if (period == "AM" && hh==12) {
        hh = 0;
    }
    cout << "Time in 24-hour format: ";
    if (hh < 10 && mm < 10) {
        cout << "0" << hh << ":" << "0" << mm << endl;
    }
           
    else if (hh < 10) {
        cout << "0" << hh << ":" << mm << endl;
    }
    else if (mm < 10) {
        cout << hh << ":" << "0" << mm << endl;
    }
    else {
        cout << hh << ":" << mm << " " << endl;
    }
    
}
else if (choice==2) {
    string period = "AM";

    cout << "Enter time(hh/mm):" ;
    cin >> hh >> colon >> mm ; 

    if (hh==0){
        hh=12;
    }
    else if (hh==12){
        period="PM";
    }
    else if (hh>12) {
        hh = hh-12;
        period="PM";
    }

    cout << "Time in 12-hour format: ";
    if (hh < 10 && mm < 10) {
        cout << "0" << hh << ":" << "0" << mm << " " << period << endl;
    }
           
    else if (hh < 10) {
        cout << "0" << hh << ":" << mm << " " << period << endl;
    }
    else if (mm < 10) {
        cout << hh << ":" << "0" << mm << " " << period << endl;
    }
    else {
        cout << hh << ":" << mm << " " << period << endl;
    }
    
}
else {
    cout << "Invalid choice" << endl;
}

return 0;
}
