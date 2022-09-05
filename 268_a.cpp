#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int games[n][2];

    for(int i = 0; i < n; i++) 
        cin >> games[i][0] >> games[i][1];
    
    int res = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (games[i][0] == games[j][1])
                res++;
        }
    }

    cout << res << endl;
}
