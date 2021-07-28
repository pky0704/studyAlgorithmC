/*
    * 막대 그래프 그리기
    a[0]=4|****   
    a[1]=5|*****  
    a[2]=6|****** 
    a[3]=7|*******

    * : 아스터리스크
    
*/
#include <stdio.h>
int main()
{
    int a[] ={4,5,6,7};
    int i, j;

    for(j=0; j<4; j++){
        printf("a[%d]=%d|",j,a[j]);
        for(i=1; i<=a[j]; i++)
            printf("*");
        printf("\n");            
    }
}
