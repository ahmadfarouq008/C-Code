#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5};
    int pos, newvalue, size;
    size = sizeof(arr)/sizeof(int);

    cout<<"Enter the position you want to insert element at: ";
    cin>>pos;
    cout<<"Enter the value to add: ";
    cin>>newvalue;

    if(pos<=0 || pos>=size){
        cout<<"Invalid position";
        system("pause");
        return 1;
    }

    if(pos>=0 || pos<=size){
        for(int i=size; i>pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = newvalue;
        size++;
    }
    else{
        cout<<"Invalid Position Added";
    }

    cout<<"Size is: "<<size<<endl;
    cout<<"Final Array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}