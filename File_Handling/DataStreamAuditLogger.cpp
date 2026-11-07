#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main() {
	char fileName[50];

	int marks[5];
	int count = 0;
	int sum = 0;
	double average = 0;

	string Reason;
	string logResult;

	cout << "Enter file name :";
	cin >> fileName;

	ifstream inFile;
	inFile.open(fileName);

	if (!inFile.is_open()) {
		cout << " File not found " << endl;
		return 0;
	}

	while (count < 5 && inFile >> marks[count]) {
		sum = sum + marks[count];
		count++;
	}
	cout << " Numbers read : " << count << endl;

	if (count > 0) {
		cout << "values: " ;

		for (int i = 0; i < count; i++) {

			cout << marks[i] << " " << endl;
		}
		average = (double)sum / count;
		cout << "Average :" << average << endl;
	}

	if (count == 5 && inFile) {
		Reason = "Array is full and it also has more data.";
		logResult = "Full";
	}

	else if (inFile.eof()) {

		if (count == 0) {
			Reason = "the file is empty.";
			logResult = "empty";
		}
		else {

			Reason = "End of File (normal).";
			logResult = "normal";


		}
	}
	else if (inFile.fail()) {
		Reason = "Bad data found after " + to_string(count) + " numbers";
		logResult = "bad data after " + to_string(count);
	}

	cout << "Reason :" << Reason << endl;

	inFile.close();

	ofstream outFile;
	outFile.open("check_log.txt", ios::app);

	if (outFile.is_open()) {

		outFile << fileName << " " << logResult << endl;

	}
	else {
		cout << "Couldn't open check_log.txt" << endl;
	}
	return 0;
}