#include <stdio.h>

int main()
{
    int l,n,w,h,i;
    scanf("%d%d",&l,&n);
    
    for(i=0 ; i<n ; i++){
        
        scanf("%d%d",&w,&h);
        
        if(w==h && w>=l){
                printf("ACCEPTED\n");
            }
            
        else if(w<l || h<l){
            printf("UPLOAD ANOTHER\n");
        }
        else{
            printf("CROP IT\n");
        }
    }
        
    return 0;
}
