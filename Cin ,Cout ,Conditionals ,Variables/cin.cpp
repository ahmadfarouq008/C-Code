#include <iostream>
using namespace std;

int main() {
    int age=0, member=0, base_ticket=500;
    if(age<12){
        base_ticket -= (50/100);
    }
    else if ( age >12 ){
        if(age>=60){
            base_ticket -= (30/100);
        }
        else{
            if(member == 1) base_ticket -= (20/100);
        }
    }

    return 0;

}