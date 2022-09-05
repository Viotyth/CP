#include <iostream>
 
using namespace std;
 
int main()
{
    int a[4]; 
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    string s;
    cin >> s;

    int r = 0;

    for (int i = 0; i < s.size(); i++)
        r += a[s[i] - '0' - 1];

    cout << r << endl;

}
