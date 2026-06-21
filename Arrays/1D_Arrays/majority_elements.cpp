#include <iostream> 
using namespace std ;
int main () {

    const int n = 9 ;  // where n means size of array.
    int arr[n] = {} ;
    int count = 0;
    bool found = false; // it is only used for printing the 'no majority elemnts found' statement.

    cout << "Enter 9 integers :" << endl;

    for (int i=0; i<9; i++) {
        cin >> arr[i] ;
    }

    cout << "Array elements: " ;

    for (int i=0; i<9; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    for (int i=0; i<9; i++){  // this outer loop check each elemnts and compare with all elements by using inner loop, if outer loop finds that element whose count is > n/2 then outer loop breaks. e.g, in i=0 , outer loop checks 3 and inner loop checks 3 to be equal to all other elemnts , if equal then counts them and then check the count of '3' > n/2 for  , if count of '3' is not greater then n/2 then the next outer loop starts to check other number 2 , if count of 2 is > n/2 then outer loop breaks and print majority elements and donot check other elements of outer loop.  
        count = 0 ;

        for (int j=0; j<9; j++){
            if (arr [i] == arr[j]){ 
                count++ ;
            }
        }
        if (count > n/2){     // n/2 means half of the size, if count of elemets is greater then half of the size of elements, then majority elements are printed.  
            cout << "Majority Elements = " << arr[i];
            found = true ;  
            break ;
        }    
    }           
    if (found == false ){
        cout << "No majority elements exist. " << endl;
    }
    return 0;
}
