#include <iostream>
using namespace std;
const int maxsize = 1000;
 
void cinlong(int *mas, int &len) 
{
    string s;
    cin >> s;
    for(int i=0;i<maxsize;++i)
        mas[i] = 0;
 
    len=s.length();
    for(int i=0;i<len;i++)
        mas[len - i] = int(s[i]) - 48;
}
 
void coutlong(int *mas) 
{
    int i = maxsize;
    while(mas[i] == 0 && i > 1) i--;
 
    for(int j=i;j>=1;j--)
        cout << mas[j];
}

int main()
{
    int a[maxsize], b[maxsize] , n[maxsize], m[maxsize*2], len_a, len_b, len;
 
 	for(int i=0;i<maxsize;++i)
 		{
        n[i] = 0;
        m[i] = 0;
    	}
    cout <<"a"<< endl;	
    cinlong(a,len_a);
    cout <<"b"<< endl;
    cinlong(b,len_b);
    

    int c = 0;
    for(int i=1;i<maxsize;++i) 
        c = c + a[i] + b[i],
        n[i] = c % 10,
        c /= 10;

	for (int i = 1; i < len_a + 1; i++)
	    for (int j = 1; j < len_b + 1; j++)
	        m[i + j - 1] += a[i] * b[j];
	        
	len = len_a + len_b + 1; 
	for (int i = 1; i < len; i++)
		{
	    	m[i + 1] +=  m[i] / 10;
	    	m[i] %= 10;
		}
	cout <<"Sum"<< endl;	
    coutlong(n);
    cout << endl <<"Mul"<< endl;
    coutlong(m);
}