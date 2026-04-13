#include <iostream>
using namespace std;

int main () {

    int weight_pounds=0;
    int height_inches=0;

    cout << "Enter weight in pounds:";
    cin >> weight_pounds;

    cout << "Enter height in inches:";
    cin >> height_inches;

    float weight_kg = weight_pounds*0.45;
    float height_m = height_inches*0.025;

    float bmi= weight_kg / (height_m * height_m);
    
    cout << "BMI=" << bmi << endl; 
    
    if (bmi<18.5) {
        cout << "Under Weight" << endl;

    }
    else if (bmi>=18.5 || bmi <=24.9) {

        cout << "Normal weight"<< endl;
    }
    else if (bmi>=25 || bmi <=29.9) {

        cout << "Over weight"<< endl;
    }
    else if (bmi>=30) {

        cout << "Over weight" << endl;    
    }

   


               
     
}