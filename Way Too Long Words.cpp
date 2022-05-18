#include <iostream>
#include <string>
using namespace std;



int main() {

    string s;
    int t;
    cin >> t;
    for (size_t i = 0; i <= t; i++)
    {


        cin >> s;
        if (size(s) > 10)
            cout << s.front() << size(s) - 2 << s.back() << endl;
        else
            cout << s<<endl;
    }
}