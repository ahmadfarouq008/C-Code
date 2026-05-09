#include <iostream>
using namespace std;

int main (){
int num=0;

cout << "Enter an integer:";
cin >> num;

if (num>0) {
    if (num%2==0) {
        cout <<"The number is positive and even." << endl;
    }
    else {
        cout << "The number is positive but not even." << endl;
    }
}
else if (num<0){
    if (num%2==0) {
        cout << "The number is not positive but even." << endl;
    }
    else {
        cout << "The number is not positive and not even." << endl; 
    }
}
return 0;
}