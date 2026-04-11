#include <iostream>
#include <string>
using namespace std;

int main(){
    float purchase_amount = 0;
    string first_time_buyer;
    float discount=0;
    float final_amount=0;

    cout << "Enter purchase amount:" << endl;
    cin >> purchase_amount;
    

    cout << "Are you a first time buyer (yes/no):" << endl;
    cin >> first_time_buyer;


    if (first_time_buyer=="yes" && purchase_amount>50){
        
        discount=15.0/100.0*purchase_amount;
    }


    else if (first_time_buyer=="no" && purchase_amount>100){
        discount = 10.0/100.0*purchase_amount;
    }    

    else if (purchase_amount<50){

        discount = 0;

    }
    
    final_amount=purchase_amount-discount;

    cout << "Original amount= $" << purchase_amount << endl;
    cout << "Discount applied= $" << discount << endl;
    cout << "Final amount= $" << final_amount << endl;

    return 0;
}