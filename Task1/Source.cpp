/*
*  Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Pract 2.2
* 
*2. Given a set of sequences of values ​​A[m,n]. Replace in each sequence A[i] the minimum values ​​by the sum of the elements of this sequence.
*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() 
{
	srand(static_cast<unsigned>(time(0)));

	int m;
	cout << "Enter number of sequences: ";
	cin >> m;

	int n;
	cout << "Enter length of each sequence: ";
	cin >> n;

	vector<vector<int>> A (m);

	for (int i = 0; i < m; i++) // fill this two-dimensional vector/array with random values from -99 to 99
	{
		A[i].resize(n);
		for (int j = 0; j < n; j++) {
			A[i][j] = (rand() % 199) - 99;
		}
	}

	cout << "Generated sequences:\n";//Output results, copy code from example 
	for (int i = 0; i < m; i++) {
		cout << "Sequence " << setw(2) << i + 1 << ": ";
		for (int value : A[i]) {
			cout << setw(3) << value << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < m; i++) //search min value and sum
	{
		int min_value = A[i][0];
		int sum = 0;
		for (int j = 0; j < n; j++) 
		{	
			sum += A[i][j];

			if (A[i][j] < min_value) {
				min_value = A[i][j];  
			}

		}
		
	
		cout << "Minimum value in sequence " << i + 1 << ": " << min_value << endl;
		cout << "sum of elements " << i + 1 << ": " << sum << endl;
		for (int j = 0; j < n; j++) // Replace the value
		{
			if (A[i][j] == min_value)
			{
				A[i][j] = sum;
			
			}
		}
		
	}
	cout << "Updated sequences:\n";
	for (int i = 0; i < m; i++) {
		cout << "Sequence " << setw(2) << i + 1 << ": ";
		for (int value : A[i]) {
			cout << setw(3) << value << " ";
		}
		cout << endl;
	}
	

	return 0;
}