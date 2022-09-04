#include <iostream>

using namespace std;

int main()
{
    int number_of_students, fence_height, student_height;
    cin >> number_of_students >> fence_height;

    int road_width = 0;

    while(number_of_students--) {
        cin >> student_height;

        if (student_height > fence_height)
            road_width += 2;
        else
            road_width++;
    }

    cout << road_width << endl;
}
