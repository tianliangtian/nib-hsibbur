#include <stdio.h>
int main(){
    int a,d;
    int cnt=0;
    int b=1;
    scanf("%d",&a);
    
    while(a>=b){
        b*=2;
        cnt++;
        
    }
    
        
    
    d=32-cnt;
    if(a<0){
        printf("%d\n",0);
        }else{
    printf("%d\n",d);
    }
    return 0;
}