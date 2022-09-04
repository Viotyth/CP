#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3;
    cin >> n;

    int p = 0;

    while(n--) {
        cin >> p1 >> p2 >> p3;
        if (p1 + p2 + p3 >= 2) p++;
    }

    cout << p << endl;
}
