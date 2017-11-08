#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "\n\n-------C++ Program without Commandline Arguments--------\n\n";
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    system("Pause");
    return 0;
}
