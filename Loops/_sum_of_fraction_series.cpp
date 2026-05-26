#include <iostream>
using namespace std;

int main () {
    int nomirator = 1;
    int denominator = 2 ;
    double sum = 0;
    double fraction = 0;
    
    for (int i=1; i<=99; i++ ) {
        
        cout << nomirator << "/" << denominator ;

        fraction = (double)nomirator / denominator ;
        
        sum = sum + fraction ;
        
        if (i < 99) {

            cout << " + " ;
        }
        nomirator++ ;
        denominator++ ;      
    }

    cout << " = " << sum << endl;
    
    return 0;
}

/* Alternative better code (because vaiables i and i + 1 are are used.):           
  
#include <iostream>
using namespace std;

int main() {

    double sum = 0;
    int n = 0;
    
    cout << "Enter the value until you want to run the fraction: " ;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
    cout << i << "/" << i + 1;
    
        sum = sum + (double)i / (i + 1);

        if (i < n) {

            cout << " + ";
        }
    }

    cout << " = " << sum;

    return 0;
}                   
  
*/