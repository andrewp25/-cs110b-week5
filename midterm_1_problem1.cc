// Write a program to read numbers from the user and put it in an array. Ask for the array size before you ask for the actual numbers. Print the array

#include <iostream>
using namespace std;

int arrayPrinter()
{
  // Integer value to hold user defined array size.
  int userArraySize;

  // Prompt to enter array size.
  cout << "How many numbers do you want the array to hold?: " << endl;
  cin >> userArraySize;

  // Constant int value to hold the array size defined by user.
  const int ARRAY_SIZE = userArraySize;


  // Actual array declaration to hold int values entered by user.
  int numberArray[ARRAY_SIZE];

  //Use for loop to cycle through number input for array.

  for (int count = 0; count < ARRAY_SIZE; count++)
  {
    cout << "Please enter the value for array value " << count + 1  << endl;
    cin >> numberArray[count];
  }

  // Print the values in the array entered by the user.

  cout << "You entered the following values: " << endl;

  for (int count = 0; count < ARRAY_SIZE; count++)
      cout << numberArray[count] << endl;

  return 0;

}




int main()
{
  arrayPrinter();
  return 0;
}
