#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a,odd,even;
int main()
{
  for(int i=1;i<=5;i++){
    scanf("%lld",&a);
    if(a%2==1)odd++;
    else even++;
  }
  printf("So luong so le: %lld\nSo luong so chan: %lld",odd,even);
}
