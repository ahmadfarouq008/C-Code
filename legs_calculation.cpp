#include<iostream>
using namespace std;

int main() {
    int chicken_count=0;
    int horse_count=0;
    int cows_count=0;
    int total_legs=0;

    cout << "Enter count of chicken:" ;
    cin >> chicken_count;
    if (chicken_count<0) {
        cout << "must be positive " << endl;
        cout << "re-enter amount of chicken:" ;
        cin >> chicken_count;
    }
    
    cout << "Enter count of horse:" ;
    cin >> horse_count;
    if (horse_count<0) {
        cout << "must be positive " << endl;
        cout << "re-enter amount of horse:" ;
        cin >> horse_count;
    }
    
    cout << "Enter count of cows:" ;
    cin >> cows_count;
    if (cows_count<0) {
        cout << "must be positive " << endl;
        cout << "re-enter amount of cows:" ;
        cin >> cows_count;    
    }    
    
    total_legs= chicken_count*2 + horse_count*4 + cows_count*4;
    
    cout << "Total legs are:" << total_legs << endl;
    

    return 0;
}
