#include <iostream>
using namespace std;

bool isSubsetSumFunc(int arr[], int n, int sum)
{

	bool subset[2][sum + 1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {

			// A subset with sum 0 is always possible
			if (j == 0)
				subset[i % 2][j] = true;

			// If there exists no element no sum
			// is possible
			else if (i == 0)
				subset[i % 2][j] = false;
			else if (arr[i - 1] <= j)
				subset[i % 2][j] = subset[(i + 1) % 2]
			[j - arr[i - 1]] || subset[(i + 1) % 2][j];
			else
				subset[i % 2][j] = subset[(i + 1) % 2][j];
		}
	}

	return subset[n % 2][sum];
}


int main()
{
	int arr[] = { 6, 2, 5 };
	int sum = 7;
	int n = sizeof(arr) / sizeof(arr[0]);
	if (isSubsetSumFunc(arr, n, sum) == true)
		cout <<"exists a subset with given sum";
	else
		cout <<"No subset exists with given sum";
	return 0;
}


