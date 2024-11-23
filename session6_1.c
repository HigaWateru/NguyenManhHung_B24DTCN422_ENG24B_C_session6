#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a,s;
int main()
{
  for(int i=1;i<=5;i++){
    scanf("%lld",&a);
    if(a%2==1)s+=a;
  }
  printf("%lld",s);
}
