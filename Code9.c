#include<stdio.h>
unsigned int maxRepeating(unsigned int* a, int n)
{
	
	for (int i = 0; i< n; i++)
		arr[arr[i]%n] += n;

	
	int max = arr[0], result = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			result = i;
		}
	}

	
	return result;
}


int main()
{
	int arr[] = {5,1,3,3,4,3,7,7};
	printf("%d",maxRepeating(arr,8));

	return 0;
}

