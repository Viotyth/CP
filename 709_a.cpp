#include <iostream>
 
using namespace std;
 
int main() {
   int n, b, d, s, c = 0, r = 0;

   cin >> n >> b >> d;

   while (n--) {
       cin >> s;

       if (s <= b)
           c += s;

       if (c > d) {
           r++;
           c = 0;
       }

   }

   cout << r << endl;
}
