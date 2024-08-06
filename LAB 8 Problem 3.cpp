#include <iostream>
using namespace std;

int main()
{
    cout << "How many even numbers do you want to enter: ";
    int numofevenNums, evenNum, sum = 0;
    bool oddNum = false;
    cin >> numofevenNums;

    for (int i = 0; i < numofevenNums; i++)
    {
        cin >> evenNum;
        if (evenNum % 2 == 1)
        {
            oddNum = true;
            break;
        }
        if (evenNum % 4 == 0)
        {
            sum = sum;
        }
        else
        {
            sum += evenNum;
        }
    }
    if (oddNum == true)
    {
        cout << endl << "Odd number was encountered" << endl;
    }
    else
    {
        cout << "The sum of even integers is: " << sum << endl;
    }

    system("pause");
    return 0;
}