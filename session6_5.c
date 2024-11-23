#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long long mins,cuocDT;
int main()
{
    printf("Nhap so phut su dung");
    scanf("%lld",&mins);
    if(mins<=50)cuocDT=mins*600;
    else if(mins>50&&mins<=150)cuocDT=(mins-50)*400+30000;
    else if(mins>150&&mins<=200)cuocDT=(mins-150)*200+70000;
    else cuocDT=(mins-200)*100+80000;
    printf("Cuoc dien thoai trong thang nay: %lld",cuocDT+25000);
}