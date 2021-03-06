#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename arr_type>
void quickSort(arr_type arr[], int start, int end)
{
	arr_type target = arr[end], temp;
	int i = start, j = end;
	while (i <= j)
	{
		while (arr[i] < target)
		{
			++i;
		}
		while (arr[j] > target)
		{
			--j;
		}
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			++i;
			--j;
		}
	}
	if (start < j)
	{
		quickSort(arr, start, j);
	}
	if (i < end)
	{
		quickSort(arr, i, end);
	}
}
template<typename t>
void print(t arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[10] = { 7, 8, 4, 1, 3, 9, 11, -2, 0, 6};
	print(arr, 10);
	quickSort(arr, 0, 9);
	print(arr, 10);
	return 0;
}