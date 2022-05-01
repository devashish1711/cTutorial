//write a program containing function which counts the number of positive integers on an array

#include <stdio.h>

int countPositiveNumbers(int* arr, int n)
{
	int pos_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			pos_count++;
	}
	return pos_count;
}
int countNegativeNumbers(int* arr, int n)
{
	int neg_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg_count++;
	}
	return neg_count;
}


int main()
{
	int arr[] = {1,-2,3,-4,5,-6,7,-8,9,-10};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
    printf("\n");

	printf("Count of Positive elements = %d\n",
		countPositiveNumbers(arr, n));
	printf("Count of Negative elements = %d\n",
		countNegativeNumbers(arr, n));

	return 0;
}
