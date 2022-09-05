#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;

    char last = 'a';
    int r = 0;

    for (char c : s) {
        r += min(abs(c - last), 26 - abs(c - last));
        last = c;
    }

    cout << r << endl;
}
