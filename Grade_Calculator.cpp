#include <iostream>
using namespace std;

int main() {

    int num = 0;
  
    cout << "Enter score: ";
    cin >> num;
    

    if(num>= 90) {
       
        cout << "A" << endl;
    }
    else if(num >= 80 && num < 90) {
    
        cout << "B" << endl;
    }
    else if (num >= 70 && num < 80) {
        
        cout << "C" << endl;
    }
    
    else if (num >= 60 && num < 70) {
      
        cout << "D" << endl;
    }
    else if (num < 60) {

        cout << "F" << endl;
    }

    return 0;

}