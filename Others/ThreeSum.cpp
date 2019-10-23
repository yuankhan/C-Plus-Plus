/*
 * This is an algorithm to determine how many sets of 
 * three integers within an array sum to 0.
 * 
 * Time Complexity : O(n^2)
 * Space Complexity : O(n)
*/
#include <iostream>

using namespace std;

/*
 * Important note: This only works on a 
 * previously sorted list.
*/

int threeSum(int *array, int size)
{
	int total = 0;
	for (int i = 0; i < size - 2; ++i)
	{
		int j = i + 1;
		int k = size - 1;
		while (j < k)
		{
			if (array[i] + array[j] + array[k] == 0)
			{
				++total;
				++j;
				--k;
			}
			else if (array[i] + array[j] + array[k] > 0)
			{
				--k;
			}
			else
			{
				++j;
			}
		}
	}
	return total;
}

/*
 * Using constants and static input just to demonstrate
 * the algorithm.
*/
int main()
{
	const int size = 11;
	int array[size] = { -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };
	int total = threeSum(array, size);

	cout << "There are " << total << " sets of three values within the array that sum to 0.";
	return 0;
}
