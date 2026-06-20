
/*
int main () {
    int arr [5] = {0};
    int sum = 0;

    cout << "Enter 5 integers : "  ;
    for (int i=0; i<5 ; i++) {
        cin >> arr[i] ;
        sum = sum + arr[i] ;
    }
    cout << "array elements :" ;
    
    for (int i=0 ; i<5 ; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    cout << "sum = " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std ;
int main () {

const int s = 6; 
int arr[s] = {0};
int max =0;
int min =0;
int average =0;
int sum =0;

cout << "Enter 6 intgers :" ;
for (int i=0; i<s ; i++) {
    cin >> arr[i] ;
}

cout << "Array elements :" ;
for (int i=0; i<s ; i++) {
    cout << arr[i] << " ";
}
cout << endl;

max = arr[0];
min = arr[0];

for (int i = 0;i<s; i++){
    sum = sum + arr[i] ;

    if (arr[i] < min){

        min = arr[i] ;
    }

    if (arr[i] > max){

        max = arr[i] ;
    }


}
average = sum / 6.0 ;

cout  << "min :"<< min << endl; 
cout << "max:" << max << endl;
cout << "avr:" << average << endl;

}


#include <iostream>
using namespace std ;
int main () {
    const int  s =10;
    int arr[s] = {} ;
    int value =0;
    
    cout << "Enter 10 values :" ;
    for (int i = 0;i<s; i++){
    cin >> arr[i] ;
    }

    cout << "Enter number to search:" ;
    cin >> value ;
    
    for (int i = 0;i<s; i++){
        
        if (arr[i] ==value){
            cout << value << " found at index " << i << endl;
        }
    }
}



#include <iostream>
using namespace std ;
int main () {

int arr[8]= {0};
int num=0;
int count = 0;

cout << "Enter 8 integers: ";

for(int i=0;i<8;i++){
    cin >> arr[i];
}        

cout << "Enter no. to count :" ;
cin >> num ;

for(int i=0;i<8;i++){

    if (arr[i]== num) {
        count ++;
    }
}
cout << num << " appears " << count << " times " << endl;

}

#include <iostream>
using namespace std ;
int main () {

const int s = 5;
int arr[s]= {};
int temp =0;

cout << "Enter 5 integers: ";

for(int i=0; i<s; i++){
    cin >> arr[i];
}

for (int  i=0; i<s-1;i++) {

    for (int  i=0; i<s-1;i++) {
        if ( arr[i] < arr[i+1]) {
    // swap:
            temp = arr[i];
            arr[i] = arr[i+1] ;
            arr [i+1] = temp ;
        }
    }
} 
cout << "sorted array " ;

for (int  i=0; i<s;i++){
    cout << arr [i] << " ";
}

}


#include <iostream>
using namespace std ;

int main()
{
    int arr[8];

    cout << "Enter 8 integers: ";
    for(int i=0;i<8;i++)
        cin >> arr[i];

    cout << "Duplicate elements: ";

    for(int i=0;i<8;i++)
    {
        bool duplicate = false;

        for(int j=0;j<i;j++)
        {
            if(arr[i] == arr[j])
                duplicate = true;
        }


        for(int j=i+1;j<8;j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
} 
*/