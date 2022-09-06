#include <iostream>
#include <set>
 
using namespace std;
 

int main() {
    int n;
    cin >> n;
    string word;
    while (n--) {
        cin >> word;
        if (word.size() > 10)
            cout << word[0] << word.size() - 2 << word[word.size() - 1];
        else cout << word;

        cout << endl;
    }
}
