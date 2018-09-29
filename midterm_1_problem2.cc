// In the array received form the user, find the smallest and the largest number and print it out.

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


  // Print the highest value in the array entered by the user.


  cout << "The highest value you entered in the array is: " << endl;
  int count;
  int highest;
  highest = numberArray[0];
  for (count = 1; count < ARRAY_SIZE; count++)
  {
    if (numberArray[count] > highest)
      highest = numberArray[count];
  }
    cout << highest << endl;

  // Print the smallest value in the array entered by the user.

  cout << "The smallest value you entered in the array is: " << endl;

  //int count;
  int lowest;
  lowest = numberArray[0];
  for (count = 1; count < ARRAY_SIZE; count++)
  {
    if (numberArray[count] < lowest)
    lowest = numberArray[count];
  }
    cout << lowest << endl;





  //for (int count = 0; count < ARRAY_SIZE; count++)
  //    cout << numberArray[count] << endl;

  return 0;

}




int main()
{
  arrayPrinter();
  return 0;
}
