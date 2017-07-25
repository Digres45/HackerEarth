#include <stdio.h>

int main()
{
    
    int no,i,f=0,n=3;
    scanf("%d",&no);
    if(no>=2){
       printf("2 "); 
    }

    while(n<=no){
        
        for(i=3;i<=n/2;i++){
            if(n%i==0){
                f=1;
                break;
            }
        }
        if(f==0){
            printf("%d ",n);
        }
        f=0;
        n+=2;
    }

    return 0;
}
