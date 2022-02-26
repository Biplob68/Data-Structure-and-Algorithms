// program to remove duplicates in an sorted array
#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(int arr[], int n)
{
	if (n==0 || n==1) return n;

	int temp[n];
	int j = 0;
	for (int i=0; i<n-1; i++){

		// If current element is not equal to next element
		// then store that current element
		if (arr[i] != arr[i+1]){
			temp[j++] = arr[i];
		}
	}

	// Store the last element as whether
	// it is unique or repeated, it hasn't
	// stored previously
	temp[j++] = arr[n-1];

	// Modify original array
	for (int i=0; i<j; i++){
		arr[i] = temp[i];
	}

	return j;
}


int main()
{
	int arr[] = {1, 2,2,2, 3,3,3,3, 4, 4, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	n = removeDuplicates(arr, n);
	// Print updated array
	for (int i=0; i<n; i++){
	     cout << arr[i] << " ";
	}
	printf("\n");

	return 0;
}
