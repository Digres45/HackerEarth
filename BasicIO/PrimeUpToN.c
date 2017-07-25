#include <stdio.h>

int main()
{
    
    int no,i,f=0,n=3;
    scanf("%d",&no);
    
    printf("2 ");
    
    while(n<=no){
        
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                //printf("%d ",n);
                f=1;
                break;
            }
        }
        if(f==0){
            printf("%d ",n);
        }
        f=0;
        n++;
    }

    return 0;
}
