/* By starting with 1 and 2, the first 10 fibonacci numbers will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not
exceed 1000, find the sum of the even-valued terms.

*/

#include <iostream>
using namespace std;

// Function Prototypes

int fibonacci_sequence();

int main()
{
	fibonacci_sequence();
}

int fibonacci_sequence()
{
	int input_Array_Size;						// Placeholder variable where user enteres the size.
//	int fibonacci_array[] = {0, 1, 1};			// Actual array to hold numbers with user defined size.
//	int count;										// Counter variable for looping through array.

	// Prompt user to enter the size of the array to store the Fibonacci sequence.
	cout << "Please enter the size of the Fibonacci sequence you would like to print: " << endl;

	// User enters in the actual array size.
	cin >> input_Array_Size;

	const int ARRAY_SIZE = input_Array_Size;

  int fibonacci_array[ARRAY_SIZE] = {0, 1, 1};			// Actual array to hold numbers with user defined size.
	int count;										// Counter variable for looping through array.



	//int fibonacci_array[ARRAY_SIZE];	// Actual array to hold numbers with user defined size.

//	for (count = 0; count < input_Array_Size; count++)
//	{
//		cout << "Array elements are: " << fibonacci_array[count]  << endl;
//		++count[count];
//	}
	int total = 2;
	for (long index = 1; index < input_Array_Size - 1; index++)
	{
		//index = index++;
		//cout << "Array elements are: " << fibonacci_array[index] << endl;
		fibonacci_array[index + 1] = fibonacci_array[index] + fibonacci_array[index - 1];
		total += fibonacci_array[index + 1];
		cout << "Array elements are: " << fibonacci_array[index] << endl;
	}
  return total;
}
