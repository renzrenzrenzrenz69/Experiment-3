#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c;
	char abc[2][1000];


	cout << "Enter any character";
	cout << ":"; cin >> abc[0];
	for (a = 0; abc[0][a] != '\0'; a++)
	{
		c = a;
	}
	b = c;
		abc[1][0] = abc[0][c];




	for (a = 0; a != c; a++, b--)
	{
		abc[1][b] = abc[0][a];
	}
		abc[1][c + 1] = '\0';

	cout << "\n" ;	
	cout << "Reversed: " << abc[1] << endl;
	cout << "\n" ;	
	cout << "The length of the word is:" << c + 1 << endl;
		
		

	_getch();
	return 0;

}