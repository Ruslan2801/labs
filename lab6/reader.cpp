#include <iostream>
#include <math.h>
#include "reader.h"
namespace reader
{
	void read(int a[], int b[], int n)
	{
		int sum;
		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < n; j++)
			{
				std::cout << "Write a[" << i << "," << j << "]: ";
				std::cin >> a[i * n + j];
				sum += abs(a[i * n + j]);
			}
			b[i] = sum;
		}	
	}
}
