#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include <Windows.h>
using namespace std;
//1
/*int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
			s[i] = s[i] - 32;
	}
	cout << s;
	return 0;
}*/

//2
int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main() {
	setlocale(LC_ALL, "Russian");
	char s;
	int n, k = 1;
	string line, word, tword;
	ifstream in("hello.txt");
	set <string> st;
	set <string>::iterator st_iter;
	if (in.is_open())
	{
		in.get(s);
		in >> n;
		while (getline(in, line, ' '))
		{
			k = 1;
			while (line[line.length() - k] == '.' || line[line.length() - k] == ',' || line[line.length() - k] == '!' || line[line.length() - k] == '?' || line[line.length() - k] == '"' || line[line.length() - k] == ')' || line[line.length() - k] == '\n')
				k++;
			if (line[line.length() - k] == s)
			{
				word = line.substr(0, line.length() - k + 1);
				if (st.count(word) == 0)
				{
					if (st.size() < n)
						st.insert(word);
					else
						for (std::set<string>::iterator it = st.begin(); it != st.end(); ++it)
						{
							tword = *it;
							if (tword.length() < word.length())
							{
								st.erase(it);
								st.insert(word);
								break;
							}

						}
				}
			}
		}
	}
	in.close();

	n = st.size();
	int len[n];
	int i = 0;
	for (std::set<string>::iterator it = st.begin(); it != st.end(); ++it)
	{
		word = *it;
		len[i] = word.length();
		i++;
	}

	qsort(len, n, sizeof(int), comp1);

	std::ofstream out;
	out.open("bye.txt");
	if (out.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			for (std::set<string>::iterator it = st.begin(); it != st.end(); ++it)
			{
				word = *it;
				if (word.length() == len[i])
				{
					out << *it << ' ';
					st.erase(it);
					break;
				}
			}
		}
	}
	return 0;
}








