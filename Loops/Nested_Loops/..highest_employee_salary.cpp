#include <iostream>
using namespace std ;

int main () {
    int salary=0;
    int total_sum=0;

    int highest_salary=0;
    int highest_employee=0;


    for (int i=1; i<=3; i++) {

        total_sum = 0 ;
        cout << "Enter 6 months salary for employee " << i << ":" << endl;

        for (int j=1; j<=6; j++) {
            cout << "Month " << j << ":" << endl;
            cin >> salary ;

            total_sum += salary;
        }
        cout << endl;
        cout << "Employee " << i << " --> Total = " << total_sum << endl;

        if (total_sum > highest_salary ) {
            
            highest_salary = total_sum;
            highest_employee = i ; 
        }   
    }
    cout << endl;
    cout << "Highest paid employee: Employee " << highest_employee << " with " << highest_salary << " yearly" << endl ; 
    
    return 0;    
}