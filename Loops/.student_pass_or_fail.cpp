#include <iostream> 
using namespace std;

int main () {
    int marks=0;
    int pass_count=0;
    int fail_count=0;

    for (int i=1; i<=5; i++) {

        cout << "Enter marks of student " << i << ": " ;
        cin >> marks ;
        
        if (marks >= 50) {
            cout << "student " << i << ": Pass" << endl;
            pass_count++ ;
        }
        else {
            cout << "student " << i << ": Fail" << endl;
            fail_count++ ;
        }
    }
    cout << endl;
    cout << "Total Pass = " << pass_count << endl;
    cout << "Total Fail = " << fail_count << endl;

    return 0;
}

/* 
BY USING ONLY LOOPS, WE ONLY GET THE OUTPUT LIKE THIS NO MATTER HOW MUCH NESTED LOOPS WE USE.

Enter marks of student 1: 45  (SINGLE FOR LOOP)
student 1: Fail
Enter marks of student 2: 67
student 2: Pass
Enter marks of student 3: 89
student 3: Pass
Enter marks of student 4: 32
student 4: Fail
Enter marks of student 5: 50
student 5: Pass

Total Pass = 3
Total Fail = 2

TO GET OUTPUT LIKE THIS, WE HAVE TO USE ARRAY BECAUSE : Nested loops alone cannot remember all 5 marks, to print the results later. 

Enter marks of students : (FOR LOOP 1) (stores marks)
45
67
89
32
50

Student 1: Fail (FOR LOOP 2) (we get error here because values stored by marks variable in loop 1 are not remembered/stored by the marks variable of loop 2.)
Student 2: Pass
Student 3: Pass
Student 4: Fail
Student 5: Pass

Total Pass = 3
Total Fail = 2

*/

