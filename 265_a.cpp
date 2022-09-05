#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main()
{   
    string s, i;
    cin >> s >> i;
 
    int position = 1;
   
    for (char c: i) {
        if (s[position - 1] == c)
            position++;
    }
 
    cout << position << endl;
}
