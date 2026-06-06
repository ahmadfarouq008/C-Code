#include <iostream>
using namespace std;

int main () {
    int product_score =0;
    
    for (int i=1; i<=3; i++){
        cout << "category " << i << ":" << endl;

        cout << "Input product quality score :" << endl;
        
        for (int i=1; i<=4; i++) {
            cin >> product_score;

            if (product_score < 50) {
                cout << "Rejected" << endl; 
            }
            else {
                cout << "Approved" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}