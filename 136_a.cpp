#include <iostream>
 
using namespace std;
 
 
int main() {
    int n, k;
    cin >> n;
 
    int g[n + 1];
 
    for (int i = 1; i <= n; i++) {
       cin >> k; 
       g[k] = i;
    }
 
    for (int i = 1; i <= n; i++)
        cout << g[i] << " ";
}
