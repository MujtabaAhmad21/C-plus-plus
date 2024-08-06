#include <iostream>
#include <cstring>
using namespace std;

void sortBoys(string[], int);

int main()
{
    string boys[3] = { "Usman", "Ali", "Abdullah" };
    sortBoys(boys, 3);

    for (int sum = 0; sum < 3; sum++)
        cout << boys[sum] << "\n";

    return 0;
}
void sortBoys(string boys[], int row)
{
    int x = 0, y = 0, z = 0, temp = 0;
    int sort[3];
    string code;

    for (int sum = 0; boys[0][sum] != '\0'; sum++)
    {
        x = x + boys[0][sum] * (sum + 1);
    }
    for (int sum = 0; boys[1][sum] != '\0'; sum++)
    {
        y = y + boys[1][sum] * (sum + 1);
    }
    for (int sum = 0; boys[2][sum] != '\0'; sum++)
    {
        z = z + boys[2][sum] * (sum + 1);
    }

    sort[0] = x;
    sort[1] = y;
    sort[2] = z;

    for (int sum = 0; sum < 3; sum++)
    {
        for (int j = 0; j < 2 - sum; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                code = boys[j];
                boys[j] = boys[j + 1];
                boys[j + 1] = code;

                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
}
