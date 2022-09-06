#include <iostream>
#include <set>
 
using namespace std;
 

int main() {
    long long n, x, q, r = 0;
    cin >> n >> x;

    char c;
    while(n--) {
        cin >> c >> q;

        if (c == '+') x += q;
        else {
            if (x >= q) x -= q;
            else r++;
        }

    }

    cout << x << " " << r;
}
