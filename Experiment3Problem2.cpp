#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {

	 double x [100], y [100];
	 int r, n;
	 double z [100];
	 
	 cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	 
	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province A, Day " << r << ": "; 
	 cin >> x [r];
	 }

	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province B, Day " << r << ": "; 
	 cin >> y [r];
	 }

	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province C, Day " << r << ": ";
	 cin >> z [r];
	 }
	 cout<<"\n";
	 cout << "Displaying Values:" << endl;

	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province A, Day " << r << " = ";
	 cout << x [r] << endl;
	 }

	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province B, Day " << r << " = ";
	 cout << y [r] << endl;
	 }

	 for (r = 1; r <= 7; r++)
	 {
	 cout << "Province C, Day " << r << " = ";
	 cout << z [r] << endl;
	 }


 getch ();
	 return 0;
 }