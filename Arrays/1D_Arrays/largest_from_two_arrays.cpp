#include <iostream>
using namespace std;

int main () {
    int arr1[5]={};
    int arr2[5]={};
    int arr3[5]={};

    cout << "Enter 5 elements for 1st array :" << endl;
    for (int  i=0; i< 5; i++) {
        cin >> arr1[i] ;
    }

    cout << "Enter 5 elements for 2nd array :" << endl;
    for (int  i=0; i< 5; i++) {
        cin >> arr2[i] ;
    }
    for (int  i=0; i< 5; i++){
        
        if (arr1[i] > arr2[i]) {
    
            arr3[i] = arr1[i] ;
        }
        else{
            arr3[i] = arr2[i] ;
        }
    }
    cout << "1st array : " ;
    for (int  i=0; i<5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "2nd array : " ;
    for (int  i=0; i<5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "3rd array (Larger Element) : " ;
    for (int i=0; i<5; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}