#include <iostream>
#include <iomanip>
#include <conio.h>
 using namespace std;
 int main()
 {
	 float integer [10], b, c, tot;
	 int n, a; 
	 
	 cout << "Enter an array of 10 elements:\n";
	  for (n = 0;  n < 10; ++n)
	  {
		  
		  cin >> integer [n];
	  }

	  for (n = 0; n < 10; ++n)
	  {
		  for (a = n + 1; a < 10; a++)
		  {
			  for (n = 1; n < 10; ++n)
			  {
			  if (integer [n] > integer [a])
			  {
				  b = integer [n];
				  integer [n] = integer [a];
				  integer [a] = b;
			  }
			  }
		  }
	  }

	  c = integer [0];
	  tot = 0;
	  for (n = 0; n < 10; n++)
	  {
		  if (c > integer [n])
			  c = integer [n];
			 tot += integer [n];

			 if (integer[0] < integer[n])
           integer[0] = integer[n];
	  }
	  

	  cout << "The smallest integer is " << c << ".\n";

	  cout << "The largest integer is " << b << ".\n";

	  cout << "The total of the elements is " << tot << ".\n";

	  cout << "The average of the array is " << tot/10 << ".\n";
	 

 getch ();
	 return 0;
 }