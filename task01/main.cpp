#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	

	string msg = check_the_same(array, length) ? "yes" : "no";

	print("are elements the same? ");
	print(msg);
	
	return 0;
}