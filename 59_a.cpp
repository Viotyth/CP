#include <iostream>
 
using namespace std;
 
int main()
{
    int u = 0;
    int l =0;
 
    string input;
    cin >> input;
 
    for (int i = 0; i < input.length(); i++) {
        if (input[i] <= 'Z') {
            input[i] += 32;
            u++;
        }
        else l++;
    }
 
 
 
    if (u > l) 
    {
        for (int i = 0; i < input.length(); i++)
            input[i] -= 32;
    }
 
    cout << input << endl;
}
