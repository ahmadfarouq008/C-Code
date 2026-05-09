#include <iostream>
using namespace std;

int main () {

    float weight_kg=0;
    float height_m=0;

    cout << "Enter weight in kilograms:";
    cin >> weight_kg;

    cout << "Enter height in meters:";
    cin >> height_m;

    float bmi= weight_kg / (height_m * height_m);
    
    if (bmi<18.5) {
        cout << "Your BMI is " << bmi << "." << endl;
        cout << "You are under weight" << endl;

    }
    else if (bmi>=18.5 || bmi <=24.9) {
        cout << "Your BMI is " << bmi << "." << endl;
        cout << "You have normal weight"<< endl;
    }
    else if (bmi>=25 || bmi <=29.9) {

        cout << "Your BMI is " << bmi << "." << endl;
        cout << "You are over weighted."<< endl;
    }
    else if (bmi>=30) {
        
        cout << "Your BMI is " << bmi << "." << endl;
        cout << "YOu have obesity." << endl;    
    }
    return 0;           
}