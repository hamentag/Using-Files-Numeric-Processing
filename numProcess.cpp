// Using Files - Numeric Processing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inFile;
   int number;

   // Open the file.
   inFile.open("Random.txt");

   // If the file successfully opened, process it.
   if (inFile)
   {
      // Read numbers from the file
      while (inFile >> number)
      {
        // display the number
         cout << number << endl;
      }

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
