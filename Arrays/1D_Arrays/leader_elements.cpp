#include <iostream>
using namespace std;

int main () {
    int arr[7]={} ;
    bool leader=0;

    cout << "Enter 7 intgers :" << endl;;
    for (int i=0; i<7; i++){
        cin >> arr[i] ; 
    }
    cout << "Array elements: " ;
    for (int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout <<"Leader Elements: " ;
    for (int i=0; i<7; i++){
        leader = true ;               // When checking each i , we don't yet know whether it is a leader.So we start by assuming, 'bool leader = true' which means the elemnt is assumed as leader befoer checking the right elemnts by inner loop.

        for (int j=i+1;j<7; j++ ){
            if (arr[j] > arr[i]){
                leader = false ;     // If we find any number on the right that is bigger then the current i element then current element i cannot be a leader, i.e leader = false.
                break ;              // if we find any element on right side 'j' > current element 'i' , then donot check further ,i.e break the 'j' checking loop.
                
            }
        }   
        if (leader == true){
            cout << arr[i] << " " ;
        }
    }
}