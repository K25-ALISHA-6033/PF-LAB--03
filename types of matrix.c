#include <stdio.h>

int main()
{
    int mat[5][5];
    int r, c, i, j;
    int zero = 1, identity = 1, diagonal = 1;
    int upper = 1, lower = 1, symmetric = 1;
    int det = 0;

    printf("Enter rows and columns (max 5): ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(r==c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");
    if(r==1)
        printf("Row Matrix\n");

    if(c==1)
        printf("Column Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]!=0)
                zero=0;
        }
    }
    if(zero)
        printf("Zero / Null Matrix\n");
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i!=j && mat[i][j]!=0)
                    diagonal=0;

                if(i>j && mat[i][j]!=0)
                    upper=0;

                if(i<j && mat[i][j]!=0)
                    lower=0;

                if(mat[i][j]!=mat[j][i])
                    symmetric=0;
            }
        }

        if(diagonal)
            printf("Diagonal Matrix\n");

        if(upper)
            printf("Upper Triangular Matrix\n");

        if(lower)
            printf("Lower Triangular Matrix\n");

        if(symmetric)
            printf("Symmetric Matrix\n");

        // Ide
        identity=1;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0))
                    identity=0;
            }
        }
        if(identity)
            printf("Identity Matrix\n");
    }

    return 0;
}
