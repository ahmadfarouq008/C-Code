#include <iostream>
using namespace std;

int MinOfTwo(int a,int b) { // these parameters are actually the input given in the form of arguments by the coder(me) not by user(which is from terminal). 
    if (a<b) {
        return a; // here return acts as cout inside function def, and return will give the values to below cout and that values (a or b) will be printed according to condition.
    }
    else {
        return b;
    }
}

int main() {

    cout << MinOfTwo(35,34) << endl; // when run, the answer is 34 . here 35 and 34 are called arguments.These arguments stores in parameters (int a and int b).  
    return 0;
}

