#include <iostream>
#include "writer.h"
#include "reader.h"
#include "func.h"

using namespace std;

using namespace writer;
using namespace reader;
using namespace func;

int main() {
	int n;
	bool f1 = false, f2 = false;
	cout << "Write n: ";
	cin >> n;
	int a[n][n];
	int b[n];
	read(reinterpret_cast<int *>(a), b, n);
	f1 = fl1(reinterpret_cast<int *>(a), n);
	f2 = fl2(reinterpret_cast<int *>(a), n);
	write(reinterpret_cast<int *>(a), n);
	if (f1 && f2)
		bubbleSort(reinterpret_cast<int *>(a), b, n);
	write(reinterpret_cast<int *>(a), n);	
		
	return 0;
}
