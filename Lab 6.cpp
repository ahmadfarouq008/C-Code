/*
Task 1
 #include <iostream>
 using namespace std;

 int main() {
	 int temp;
	 cout << "Enter the temperature in Fahrenheit: ";
	 cin >> temp;

	 if (temp < 32) {
		 cout << "It's freezing!" << endl;
	 }
	 else {
		 cout << "Temperature is above freezing." << endl;
	 }

	 return 0;
 }*/

/*Task 2
 #include <iostream>
 using namespace std;

 int main() {
	 int age;
	 cout << "Enter your age: ";
	 cin >> age;

	 if (age >= 18) {
	 	 cout << "You are eligible to vote." << endl;
	 }

	 return 0;
 }
*/


/*Task 3
 #include <iostream>
 using namespace std;

 int main() {
	 int age;
	 cout << "Enter your age: ";
	 cin >> age;

	 if (age >= 18) {
		 cout << "You are eligible to vote." << endl;
	 }
	 else {
		 cout << "You are not eligible to vote." << endl;
	 }

	 return 0;
 }
 */

/*Task 4

 #include <iostream>
 using namespace std;

 int main() {
	 int num;
	 cout << "Enter a number: ";
	 cin >> num;

	 if (num % 2 == 0) {
		 cout << "The number is even." << endl;
	 }
	 else {
		 cout << "The number is odd." << endl;
	 }

	 return 0;
 }
 */

/*Task 5
#include <iostream>
using namespace std;

int main(){
	int num = 0;
	cout << "Enter a number:";
	cin >> num;

	if (num > 0) {
        cout << "This is a positive number." << endl;
	}
	else{
		cout << "THis is not a positive number." << endl;
	}
	return 0;

}
*/

/*Task 6
#include <iostream>
using namespace std;

int main() {

	int year = 0;

	cout << "Enter a year:";
	cin >> year;

	if (year % 4 == 0){
		cout << "This might be a leap year." << endl;
	}
	else {
		cout << "This is not a leap year." << endl;
	}
	return 0;

}
*/

/*Task 7

#include <iostream>
using namespace std;

int main() {
	int a=0;
	int b=0;
	cout << "Enter numbers: ";
	cin >> a >> b;

	if (a % b == 0)
	cout << a << " is the multiple of " << b << endl;

	return 0;
}
*/

/*Task 8

#include <iostream>

using namespace std;

int main() {
	int marks;

	cout << "Enter marks: ";
	cin >> marks;

	if (marks >= 90 && marks <= 100) {
		cout << "Grade: A" << endl;
	}
	else if (marks >= 80 && marks <= 89) {
		cout << "Grade: B" << endl;
	}
	else if (marks >= 70 && marks <= 79) {
		cout << "Grade: C" << endl;
	}
	else if (marks >= 60 && marks <= 69) {
		cout << "Grade: D" << endl;
	}
	else if (marks >= 0 && marks < 60) {
		cout << "Grade: F" << endl;
	}

	return 0;
}
*/

/*Task 9
#include <iostream>

using namespace std;

int main() {
	float m1, m2, m3, average;

	cout << "Enter marks: ";
	cin >> m1;
	cout << "Enter marks: ";
	cin >> m2;
	cout << "Enter marks: ";
	cin >> m3;

	// 1. Check for individual subject failure first
	if (m1 < 33 || m2 < 33 || m3 < 33) {
		cout << "Fail due to subject score." << endl;
	}
	else {
		// 2. Calculate average only if individual marks are okay
		average = (m1 + m2 + m3) / 3.0;

		if (average >= 40) {
			cout << "Pass." << endl;
		}
		else {
			cout << "Fail." << endl;
		}
	}

	return 0;
}
*/

/*Task 10

#include <iostream>
using namespace std;

int main() {
	float weight=0;
	cout << "Enter weight: ";
	cin >> weight;

	if (weight <= 5) {
		cout << "Shipping fee: $5" << endl;
	}
	else if (weight > 5 && weight <= 20) {
		cout << "Shipping fee: $10" << endl;
	}
	else {
		cout << "Shipping fee: $20" << endl;
	}
	return 0;
}
*/

