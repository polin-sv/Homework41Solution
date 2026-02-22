#include "logic.h"

string count_elements(int array[DEFAULT_SIZE],int length) {
	
	int count_even = 0;
	int count_odd = 0;

	for (int index = 0; index < length;index++) {
		array[index] = array[index] < 0 ? array[index] * -1 : array[index];
		if (array[index] % 2 == 0) {
			count_even += 1;
		}
		else {
			count_odd += 1;
		}
	}

	string result = "even numbers: " + to_string(count_even)
		+ "\nodd numbers: " + to_string(count_odd);

	return result;
}
