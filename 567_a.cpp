#include <iostream>
 
using namespace std;
 

int main() {
    int n;
    cin >> n;

    int xs[n];

    for(int i = 0; i < n; i++) {
        cin >> xs[i];
    }

    cout <<  abs(xs[0] - xs[1]) << " " << abs(xs[0] - xs[n-1]) << endl;

    int x1, x2, x3, x4;

    for (int i = 1; i < n - 1; i++) {
        x1 = abs(xs[i] - xs[i-1]);
        x2 = abs(xs[i] - xs[i+1]);   

        x3 = abs(xs[i] - xs[0]);
        x4 = abs(xs[i] - xs[n-1]);

        cout << min(x1, x2) << " " << max(x3, x4) << endl;
    }
        
    cout <<  abs(xs[n-1] - xs[n-2]) << " " << abs(xs[0] - xs[n-1]) << endl;
}
