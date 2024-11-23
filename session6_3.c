#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char password[]="1a2b3c4d5e";
  char check[30];
  printf("Nhap mat khau: ");
  scanf("%s",check);
  for(int i=0;i<strlen(check);i++){
    if(check[i]!=password[i]){
      printf("Mat khau khong hop le!");
      return 0;
    }
  }
  printf("Mat khau hop le!");
}
