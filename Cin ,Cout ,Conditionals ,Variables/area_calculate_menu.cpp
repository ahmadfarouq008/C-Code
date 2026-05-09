#include <iostream>
using namespace std;

int main () {
    int choice=0;
    int side=0;
    float area=0;
    int length=0;
    int width=0;
    int base=0;
    int height=0;
    float radius=0;

    cout << "1. Area of a square." << endl;
    cout << "2. Area of a rectangle."  << endl;
    cout << "3. Area of a triangle." << endl;
    cout << "4. Area of a circle." << endl;

    cout << "Enter your choice:";
    cin >> choice;

    if (choice==1) {
        cout <<"Enter the side length of square:";
        cin >> side;
        area= side*side;
        cout << "Area of a square is:" << area << endl;

    }
    else if (choice==2) {
        cout << "Enter the width and length of rectangle:";
        cin >> length >> width;
        area= length*width;
        cout <<"Area of a rectangle is:" << area << endl;
    }
    else if (choice==3){
        cout << "Enter base and height of a triangle:";
        cin >> base >> height;
        area= 0.5 * base * height;
        cout << "Area of a triangle is:" << area << endl;

    }
    else if (choice=4) {
        cout <<"Enter radius of the circle:";
        cin >> radius;
        area = 3.14*radius*radius;
        cout << "Area of a circle is:" << area << endl;
            
    }
    else {
        cout << "Invalid choice." << endl;
    }
    return 0;

}