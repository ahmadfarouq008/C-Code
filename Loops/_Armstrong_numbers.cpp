#include <iostream>
using namespace std;

int main () {
    int N=0;
    int count=0;
    int digit=0;
    int sum=0;
    int P=0;                          // power variable used for mutplying each digit of n with total number of digits(count) times i.e each digit^Total no. of digits .
    
    cout << "Enter number:" ;
    cin >> N;

    int E=N;                          // Created this E to store N(original numbers) because of its use in the 2nd while loop. Since N became 0 in the 1st while loop so to run the 2nd while loop of extracting digits and power, we want the original numbers back again so we first store the value of N(orignal) into E and E contains all the original numbers, as we know original numbers stored in N became 0 during 1st while loop.  

    int T=N;                          // After the completion of 2nd while loop the E (which has the original numbers) becomes 0 because all its digits are extracted and their power is calculated by (E=E%10 and E=E/10) . So to check whether the orignal inputed number is equal to sum or not we also store the value of N into T since both the N and E has became 0.   
    
    while (N>0) {                     // for finding armstrong number we first find the total numbers/count of inputed number so that we can check each number of total inputed numbers  for power calculation.  

        N = N / 10 ;                  // this removes and count each digit until inpued number(N) becomes 0.

        count ++ ;                    // as each of the single number is removed one by one , the count is also increased one by one. So we get the number of digits (e.g 4 for 1634) stored in count variable.
        
    }

    while (E>0){                     // after counting and finding each number from orignal numbers we extract each digit and calculate its power by mutiplying each digit in very iteration count times one by one. (i.e each-digit ^count)  

        digit = E % 10 ;             // this extract every digit in every iteration one by one for being multiplied raise to power count times( here power of digit is count.) i.e each digit is raied to power count.

        P = 1;                       // we intialize it with 1 for sake of multiplication and declare at this place before for loop beacaue power of single digit is calculated in 1st iteration of for loop and while loop .so when moving to 2nd iteration for calulation of other digits's power, the p resets to 1 again beacuse we want to calculate power of next digit again from 1 not from the previous digits power number.      

        for (int i=1;i<=count;i++) { // power = digit(e.g 2) raise to power count (4) where 4 are the total number of digits.

            P = P * digit ;          // it is simply the multiplication of digit with itself count(4) times.(where p only reamins 1 in 1st iteration and beacomes the multiplied(power evaluated) number in next iterations.
    
        }
        
        sum = sum + P;               // as P stores the each power calulated digit so these digits after each power calculation are added one b one in each iterations .  

        E = E/10 ;                   // after 1st iteration of calulating power of last digit. Te last digit is removed and the next 2n dlast digit goes for 2nd iteration for being extracted and calculatd with its power.  

    }

    if ( T == sum) {                 // here both the orignal values stored in N and E beacomes 0 but value stored in T is still original so we use it to check either it is equal to total sum or not for printing armstrong number.
        cout << T << " is an armstrong number." << endl;
    }
    else {
        cout << T << " is not an armstrong number." << endl;
    } 

    return 0;
}