#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i, j, rows;
    cout << "\n-------C++ Program with Commandline Arguments--------\n" << endl;
    rows = atoi(argv[1]);
    printf("Number of rows : %d\n",rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    system("Pause");
    return 0;
}
