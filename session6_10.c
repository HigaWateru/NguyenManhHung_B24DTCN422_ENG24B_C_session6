#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int snt(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
long long n;
int main(){
    scanf("%lld",&n);
    if(snt(n))printf("%lld la so nguyen to",n);
    else printf("%lld khong phai la so nguyen to",n);
}
