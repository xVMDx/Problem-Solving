#include<iostream>

using namespace std;


int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (char& i : s1)
	{

		i = i | 32;
	}
	for (char& j : s2)
	{
		j = j | 32;
	}
	cout << s1 << endl << s2 << endl;


	if (s1 > s2 && size(s1) >= size(s2)) {

		cout << 1;
	}
	else if (s1 < s2 && size(s1) <= size(s2)) {
		cout << "-1";
	}
	else
	{
		cout << 0;
	}

}