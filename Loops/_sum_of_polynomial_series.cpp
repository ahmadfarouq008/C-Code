#include <iostream>
using namespace std;

int main () {
    int degree = 0;
    int x = 0;  // this is the coefficient . 
    int term = 0;
    int sum = 0;
    int power = 1; // Power stores power stores xⁿ.Here power = 1 because Initially x⁰ = 1 and also the starting value is 1.  

    cout << "Enter value of x: " ;
    cin >> x;

    cout << "Enter degree:" ;
    cin >> degree;

    for (int i=0 ; i<=degree ; i++) {  // i starts from 0 because power starts from 1 so mutilied with 0 and it gives the term 1.   

        term = (i + 1) * power ; // power stores xⁿ and (i+1) gives coefficient Together they create 1x⁰ + 2x¹ + 3x² + ... . 

        cout << term ;
        
        sum = sum + term ; 

        if (i < degree) { // "+" is printed degree is reached.

            cout << " + " ;
        }

        power = power * x ; // power (xⁿ) is multipled with x(e.g, 2) and power variable keeps storing new value of xⁿ.
    }
    cout << " = " << sum << endl; 
    
    return 0;
}

/*
{ Explaiation of power = power * x } :

First Iteration

Current:

power = 1

Now:

power = power * x;

becomes:

1 × 2 = 2

So:

power = 2

which means: 2¹

Second Iteration

Now:

power = 2

Again:

power = power * x;

becomes:

2 × 2 = 4

So:

power = 4

which means: 2²

Third Iteration

Now:

power = 4

Again:

4 × 2 = 8

So:

power = 8

which means: 2³

Mathematical Meaning :

2¹ = 2
2² = 2×2
2³ = 2×2×2
2⁴ = 2×2×2×2

The loop is doing one multiplication each iteration.

*/