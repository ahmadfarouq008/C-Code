#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "enter character:";
    cin >> ch;

    if (ch>='A' && ch<='Z') {
        ch= ch+32;
        cout << "lowercase=" << ch << endl;

    }
    else if (ch>='a' && ch<='z') {
        ch= ch-32;
        cout << "Upercase=" << ch << endl;
    }
    else if (ch>='0' && ch<='9') {    // the number written inside single quote i.e '7' is considerd as character in context of ascii values. 
        int ascii=ch;                                // either we can convert '7' character to ascii (int) value i.e. (55) by using this.  
        cout << "Ascii digit=" << (int)ascii << endl;  // or we can use int in bracket with char variable i.e (int)ch [if int ascii variable not declared] or (int)ascii [if int ascii variable declared].
    }
    else {
        cout << "No Conversion" << endl;
    }    
    return 0;

}