// Name: Hafiz Ahmad Farooq
// Roll No: L1S26BSCS0035

/* Task 1
#include <iostream>
using namespace std;

int main (){
    int var = 0;
    cout << "Enter variable value: " << endl;
    cin >> var;
    cout << "Variable value entered: " << var << endl;

    return 0;

}*/

/* Task 2

#include <iostream>
using namespace std;

int main(){

    int intger=0;

    cout << "Enter an integer:" << endl;
    cin>>intger;

    cout << "The square of " << intger << " is " << (intger * intger) << endl;

    return 0;
}
*/    

/* Task 3
#include <iostream>
using namespace std;

int main(){

    float radius = 0;
    float area = 0;


    cout << "Enter the radius of the circle:" << endl;
    cin>>radius;

    area = 3.14 * radius * radius;
    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    return 0;
}    
*/

/* Task 4
#include <iostream>
using namespace std;

int main(){

    float area= 0;
    float width= 0;
    float length= 0;
    float perimeter= 0;


    cout << "Enter the width of rectangle :" << endl;
    cin >> width;

    cout << "Enter the length of rectangle :" << endl;
    cin >> length;

    area = width * length;
    perimeter = 2*(width+length);

    cout << "Area of the rectangle= " << area << endl;
    cout << "Perimeter of rectangle= " << perimeter << endl;

    return 0;
}  
*/

/* Task 5
#include <iostream>
using namespace std;

int main(){

    float chemistry= 0;
    float maths= 0;
    float physics= 0;
    float sum= 0;


    cout << "Enter marks of chemistry :" << endl;
    cin >> chemistry;

    cout << "Enter marks of maths:" << endl;
    cin >> maths;

    cout << "Enter marks of physics: " << endl;
    cin >> physics;

    sum = chemistry + maths + physics;

    cout << "***************************************************************" << endl;
    cout << "MATHS          CHEMISTRY       PHYSICS                   TOTAL"     << endl;   
    cout <<  maths <<"              "
         << chemistry <<"              "
         << physics <<"                        "
         << sum <<"                        "<< endl;                                 
    cout << "***************************************************************" << endl;

 
    return 0;
}
*/

/* Task 6
#include <iostream>
using namespace std;

int main() {
    // Declaring variables for price and quantity
    int priceWheat, qtyWheat;
    int priceRice, qtyRice;
    int priceSugar, qtySugar;

    // Declaring variables to store the calculated values
    int valueWheat, valueRice, valueSugar;

    // Input for Wheat
    cout << "Enter price of Wheat: ";
    cin >> priceWheat;
    cout << "Enter quantity of Wheat: ";
    cin >> qtyWheat;

    // Input for Rice
    cout << "Enter price of Rice: ";
    cin >> priceRice;
    cout << "Enter quantity of Rice: ";
    cin >> qtyRice;

    // Input for Sugar
    cout << "Enter price of Sugar: ";
    cin >> priceSugar;
    cout << "Enter quantity of Sugar: ";
    cin >> qtySugar;

    // Calculations (Value = Price * Quantity)
    valueWheat = priceWheat * qtyWheat;
    valueRice = priceRice * qtyRice;
    valueSugar = priceSugar * qtySugar;

    // Printing the output
    cout << "---------------------------------------" << endl;
    cout << "Value of Wheat: " << valueWheat << endl;
    cout << "Value of Rice: " << valueRice << endl;
    cout << "Value of Sugar: " << valueSugar << endl;

    return 0;
}
*/

/* Task 7
#include <iostream>
using namespace std;

int main() {
    int Fuel;
    int Rent;
    int Bills;
    int Total;

    // Input section
    cout << "Enter Value of Fuel: ";
    cin >> Fuel;
    cout << "Enter Value of Rent: ";
    cin >> Rent;
    cout << "Enter Value of Bills: ";
    cin >> Bills;

    // Calculation
    Total = Fuel + Rent + Bills;

    // Tabular Output section
    cout << "-----------------------" << endl;
    
    // Using \t to jump the cursor forward for the numbers
    cout << "FUEL:\t" << Fuel << endl;
    cout << "RENT:\t" << Rent << endl;
    cout << "BILLS:\t" << Bills << endl;
    cout << "TOTAL:\t" << Total << endl;

    return 0;
}
*/

/* Task 8
#include <iostream>
using namespace std;

int main() {
    int n=0;

    cout << "input = ";
    cin >> n;

    cout << "No\tSquare\tCube" << endl;

    // Row 1: The number itself
    cout << n << "\t" << n*n << "\t" << n*n*n << endl;

    // Row 2: n + 1
    cout << n+1 << "\t" << (n+1)*(n+1) << "\t" << (n+1)*(n+1)*(n+1) << endl;

    // Row 3: n + 2
    cout << n+2 << "\t" << (n+2)*(n+2) << "\t" << (n+2)*(n+2)*(n+2) << endl;

    // Row 4: n + 3
    cout << n+3 << "\t" << (n+3)*(n+3) << "\t" << (n+3)*(n+3)*(n+3) << endl;

    // Row 5: n + 4
    cout << n+4 << "\t" << (n+4)*(n+4) << "\t" << (n+4)*(n+4)*(n+4) << endl;

    // Row 6: n + 5
    cout << n+5 << "\t" << (n+5)*(n+5) << "\t" << (n+5)*(n+5)*(n+5) << endl;

    return 0;
}
*/

