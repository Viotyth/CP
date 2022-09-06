#include <iostream>
 
using namespace std;
 

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int g = n / k;
    if (n % k)
        g++;

    int o1 = 0;
    int o2 = d;

    for (int i = 0; i < g; i++) {
        if (o1 <= o2) o1 += t;
        else o2 += t;
    }

    cout << (max(o1, o2) < g * t ? "YES" : "NO") << endl;
}
