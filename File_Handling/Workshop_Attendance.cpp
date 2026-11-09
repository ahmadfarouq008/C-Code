#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

int main(){
    
    string day;
    string month ;
    string year ;
    int count = 0;
    string fullName[100] ;
    int minutes[100] ;
    string name ;
    int m ;
    int ctfCount = 0 ;
    
    // char dash_1=0;
    // char dash_2 =0; 

    ifstream inFile ("Attendence.txt");

    if (!inFile.is_open()) {

        cout << "file cannot be opened ." << endl;
        return 0 ;                                                            // always return 0 , if not the the code will start running anyway and crash with broken stream . 
    }

    

    // inFile >> day >> dash_1 >> month >> dash_2 >> year ;

    // inFile.ignore(100, '/n') ;
    
    // cout << "Worksop on " << day << "/" << month << "/" << year << endl;

    getline(inFile, day,'-') ;
    getline(inFile, month, '-');
    getline(inFile, year, '\n');


    cout << "Worksop on " << day << "/" << month << "/" << year << endl;

    while (count < 100 && getline (inFile ,name , ',') ){                      // this reads the first sentence(i.e name) of every row until comma.As getline() only reads strings so name can be a string but m (i.e minutes,which are integer numbers) cannot be a string ,so we dont use getline(inFile, m , '\n') . also the other reason is that , if we use getline() for m by declarig m with m then later the integer minutes[] array cannot store string values. one more reason , but if we declare the minutes[] array as string then it bypasses the array storing error but it stucks when we do " totalMin += minutes[i] ; " because the + operation cannot apply int to string and string to string storing , so this given code is best for reading string and int sentnces from one full line/row.         
        if (inFile >> m ){                                                     // as storing int file int getlienis not possible so we use inFile >> m to read the integer values of minutes from the file.
            inFile.ignore(100 , '\n') ;                                        // always use ignore() here becaue it acts like end of line '\n' i.e it ends the lines as soon as each full inFile row has been read .
            
        fullName[count] = name ;
        minutes[count] = m ;
        count ++ ;
        }
    }
    // Check if no attendees found after date
    if (count == 0) {
        cout << "No attendees found!" << endl;
        inFile.close();
        return 0;
    }

    for (int i=0 ; i<count ; i++) {
        cout << fullName[i] <<  ":" << minutes[i] << " min" <<  endl;
              
    }
    cout << "Attendees: " << count <<  endl ;

    double totalMin = 0 ;    
    double avgMin = 0;

    for (int i=0 ; i<count ; i++){
        totalMin += minutes[i] ;  
        
    }
    cout << "Total Minutes : " << totalMin << endl;

    avgMin = totalMin / count ;
    cout << "Average Minutes : " << avgMin << endl;

    int maxMin ;
    maxMin = minutes[0] ; 
    
    int maxIndex = 0 ;                                                           // always the initialze the count or index variables with 0 for good practice . 

    for (int i =0 ; i < count ; i++) {

        if (minutes[i] > maxMin) {
            maxMin = minutes[i] ;
            maxIndex = i ;
        }
    }
    cout << "Maximum Attendance : " << fullName[maxIndex] << " ( " << maxMin << " min )" << endl; 
 

    inFile.close( ); // always close the file after writing it code .

    ofstream outFile ("certificates.txt") ;
    if (!outFile.is_open()) {
        cout << "file cannot be opened ." << endl;
        return 0 ;
    }

    for (int i =0 ; i < count ; i ++){

        if (minutes[i] >= 45) {
            outFile << fullName[i] << endl ;
            ctfCount ++;

        }
    }

    cout << "Certificates Issued: " << ctfCount << endl;

    outFile.close() ;                                                       // always close the file after writing it code .
}




