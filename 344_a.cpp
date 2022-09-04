#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n--;

    string last;
    cin >> last;

    string mag;

    int count = 1;

    while(n--) {
        cin >> mag;
        if (mag != last)
            count++;

        last = mag;
    }


    cout << count << endl;
}
