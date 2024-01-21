// Using Files - Numeric Processing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inFile;
   int number,
       num0fNumbers = 0,
       sum =0;
   double average = 0.0;

   // Open the file.
   inFile.open("Random.txt");

   // If the file successfully opened, process it.
   if (inFile)
   {
      // Read the numbers from the file
      while (inFile >> number)
      {
         num0fNumbers++;
         sum += number;       
      }

      // Calculate the average
      average = double (sum) / num0fNumbers;

      // Display the calculated data
      cout << "NUMERIC PROCESSING\n--------------------\n" 
           << "The number of numbers found in the file: " 
           << num0fNumbers << "\nThe sum of the numbers: " << sum 
           <<                 "\nThe average: " << average;

      // Close the file.
      inFile.close();
   }
   else
   {
      // Display an error message.
      cout << "Error opening the file.\n";
   }
   return 0;
}
