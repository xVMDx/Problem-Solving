#include<iostream>

using namespace std;


int main() {
	string s;
	cin >> s;

	for (char& i : s)
	{
		i = i | 32;
		if (i == 'a' || i == 'o' || i == 'y' || i == 'e' || i == 'u' || i == 'i')
		{
			i = ' ';
		}
	}
	s.erase(remove(begin(s), end(s), ' '), end(s));



	for (char j : s)
	{
		cout << '.' << j;
	}

}