#include <stdio.h>
int main()
{int m,n,f,c,i,j,k;
float A[100][100],B[100][100],C[100][100];
printf("\n---------------------------------------------------\n");
printf("\nEnter the row and column of the first matrix\n");
scanf("%d",&m);
scanf("%d",&n);
printf("\n---------------------------------------------------\n");
printf("\nEnter the row and column of the second matrix\n");
scanf("%d",&f);
scanf("%d",&c);
printf("\n");
if (n==f)
{printf("\n---------------------------------------------------\n");
printf("Enter the value of the first matrix\n\n");
//INGRESE LAS MATRICES
for (i=1;i<=m;i++)
 for (j=1;j<=n;j++)
{ printf("A(%d,%d)= ",i,j);
   scanf ("%f",&A[i][j]);
}
 
printf("\n");
printf("\n---------------------------------------------------\n");
printf("\nEnter the value of the second matrix\n\n");
  for (i=1;i<=f;i++)
   for (j=1;j<=c;j++)
    { printf("B(%d,%d)= ",i,j);
      scanf ("%f",&B[i][j]);
    }
//OPERACION DE MULTIPLICACION
 for (i=1;i<=m;i++)
    {for (j=1;j<=c;j++)
       { C[i][j]=0;
         for (k=1;k<=n;k++)
          {C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
    }
 printf("\n---------------------------------------------------\n");
 printf("\nThe matrix multiplication is :\n\n");
//IMPRESION
  for (i=1;i<=m;i++)
   for (j=1;j<=c;j++)
    { printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    }
}
else
{printf("\n_______________\n");
printf("This matrices cannot be multiplied\n");
printf("becuase the number of columns in the\n");
printf("matrix A is different from the number of rows\n");
printf("from matrix B, !Try again!   \n");
}
getchar(); getchar();
}
