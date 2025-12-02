#include <stdio.h>

int main()
{
    int num,total;
    int sum=0;
    do{
        
         scanf("%d",&num);
        sum=sum+num;
        
        
        if(num==0){
            total=sum;
        }
        
        
       
        
        
    }while(num!=0);
    printf("%d",total);
   

    return 0;
}