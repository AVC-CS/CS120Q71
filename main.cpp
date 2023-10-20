#include "main.hpp"

int main()
{
	int numbers[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
	int retval;

	retval = getDiff(numbers, N);
	cout << "The pair is " << numbers[retval] << "\t" << numbers[retval + 1] << endl;
}