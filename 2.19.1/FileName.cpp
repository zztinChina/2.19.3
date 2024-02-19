#include<stdio.h>
#include<limits.h>
int main()
{
	double count = 0;
	int i = 0;
	int arr[5];
	int max = INT_MIN;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
		count += arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	double av = count / 5.0;
	printf("%f", av);
	return 0;
}