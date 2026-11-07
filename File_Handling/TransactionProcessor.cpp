#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

int main(){
    
    ifstream inFile("transactions.txt") ;

    if (!inFile.is_open()) {
        cout << "File could not be opened!" << endl;
        return 0 ;
    }

    string FullNames[100] ;
    int FinalBalances[100] ;

    int count = 0 ;
    string name ;
    int totalBalance = 0 ;
    int initialBalance  ;
    char operation ;
    int transactionAmount  ;
    int finalBalance ;
    
    while (count < 100 && getline(inFile, name, ':')) {
    
        if (! (inFile >> initialBalance >> operation >> transactionAmount )) {
            inFile.clear() ;
            inFile.ignore(100 ,'\n' ) ;
            continue;
        }
        inFile.ignore(100 , '\n');

        if ( operation == '+' ) {

                finalBalance =  initialBalance + transactionAmount ;

            } 
        if ( operation == '-' ) {

                finalBalance = initialBalance - transactionAmount ;
                
            }
        
        // else
        FullNames[count] = name ;

        FinalBalances[count] = finalBalance ;

        
        totalBalance = totalBalance + finalBalance ;
        
        count ++ ;

        

    }
    

    cout << "\nValid customers and Final Balances : " << endl ;
    
    for (int i = 0; i < count ; i++ ) {
        cout << FullNames[i] << ":" << FinalBalances[i] << endl;   
    }

    cout << "Total Balance :" << totalBalance << endl ;

    inFile.close() ;

    ofstream outFile ("transactions_summary.txt" ,ios :: app );

    if (outFile.is_open()) {

    outFile << "Valid Records : " << count << endl ;
    outFile.close() ;

    }

}