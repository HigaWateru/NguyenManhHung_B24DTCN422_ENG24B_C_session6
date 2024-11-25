#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long n,a=1,b=1,sum;
int main(){
    scanf("%lld",&n);
    switch(n){
        case 2: printf("1 ");
        case 1:
            printf("1 ");
            break;
        default:
            printf("1 1 ");
            for(int i=3;i<=n;i++){
                sum=a+b;
                printf("%lld ",sum);
                a=b;
                b=sum;
            }
    }
}
