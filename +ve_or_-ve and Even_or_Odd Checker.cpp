#include <iostream>
using namespace std;

int main() {

    int num=0;

    cout << "Enter integer:" << endl;
    cin >> num;

    if (num>0){
        if (num%2==0) {
            cout << "Positive and Even." << endl;
        }
        if (num%2!=0){
            cout << "Positve and Odd." << endl;
        }
    }
    else if(num<0){
        if (num%2==0) {
            cout << "Negative and Even." << endl;
        }
        if (num%2!=0){
            cout << "Negative and Odd." << endl;
        }
    }
    else {
        cout << "Zero" << endl;

    }
    return 0;
    
}
