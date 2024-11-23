#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int day, month,sumDay;
int main(){
    printf("Hay nhap ngay thang sinh cua ban ");
    scanf("%d%d",&day,&month);
    switch(month){
      case 12: sumDay+=30;
      case 11: sumDay+=31;
      case 10: sumDay+=30;
      case 9: sumDay+=31;
      case 8: sumDay+=31;
      case 7: sumDay+=30;
      case 6: sumDay+=31;
      case 5: sumDay+=30;
      case 4: sumDay+=31;
      case 3: sumDay+=29;
      case 2: sumDay+=31;
      case 1: 
        sumDay+=0;
        break;
      default:
        printf("Du lieu nhap vap khong hop le");
        return 0;
    }
    sumDay+=day;
    //printf("%d\n", sumDay);
    if(sumDay>=81&&sumDay<=111)printf("Ban la cung bach duong");
    else if(sumDay>=112&&sumDay<=141)printf("Ban la cung kim nguu");
    else if(sumDay>=142&&sumDay<=173)printf("Ban la cung song tu");
    else if(sumDay>=174&&sumDay<=204)printf("Ban la cung cu giai");
    else if(sumDay>=205&&sumDay<=235)printf("Ban la cung su tu");
    else if(sumDay>=236&&sumDay<=266)printf("Ban la cung xu nu");
    else if(sumDay>=267&&sumDay<=297)printf("Ban la cung thien binh");
    else if(sumDay>=298&&sumDay<=327)printf("Ban la cung bo cap");
    else if(sumDay>=328&&sumDay<=356)printf("Ban la cung nhan ma");
    else if((sumDay>=357&&sumDay<=366)||sumDay<=19)printf("Ban la cung ma ket");
    else if(sumDay>=20&&sumDay<=49)printf("Ban la cung bao binh");
    else printf("Ban la cung song ngu");
    
}