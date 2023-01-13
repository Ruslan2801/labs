#include <iostream>
#include <math.h>
#include "func.h"
namespace func
{
	void bubbleSort(int list[], int list2[], int n2)
	{
		int k = n2;
		
		while(n2--)
		{
			bool swapped = false;
			
			for(int i = 0; i < n2; i++)
			{
				if(list2[i] > list2[i + 1])
				{
					std::swap(list2[i], list2[i + 1]);
					for(int j = 0; j < k; j++)
					{
						std::swap(list[i*k+j], list[(i + 1)*k+j]);
					}
					swapped = true;
				}
			}
			
			if(swapped == false)
				break;
		}
	}
	
	bool fl1(int a[], int n)
	{
		bool f1 = false;
		int count;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				count = 0;
				for (int k = 0; k < n; k++)
					if (a[k * n + i] == a[k * n + j])
						count++;
				if (count == n)
				{
					f1 = true;
					break;
				}
			}
		if (f1)
			break;
		}
		return f1;	
	}
	
	bool fl2(int a[], int n)
	{
		bool f2 = false, f3 = false;
		int abs_a;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				abs_a = abs(a[i * n + j]);
				f3 = false;
				for (int k = 2; k < sqrt(abs_a) + 1; k++)
					if (abs_a % k == 0 && abs_a != k)
					{
						f3 = true;
						break;
					}
				if (!f3 && abs_a != 1)
				{
					f2 = true;
					break;
				}
			if (f2)
				break;
			}
		}
		return f2;	
	}
}
