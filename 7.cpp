#include <iostream>
using namespace std;

int main() {

    int x = 0;
    int y = 0;


    cout << "Enter coordinates x and y: ";
    cin >> x >> y ;

    if( x>0 && y>0) {
        cout << "The point lies in the first quadrant." << endl;
    }
    else if(x<0 && y<0) {
        cout << "The point lies in the third quadrant. " << endl;
    }
    else if (x>0 && y==0) {
        cout <<"The point lies on the x axis." << endl;
    }
    
    else if (x==0 &&  y==0) {
        cout <<"The point lies at the origin." << endl;
    } 
    else if (x==0 && y>0) {
        cout <<"The point lies on the y axis." << endl;
    }

    return 0;

}