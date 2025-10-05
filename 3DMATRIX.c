#include<stdio.h>
int main()
{
    int i,j,k,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,m;
    char choice0,choice1, choice2, choice3;
    printf("\nEnter the no. of rows of default matrix: ");
    scanf("%d",&n1);
    printf("Enter the no. of columns of default matrix: ");
    scanf("%d",&n2);
    printf("Enter the no. of layers of default matrix: ");
    scanf("%d",&n3);
    int arr[n1][n2][n3];
    printf("\n");
    for (i=0;i<n1;i++)
    {
        for (j=0;j<n2;j++)
        {
            for (k=0;k<n3;k++)
            {
                printf("Enter element [%d][%d][%d]: ",i+1,j+1,k+1);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\nDo you want to perform any operation on the matrix: ");
    scanf(" %c",&choice0);
    if (choice0=='Y'|| choice0=='y')
    {
    printf("\nDo you want to add a matrix (Y/N) : ");
    scanf(" %c",&choice1);
    if (choice1== 'Y' || choice1== 'y' )
    {
        printf("\nEnter the no. of rows of addition matrix: ");
        scanf("%d",&n4);
        printf("Enter the no. of columns of addition matrix: ");
        scanf("%d",&n5);
        printf("Enter the no. of layers of addition matrix: ");
        scanf("%d",&n6);
        if (n4!=n1||n5!=n2||n6!=n3)
        {
            printf("\nInvalid: Dimensions Not Match\n");
        }
        else {
        int add[n4][n5][n6];
        printf("\n");
        for (i=0;i<n4;i++)
        {
            for (j=0;j<n5;j++)
            {
               for (k=0;k<n6;k++)
               {
                   printf("Enter element [%d][%d][%d]: ",i+1,j+1,k+1);
                   scanf("%d",&add[i][j][k]);
               }
            }
        }
        int sum[n1][n2][n3];
        for (i=0; i<n1; i++)
        {
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    sum[i][j][k]=arr[i][j][k]+add[i][j][k];
                }
            }
        }
        printf("\nThe Sum Matrix is: \n\n");
        for (i=0;i<n1;i++)
        {
            printf("Layer %d:\n",i+1);
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    printf("%d\t",sum[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}
    else if (choice1!='Y'&& choice1!='y'&& choice1!='N'&& choice1!='n')
    {
        printf("Invalid Input");
    }
    printf("\nDo you want to substract a matrix (Y/N): ");
    scanf(" %c",&choice2);
    if (choice2== 'Y'|| choice2=='y')
    {
        printf("\nEnter the no. of rows of difference matrix: ");
        scanf("%d",&n7);
        printf("Enter the no. of columns of difference matrix: ");
        scanf("%d",&n8);
        printf("Enter the no. of layers of difference matrix: ");
        scanf("%d",&n9);
        int sub[n7][n8][n9];
        if (n7!=n1 || n8!=n2 || n9!=n3)
        {
            printf("\nInvalid: Dimensions Not Match\n");
        }
        else 
        {
        printf("\n");
        for (i=0;i<n7;i++)
        {
            for (j=0;j<n8;j++)
            {
                for (k=0;k<n9;k++)
                {
                    printf("Enter element [%d][%d][%d]: ",i+1,j+1,k+1);
                    scanf("%d",&sub[i][j][k]);
                }
            }
        }
        int diff[n1][n2][n3];
        for (i=0;i<n1;i++)
        {
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    diff[i][j][k]=arr[i][j][k]-sub[i][j][k];
                }
            }
        }
        printf("\nThe Subtraction Matrix is: \n\n");
        for (i=0;i<n1;i++)
        {
            printf("LAYER %d:\n",i+1);
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    printf("%d\t",diff[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    }
    else if (choice2!='Y'&& choice2!='y'&& choice2!='N'&& choice2!='n')
    {
        printf("Invalid Input");
    }

    printf("\nDo you want to multiply (Y/N): ");
    scanf(" %c",&choice3);
    if (choice3=='Y'||choice3=='y')
    {
        printf("\nEnter the multiplying factor: ");
        scanf("%d",&m);
        int product[n1][n2][n3];
        for (i=0;i<n1;i++)
        {
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    product[i][j][k]=m*arr[i][j][k];
                }
            }
        }
        printf("\nThe Product Matrix is: \n\n");
        for (i=0;i<n1;i++)
        {
            printf("LAYER %d:\n",i+1);
            for (j=0;j<n2;j++)
            {
                for (k=0;k<n3;k++)
                {
                    printf("%d\t",product[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    else if (choice3!='Y' && choice3!='y'&& choice3!='N'&&choice3!='n')
    {
        printf("Invalid Input");
    }
    }
else 
{
    printf("\nThe Default Matrix is: \n\n");
    for (i=0;i<n1;i++)
    {
        printf("LAYER %d: \n",i+1);
        for (j=0;j<n2;j++)
        {
            for (k=0;k<n3;k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
printf("\nThank You\n");
  return 0;
}