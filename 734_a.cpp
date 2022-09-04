#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0;
    int d = 0;

    char game;

    while(n--) {
        cin >> game;
        
        if (game == 'A') a++;
        else d++;
    }

    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

}
