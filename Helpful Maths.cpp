#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main() {
	string s;
	cin >> s ;	
	//s.erase(remove(begin(s), end(s), '+'), end(s));
	sort(begin(s), end(s));
	for (size_t i = 0; i < s.size(); i++)
	{
		cout << s[i];
		if (s.size() == 1)
			return 0;
		if (!(i==s.size()-1)) {
			cout << '+';
		}
	}
}