#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main()
{
    int color;

    unordered_set<int> unique;
    while(cin >> color)
        unique.insert(color);

    cout << 4 - unique.size() << endl;
            
}
