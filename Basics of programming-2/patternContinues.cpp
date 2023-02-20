// patternContinues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   //fancy pattern 2
	/*
	1
	2*2
	3*3*3
	4*4*4*4
	4*4*4*4
	3*3*3
	2*2
	1
    */
	int n;
	cout << "enter the n";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < i + 1;j++)
		{
			cout << i + 1;
			if (j!= i)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - i;j++)
		{
			cout << n-i;
			if (j != n-i-1)
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	//palindrome printing 

	/*
	1
	121
	12321
	1234321
	123454321
	
	*/
	//how to solve is 
	//print 
    //1
	//12 after here onwards start printing in thereverse order after 2 it is 1
	//123 after 3 it is 2 1 
	//1234 after 4 it is 3 2 1 like this 

	cout<<"\npattern 2\n";
	for (int row = 0;row < n;row++)
	{
		int col;
		
		char ans;
		for ( col = 0;col <row + 1;col++)
		{
			 ans = 'A' + col;
			cout << ans;
		}
		col--;
		for (;col > 0;col--)
		{
			ans = ans - 1;
			
			cout << ans;
		}
		cout << endl;
		/*col--;
		
		for (;col > 0;col--)
		{
			alpha--;
			cout << char(alpha);
		
		}
		cout << endl;*/
	}



}

