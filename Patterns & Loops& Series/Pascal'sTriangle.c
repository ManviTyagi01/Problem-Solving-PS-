#include <stdio.h>
int main()
{
  int A[50][51] = {0, 1, 0}, I, J, K, N;
  printf("Enter The Rows You Want In Pascal's Triangle : ");
  scanf("%d", &N);
  for (I = 1; I < N; I++)
  {
    for (J = 1; J < N + 1; J++)
    {
      A[I][J] = A[I - 1][J - 1] + A[I - 1][J];
    }
  }

  for (I = 0; I < N; I++)
  {
    for (K = N; K > I; K--)
    {
      printf(" ");
    }
    for (J = 0; J < N + 1; J++)
    {
      if (A[I][J] != 0)
      {
        printf("%d ", A[I][J]);
      }
    }
    printf("\n");
  }
  return 0;
}