#include <iostream>
#include <algorithm>

using namespace std;
 
int main()
{
    int i, j;
    cin >> i >> j;
    int c = 7 - max(i, j);
    int gcd = __gcd(c, 6);

    cout  << c / gcd << "/" << 6 /gcd << endl;
}
