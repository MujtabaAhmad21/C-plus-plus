#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float milesTotal = 0;
    float milesAverage = 0;
    char runners[5][20] = {
        {"Jason"},
        {"Samantha"},
        {"Ravi"},
        {"Sheila"},
        {"Ankit"}
    };

    int milesRun[5][7];

    for (int i = 0; i < 5; i++)
    {
        cout << "Miles of " << runners[i] << "=" << endl;
        for (int x = 0; x < 7; x++)
        {
            cin >> milesRun[i][x];
        }
        cout << endl;
    }

    cout << "NAMES" << " MONDAY" << "  TUESDAY" << "  WEDNESDAY" << "  THURSDAY" << "  FRIDAY" << "  SATURDAY" << "  SUNDAY" << endl;

    for (int i = 0; i < 5; i++) {
        cout << runners[i];
        for (int x = 0; x < 7; x++) {
            cout << setw(7) << milesRun[i][x] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < 5; j++) {
        for (int z = 0; z < 7; z++) {
            milesTotal += milesRun[j][z];
        }
        cout << "Total miles of " << runners[j] << ":" << milesTotal << endl;
        milesAverage = milesTotal / 7;
        cout << "Average miles of " << runners[j] << ":" << milesAverage << endl;
        milesTotal = 0;
        milesAverage = 0;
    }
    return 0;
}