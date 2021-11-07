#include <stdio.h>

int main(void)
{
    int n, m, x;

    printf("Enter the number of rows: ");

    scanf("%d", &n);

    printf("Enter the number of columns: ");

    scanf("%d", &m);

    int a[n][m];

    srand(time(NULL));

    for(int i=0; i<n; ++i)
       {
           for(int l=0; l<m; ++l)
           {
                a[i][l]=rand()%10;

                printf("%d ", a[i][l]);
           }

           printf("\n");
       }

    printf("Enter the number 'x' that you want to search for: ");

    scanf("%d",&x);

    for(int i=0; i<n; ++i)

        for(int l=0; l<m; ++l)

                if(x==a[i][l])
                {
                   printf("This number exists");

                    return 0;
                }

    printf("This number Does not exist");
}
