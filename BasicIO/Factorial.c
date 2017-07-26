#include <stdio.h>

int main()
{
    int no,fact=1;
    
    scanf("%d",&no);
    
    while(no>0){
        fact = fact * no;
        no--;
    }
    
    printf("%d",fact);
    
    return 0;
}
