#include "App.h"	
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int f = 0;f < len - 1 - i;f++)
		{
			if (arr[f] > arr[f + 1])
			{
				int temp = arr[f];
				arr[f] = arr[f + 1];
				arr[f + 1] = temp;
			}

		}
	}
}