#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    char c;

    for (int i = 0; i < n; i++) {
        c = 97 + (i % k);
        cout << c;
    }
}
