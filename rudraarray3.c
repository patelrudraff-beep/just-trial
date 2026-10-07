#include<stdio.h>
int main()
{
    int marks[2][4] = {{22,23,21,20} ,
                      {3,2,4,5}};
    
    for(int i = 0;i< 2;i++ )
    {
        for(int j = 0; j <4; j++){

        printf("enter the value of %d %d element of the array\n",i,j, marks[i][j]);
        scanf("%d", &marks[i]);
        }
    }
}
 