/* Task 9
#include <iostream>
using namespace std;

int main() {
    int n=0;

    cout << "input = ";
    cin >> n;

    cout << n << "\t" << "X" << "\t" << 1 << "\t" << "=" << "\t" << n*1 << endl;
    cout << n << "\t" << "X" << "\t" << 2 << "\t" << "=" << "\t" << n*2 << endl;
    cout << n << "\t" << "X" << "\t" << 3 << "\t" << "=" << "\t" << n*3 << endl;
    cout << n << "\t" << "X" << "\t" << 4 << "\t" << "=" << "\t" << n*4 << endl;
    cout << n << "\t" << "X" << "\t" << 5 << "\t" << "=" << "\t" << n*5 << endl;
    cout << n << "\t" << "X" << "\t" << 6 << "\t" << "=" << "\t" << n*6 << endl;
    cout << n << "\t" << "X" << "\t" << 7 << "\t" << "=" << "\t" << n*7 << endl;
    cout << n << "\t" << "X" << "\t" << 8 << "\t" << "=" << "\t" << n*8 << endl;
    cout << n << "\t" << "X" << "\t" << 9 << "\t" << "=" << "\t" << n*9 << endl;
    cout << n << "\t" << "X" << "\t" << 10 << "\t" << "=" << "\t" << n*10 << endl;

    return 0;
}
*/

/* Task 10
#include <iostream>
using namespace std;

int main (){
    int num1=0;
    int num2=0;
    int num3=0;

    cout << "please enter 3 numbers:" << endl;
    cin >> num1 >> num2 >> num3;

    cout << " The reverse is: " << num3 << "\t" << num2 << "\t" << num1 << endl;

    return 0;

}
*/

/* Task 11
#include <iostream>
using namespace std;

int main() {
    int hours, minutes, totalMinutes;

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    totalMinutes = hours * 60 + minutes;

    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}
*/

/* Task 12
#include <iostream>
using namespace std;

int main(){
    float weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;

    return 0;
}
*/

/* Task 13
#include <iostream>
using namespace std;

int main() {
    float radius,height,volumn,surfaceArea ;


    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volumn = 3.14159 * radius * radius * height;
    surfaceArea = 2 * 3.14159 * radius * (radius + height);

    cout << "Volumn of the cylinder= " << volumn << endl;
    cout << "Surface Area of the cylinder= " << surfaceArea << endl;

    return 0;
}
*/

/* Task 14
#include <iostream>
using namespace std;

int main() {
    float birthYear,age;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    age = 2024 - birthYear;

    cout << "Your age is: " << age << endl;

    return 0;
}
*/

/* Task 15
#include <iostream>
using namespace std;

int main() {
    int product1Price,product2Price,product3Price;
    int discountRate;
    int discountedPrice1, discountedPrice2, discountedPrice3;


    cout << "Enter the prices of 3 products: " << endl;

    cout << "price of product 1: ";
    cin >> product1Price;

    cout << "price of product 2: ";
    cin >> product2Price;

    cout << "price of product 3: ";
    cin >> product3Price;

    cout << "Enter discount rate (in %): ";
    cin >> discountRate;

    discountedPrice1 = product1Price - (product1Price * discountRate / 100);
    discountedPrice2 = product2Price - (product2Price * discountRate / 100);
    discountedPrice3 = product3Price - (product3Price * discountRate / 100);

    cout << "Product 1: Original Price = " << product1Price << ", Discounted Price = " << discountedPrice1 << endl;
    cout << "Product 2: Original Price = " << product2Price << ", Discounted Price = " << discountedPrice2 << endl;
    cout << "Product 3: Original Price = " << product3Price << ", Discounted Price = " << discountedPrice3 << endl;

    return 0;
}
*/

/* Task 16
#include <iostream>
using namespace std;    

int main() {
    double numberOfProducts;
    double product1Price,product2Price,product3Price;
    double discountRate;
    double discountedPrice1, discountedPrice2, discountedPrice3;
    double finalprice1, finalprice2, finalprice3;
    

    cout << "Enter number of products(max 5): " << endl;
    cin >> numberOfProducts;

    cout << "Enter price of product 1: ";
    cin >> product1Price;

    cout << "Enter price of product 2: ";
    cin >> product2Price;

    cout << "Enter price of product 3: ";
    cin >> product3Price;

    cout << "Enter discount rate (in %): ";
    cin >> discountRate;

    discountedPrice1 = product1Price - (product1Price * discountRate / 100);
    discountedPrice2 = product2Price - (product2Price * discountRate / 100);
    discountedPrice3 = product3Price - (product3Price * discountRate / 100);

    finalprice1 = discountedPrice1 + (discountedPrice1 * 0.08);
    finalprice2 = discountedPrice2 + (discountedPrice2 * 0.08);
    finalprice3 = discountedPrice3 + (discountedPrice3 * 0.08);

    cout << "Bill Summary:" << endl;
    cout << "Product 1: Original Price = " << product1Price << ", Discounted Price = " << discountedPrice1 << ", Final with Tax = " << finalprice1 << endl;
    cout << "Product 2: Original Price = " << product2Price << ", Discounted Price = " << discountedPrice2 << ", Final with Tax = " << finalprice2 << endl;
    cout << "Product 3: Original Price = " << product3Price << ", Discounted Price = " << discountedPrice3 << ", Final with Tax = " << finalprice3 << endl;
  
    cout << "Total Amount to Pay: " << (finalprice1 + finalprice2 + finalprice3) << endl;
    return 0;
}

*/