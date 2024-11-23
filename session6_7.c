#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int month,year;
int main(){
    printf("Nhap lan luot so nam va so thang");
    scanf("%d%d",&year,&month);
    if((year%4==0&&year%100!=0)||year%400==0)year=1;
    else year=0;
    switch(month){
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        month=31;
        break;
      case 4: case 6: case 9: case 11:
        month=30;
        break;
      case 2:
        if(year)month=29;
        else month=28;
        break;
      default:
        printf("Du lieu nhap vao hong hop le");
        return 0;
    }
    if(year)year=366;
    else year=365;
    printf("So ngay trong thang la %d ngay\nSo ngay trong nam la %d ngay",month,year);
}