#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter any number to print its table from 0 to 50: ";
    cin >> num;

    cout << "Using goto loop:" << endl;
    int i = 1;
goto_start:
    if (i <= 50)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
        goto goto_start;
    }

    cout << "Using for loop:" << endl;
    for (i = 1; i <= 50; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    cout << "Using while loop:" << endl;
    i = 1;
    while (i <= 50)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    cout << "Using do-while loop:" << endl;
    i = 1;
    do
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 50);

    return 0;
}
