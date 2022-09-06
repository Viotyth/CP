#include <iostream>
#include <set>
 
using namespace std;
 

int main() {
    string line;
    getline(cin, line);

    set<char> s;

    for (int i = 1; i < line.length() - 1; i += 3) {
        s.insert(line[i]);
    }

    cout << s.size() << endl;
}
