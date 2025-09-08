#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int cub[5][5][5];
int i, j, k;
for(i = 0; i < 5; i++)
for(j = 0; j < 5; j++)
for(k = 0; k < 5; k++)
   {
        for(j = 0; j < 5; j++)
        cub[i][j][k] = 0;
        if ( i == j && i == k)
           cub[i][j][k] = 1;
        else
           cub[i][j][k] = 0;
   }
   
   for(i = 0; i < 5; i++)
      for(j = 0; j < 5; j++)
         for(k = 0; k < 5; k++)
             printf("cub[%d][%d][%d] = %d\n", i, j, k, cub[i][j][k]);   
   
   
   return 0;

}
