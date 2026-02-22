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

	print(count_elements(array, length));
	
	return 0;
}