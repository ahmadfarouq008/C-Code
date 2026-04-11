#include <iostream>
using namespace std;

int main() {
	float rice_price = 280;
	float rice_kg = 3;
	float sugar_price = 160;
	float sugar_kg = 2;
	float tea_price = 550;
	float tea_kg = 1;

	float rice_cost = rice_kg*rice_price;
	float sugar_cost=sugar_price*sugar_kg;
	float tea_cost=tea_price*tea_kg;

	float total_before_tax= rice_cost+sugar_cost+tea_cost;
	float tax=total_before_tax*10/100;
	float total_after_tax=tax+total_before_tax;

	cout << "Rice= " << rice_price << "x" << rice_kg << "=" << rice_cost << endl;
	cout << "Sugar= " << sugar_price << "x" << sugar_kg << "=" << sugar_cost << endl;
	cout << "Tea= " << tea_price << "x" << tea_kg << "=" << tea_cost << endl;

	cout << "Total before tax= " << total_before_tax << endl;
	cout << "Tax= " << tax << endl;
	cout << "Final Bill= " << total_after_tax << endl;

	return 0;
}