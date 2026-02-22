#include "logic.h"

bool check_the_same(int array[DEFAULT_SIZE], int length) {

	bool result=false;

	for (int index = 1; index < length; index++) {
		
		if (array[0] == array[index]) {
			result = true;
		}
		else
		{
			return false;

		}
	}

	return result;;
}
