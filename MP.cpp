#include"App.h"
void MP(int FN[])
{
	int arrc = sizeof(FN) / sizeof(FN[0]);
	int l = 0;
	for (int i = 0; i <= arrc - 1; i++)
	{	
		for (int l = 0; l < arrc - 1 - i; l++)
		{
			int temp = FN[l];
			int temp2 = FN[l + 1];
			if (temp >= temp2)
			{
				l++;
			}
			else
			{
				FN[l] = temp2;
				FN[l + 1] = temp;
				l++;
			}
		}
	}
		
}