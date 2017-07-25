#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
   char str[SIZE];
   char str2[SIZE];
   int len=0,i,j=0;
   scanf("%s",&str);
   
   while( str[len]!='\0' ){
       len++;
       
   }
   
   while(len>=0){
       len--;
       str2[j] = str[len];
       j++;
   }
   
   
   if(strcmp(str,str2)){
       printf("NO");
   }
   else{
       printf("YES");
   }
    return 0;
}
