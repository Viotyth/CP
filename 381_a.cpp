#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int cards[n];

    for(int i = 0; i < n; i++)
        cin >> cards[i];

    int res[2] = {};

    int i = 0, j = n - 1, turn = 0;

    while (i <= j) {
        if(cards[i] > cards[j])
            res[turn] += cards[i++];
        else
            res[turn] += cards[j--];

        turn = !turn;
    }

    cout << res[0] << " " << res[1];
}
