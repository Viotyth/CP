#include <iostream>
 
using namespace std;
 
int main()
{
    int n, count = 0;
    cin >> n;

    string stones;
    cin >> stones;

    for(int i = 1; i < n; i++)
        if (stones[i] == stones[i-1])
            count++;

    cout << count << endl; 
}
