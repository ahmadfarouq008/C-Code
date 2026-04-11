#include <iostream>
#include <string>
using namespace std;

int main() {

    float age=0;
    string is_local_resident;
    float discount=0;
    float original_price=0;
    string ticket_type;
    float final_price=0;



    cout << "Enter age:" << endl;
    cin >> age;

    cout << "Are you a local resident? (yes/no)" << endl; 
    cin >> is_local_resident;

    if (is_local_resident=="no") {

        if (age<12) {

        original_price=10;
        ticket_type="child";
        discount=0;
        final_price=original_price;
        
        }
        else if ( age>=60) {

        original_price=12;
        ticket_type="senior";
        discount=0;
        final_price=original_price;
        }

        else if (age>=15 || age<=59 ) {

        original_price=20;
        ticket_type="adult";
        discount=0;
        final_price=original_price;

        }

    }

    if (is_local_resident=="yes") {

        if (age<12) {

        original_price=10;
        ticket_type="child";
        discount=20.0/100.0*original_price;
        final_price=original_price-discount;
        
        }
        else if ( age>=60) {

        original_price=12;
        ticket_type="senior";
        discount=20.0/100.0*original_price;
        final_price=original_price-discount;
        }

        else if (age>=15 || age<=59 ) {

        original_price=20;
        ticket_type="adult";
        discount=20.0/100.0*original_price;
        final_price=original_price-discount;

        }

    }

    cout << "Ticket type= " << ticket_type << endl;
    cout << "Original price= $" << original_price << endl;
    cout << "Discount applied= $" << discount << endl;
    cout << "Final ticket price= $" << final_price << endl;

    
    return 0;
}