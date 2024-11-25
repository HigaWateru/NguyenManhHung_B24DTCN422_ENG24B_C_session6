#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(int a){
    int sum=0,tg=a;
    while(tg>0){
        sum+=(tg%10)*(tg%10)*(tg%10);
        tg/=10;
    }
    if(sum==a)return 1;
    else return 0;
}
int main(){
    for(int i=100;i<=1000;i++)if(check(i))printf("%d ",i);
}
