#include <iostream>
using namespace std;

int main() {
    float weight_pounds, height_inches;

    cout << "Enter weight (pounds): ";
    cin >> weight_pounds;

    cout << "Enter height (inches): ";
    cin >> height_inches;

    float weight_kg = weight_pounds * 0.453592;
    float height_m = height_inches * 0.0254;

    float BMI = weight_kg / (height_m * height_m);

    cout << "BMI = " << BMI << endl;

    return 0;
}