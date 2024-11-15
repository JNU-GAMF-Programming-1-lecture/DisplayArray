//
// DisplayArray.cpp
//
#include <iostream>

using namespace std;

void DisplayArray(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << (i==n-1?"":", ");
	}
	cout << endl;
}


int main()
{
	int* A1 = new int[8] {1, 2, 4, 3, 7, 4, 5, 9};
	int A2[6]{ 1,2,3,4,5,6 };
	DisplayArray(A1, 8);
	DisplayArray(A2, size(A2));
	// ...
	delete[] A1;
	return 0;
}