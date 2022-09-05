#include <iostream>
 
using namespace std;
 
int main()
{
    int n, i;
    cin >> n;
 
    int o = 0, c = 0;
 
    while(n--) {
        cin >> i;
        if (i > 0)
            o += i;
        else
            if (o) o--;
            else c++;
    }
    
    cout << c << endl;
}