/*Task 11
#include <iostream>
using namespace std;

int main() {
	int age=0;
	cout << "Enter age: ";
	cin >> age;

	if (age <= 12) {
		cout << "Ticket price: $8" << endl;
	}
	else if (age >= 13 && age <= 59) {
		cout << "Ticket price: $12" << endl;
	}
	else {
		cout << "Ticket price: $6" << endl;
	}
	return 0;
}
*/

/*Task 12
#include <iostream>
using namespace std;

int main() {
	float water=0;
	cout << "Enter amount of water: ";
	cin >> water;

	if (water < 1.5) {
		cout << "Drink more water for better health." << endl;
	}
	else if (water >= 1.5 && water <= 2.5) {
		cout << "You are well hydrated!" << endl;
	}
	else {
		cout << "Great job staying hydrated!" << endl;
	}
	return 0;
}
*/

/*Task 13
#include <iostream>
using namespace std;

int main() {
	int p1, p2;
	cout << "Enter your turns (1=rock, 2=paper, 3=scissors): ";
	cin >> p1 >> p2;

	if (p1 == p2) {
		cout << "Result: It's a tie!" << endl;
	}
	else if ((p1 == 1 && p2 == 2) || (p1 == 2 && p2 == 3) || (p1 == 3 && p2 == 1)) {
		cout << "Result: second player wins." << endl;
	}
	else {
		cout << "Result: first player wins." << endl;
	}
	return 0;
}*/

/*
Task 14

#include <iostream>
#include <cmath>
using namespace std;

double distSq(double x1, double y1, double x2, double y2) {
	return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}

int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cout << "Enter points (x1 y1 x2 y2 x3 y3 x4 y4): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	double s1 = distSq(x1, y1, x2, y2); 
	double s2 = distSq(x2, y2, x3, y3);
	double s3 = distSq(x3, y3, x4, y4); 
	double s4 = distSq(x4, y4, x1, y1); 
	double d1 = distSq(x1, y1, x3, y3); 
	double d2 = distSq(x2, y2, x4, y4); 

	if (s1 == s2 && s2 == s3 && s3 == s4 && d1 == d2)
		cout << "It's a square." << endl;
	else if (s1 == s3 && s2 == s4 && d1 == d2)
		cout << "It's a rectangle." << endl;
	else
		cout << "It's a quadrilateral." << endl;

	return 0;
}

Task 15
#include <iostream>
#include <cmath>
using namespace std;

double distSq(double x1, double y1, double x2, double y2) {
	return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}

int main() {
	double x1, y1, x2, y2, x3, y3;
	cout << "Enter points (x1 y1 x2 y2 x3 y3): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a2 = distSq(x1, y1, x2, y2);
	double b2 = distSq(x2, y2, x3, y3);
	double c2 = distSq(x3, y3, x1, y1);

	if (a2 == b2 && b2 == c2)
		cout << "It is an Equilateral Triangle." << endl;
	else if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2)
		cout << "It is a Right-Angle Triangle." << endl;
	else if (a2 == b2 || b2 == c2 || a2 == c2)
		cout << "It is an Isosceles Triangle." << endl;
	else
		cout << "It is a Scalene Triangle." << endl;

	return 0;
}

Task 16
#include <iostream>
using namespace std;

int main() {
	int balance = 10000;
	int amount;

	cout << "Enter amount to withdraw: ";
	cin >> amount;

	if (amount % 500 != 0) {
		cout << "Invalid amount. Enter multiples of 500." << endl;
	}
	else if (amount > balance) {
		cout << "Insufficient balance." << endl;
	}
	else {
		balance -= amount;
		cout << "Transaction successful!" << endl;
		cout << "Remaining Balance: " << balance << endl;
	}

	return 0;
}

Task 17
#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;

	switch (op) {
	case '+':
		cout << "Result = " << num1 + num2 << endl;
		break;
	case '-':
		cout << "Result = " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Result = " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0)
			cout << "Result = " << num1 / num2 << endl;
		else
			cout << "Error: Division by zero is not allowed." << endl;
		break;
	default:
		cout << "Invalid operator" << endl;
	}

	return 0;
}
*/