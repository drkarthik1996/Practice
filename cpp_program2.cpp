#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    int rows;
    cout << "\n\n-------C++ Program with Commandline Arguments--------\n\n";
    rows = atoi(argv[1]);
    cout << "Number of rows: " << rows << endl;

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
