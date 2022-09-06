#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p, m, pe;

    int c;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        if (c == 1) p.push_back(i);
        else if (c == 2) m.push_back(i);
        else pe.push_back(i);
    }

    int max_t = min(p.size(), min(pe.size(), m.size()));

    cout << max_t << endl;

    for (int i = 0; i < max_t; i++)
    {
        cout << p[i] << " " <<  m[i] << " " << pe[i] << " " << endl;
    }
}
