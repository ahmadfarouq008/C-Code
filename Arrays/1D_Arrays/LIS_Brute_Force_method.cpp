#include <iostream>
using namespace std ;

int main (){
    int arr[8] = {} ;
    int current =0;
    int length =0;
    int max_length =0;

    cout << "Enter 8 integers :" << endl;
    for (int i=0; i<8; i++){
        cin >> arr[i] ;
    }
    max_length=1;

    for (int i=0; i<8; i++){
        current = arr[i];
        length = 1;
        
        for (int j=i+1; j<8; j++){
            
            if(arr[j]>current){
                current = arr[j] ;
                length++ ;
            }
        }
        if (length > max_length){
            max_length = length ;
        }
    }
    cout << "Length of longest increasing subsequence = " << max_length << endl;
    return 0;
}