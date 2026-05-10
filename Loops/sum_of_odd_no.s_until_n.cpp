#include <iostream>
 using namespace std;

 int main () {
    int n=0;
    int sum=0;

    cout << "Enter an integer:" ;
    cin >> n;

    for(int i=1;i<=n;i++) {

        if (i%2!=0) {
            sum+=i;
        }

    }
    cout << "Sum of odd numbers is " << sum << endl;
    return 0;

 }