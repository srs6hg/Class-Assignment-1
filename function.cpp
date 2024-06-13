#include "function.h"
int arrCount = 0;
int numArr[1000];

int intSearch(int num) {
	for (int i = 0; i < arrCount; i++) {
		if (numArr[i] == num) {
			cout << "Index: " << i;
			return i;
		}
	}
	cout << "No such number exists within the array";
	return -1;
}

void mod(int ind, int num) {
	try {
		if (ind >= arrCount || ind < 0)
			throw (ind);
		numArr[ind] = num;
	}
	catch (int badInd) {
		cout << endl << badInd << " is not within the range of the array, please try again.\n";
	}
}

void pushBack(int num) { // adds to the end and increases the count
	try {
		if (arrCount >= 1000)
			throw runtime_error("\nCannot excede current array bounds\n");
		numArr[arrCount] = num;
		arrCount++;
	}
	catch (const exception& e) {
		cout << e.what();
	}
}

void erase(int ind) { // Moves every number in front of the index forward and makes the end zero
	try {
		if (ind >= arrCount || ind < 0)
			throw (ind);
		for (int i = ind; i < arrCount - 1; i++)
			numArr[i] = numArr[i + 1];
		arrCount--;
		numArr[arrCount] = 0;
	}
	catch (int badInd) {
		cout << endl << badInd << " is not within the range of the array, please try again.";
	}
}

void view() { // Displays array
	cout << "\n{";
	for (int i = 0; i < arrCount - 1; i++) {
		cout << numArr[i] << ", ";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
	cout << numArr[arrCount-1] << "}\n";
}