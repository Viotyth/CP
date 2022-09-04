#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

}
