#include <iostream>
#include "writer.h"
namespace writer
{

void write(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i * n + j] << " " ;
		}
		std::cout << " " << std::endl;
	}
}

}
