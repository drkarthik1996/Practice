#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, rows;
    cout << "\n\n-------C Program without Commandline Arguments--------\n\n";
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    //rows = 9;
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
