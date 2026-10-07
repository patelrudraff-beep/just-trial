#include<stdio.h>
int main()
{
    int marks[2][4][4] = {{22,23}, {2,3,4,5}, {23,53,67,78}};


    for(int i=0 ; i<2; i++)
    {
        for(int j=0; j<4; j++){
            for(int k=0; k<4 ;k++)
            printf("the value of %d %d %d\n",i,j,k,marks[i][j][k]);
        scanf("%d", &marks[i][j][k]);
        }
         printf("\n");   }
         return 0;
}
 
        
    









