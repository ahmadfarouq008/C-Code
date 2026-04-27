#include<iostream>
using namespace std;

int main() {

    int family_members=0;
    char press=0;

    cout << " Enter no. of famiily membrs with you:";
    cin >> family_members;

    cout << "total members are" << family_members+1 << "including you" << endl;
    
    if (family_members=2) {
        cout << "**** welcome to emporium cinema*****" ;
        cout << "press s for student ticket price 250";
        cout << "press n for normal ticket price 400";
        cout << "press e for executive ticket price 750";

        cout << "enter your option";
        cin >> press;

        if (press!='s'||'n'||'e') {

            cout << "invalid input.";
        }
        
    } 
    
    if (family_members=3) {
        cout <<"**** welcome to emporium cinema*****" ;
        cout << "press s for student ticket price 250";
        cout << "press n for normal ticket price 400";
        cout << "press e for executive ticket price 750";

        cout << "enter your option";
        cin >> press;

        if (press!='s'||'n'||'e') {

            cout << "invalid input.";
        }
    }
    int price = 0;
    if (press == 's') 

    else if ( press == 'e'){

        price = 700;
    }
    
    cout<< "@@@@@@@@@@@main menu@@@@@@@@@@"<<endl;

    int popcorn = 0;
    int chips = 0;
    int drinks = 0;
    int choice;

    cout<<"What do you need? ";
    cout<<"1. Popcorn.";
    cout<<"2. chips.";
    cout<<"3. drinks.";

    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    if (choice == 1) popcorn += 100;
    else if (choice == 2) chips += 100;
    else if (choice == 3) drinks += 100;

    int final_price = popcorn + price;
    cout<<final_price;


    return 0;
}