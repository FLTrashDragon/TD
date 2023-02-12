#include <iostream>
#include "App.h"
#include <windows.h>
#include <thread>
using namespace std;

int main()
{
	int arr[] = {1,1,4,5,1,4,1,9,1,9,8,1,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int temp = 0; temp <= len - 1; temp++)
	{
		int arr1[] = { arr[temp] };
		thread th1();
		MP(arr);
		cout << arr[temp];
	}
	cout << endl;
	bubbleSort(arr,len);
	ArrPri(arr,len);
	system("pause");
}