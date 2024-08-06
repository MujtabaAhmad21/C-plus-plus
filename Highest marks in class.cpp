#include <iostream>
using namespace std;

int main() {

    cout << "What's your class size?  ";
    int marks, count = 1, classSize;
    int max1 = -1, max2 = -1, max3 = -1;
    cin >> classSize;

    while (count <= classSize) {
        cout << "Enter marks: " << endl;
        cin >> marks;

        if (marks > max1) {
            max3 = max2;
            max2 = max1;
            max1 = marks;
        }
        else if (marks > max2) {
            max3 = max2;
            max2 = marks;
        }
        else if (marks > max3) {
            max3 = marks;
        }
        count++;
    }

    cout << "First highest marks: " << max1 << endl;
    cout << "Second highest marks: " << max2 << endl;
    cout << "Third highest marks: " << max3 << endl;

    return 0;
}