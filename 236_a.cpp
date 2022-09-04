#include <iostream>

using namespace std;

int main()
{
    char c;

    int alpha[26] = {};

    while(cin >> c) {
        alpha['z' - c] += 1;
    }

    int distinct = 0;

    for(int i = 0; i < 26; i++)
        if (alpha[i])
            distinct++;

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

}
