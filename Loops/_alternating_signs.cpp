#include <iostream>
using namespace std;

int main() {
	int count = 1; // the count variable checks and track the position of each number(i) .We are NOT checking whether i itself is odd or even We are checking whether the POSITION of term is odd or even.

	for (int i = 1; i <= 40; i += 3) { // as the numbers are increasing by 3 accoridng to our problem we use i=i+3. i controls actual numbers.

		if (count % 2 == 0) {  // here we use count because we check that if the position is even print negative with it . e.g at position 1 , i=1 is odd so + sign is printed , at postion 2 i=4 is even so - sign is printed and so on .  
			cout << "-" << i << " ";
		}
		else {
			cout << i << " " ; 
		}
		count++; // the count of positions increases until -40 is reached , as count controls sign patterns.
	}
	return 0;

}
