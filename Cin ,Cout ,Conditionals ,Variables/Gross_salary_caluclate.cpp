#include <iostream>
using namespace std;

int main () {
    int base_salary=0;
    int HRA=0;
    int DA=0;
    int gross_salary=0;

    cout << "Enter basic salary:";
    cin >> base_salary;

    HRA= base_salary * 0.20;
    DA= base_salary * 0.80;
    gross_salary= base_salary + HRA + DA;

    cout << "Gross salary:$" << gross_salary << endl;








}