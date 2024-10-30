#include<stdio.h>

int main(void)
{
	short array1[5]; // uninitialized array, added user data as a value to the array in next step.
	short i = 0;
	short swapped;
	short aux = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter value #%i:", i+1);
		scanf_s("%hd", &array1[i]);
	}

	do
	{
		swapped = 0;

		for (i = 0; i < 4; i++)
		{
			if (array1[i] > array1[i + 1])
			{
				aux = array1[i + 1];
				array1[i + 1] = array1[i];
				array1[i] = aux;
				swapped = 1;
			}
		}
	} while (swapped);

	puts("Sorted array is:");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", array1[i]);
	}
	return 0;
}