#include <iostream>

using namespace std;

int main()
{
    int input;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> input;

            if (input) {
                cout << abs(3 - i) + abs(3 - j);
                break;
            }
        }
    }
}
