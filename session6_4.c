#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long long a,b,c,delta;
double x,x1,x2;
int main(){
  scanf("%lld%lld%lld",&a,&b,&c);
  if(a==0)printf("Du lieu nhap vao khong phai phuong trinh bac 2");
  else{
    delta=b*b-4*a*c;
    x=(double)-b/(2*a);
    x1=(double)(-b+sqrt(delta))/(2*a);
    x2=(double)(-b-sqrt(delta))/(2*a);
    if(delta<0)printf("Phuong trinh vo nghiem");
    else if(delta == 0)printf("Phuong trinh co nghiem kep x = %.2lf",x);
    else printf("Phuong trinh co 2 nghiem:\n x1 = %.2f\n x2 = %.2f",x1,x2);
  }
}
