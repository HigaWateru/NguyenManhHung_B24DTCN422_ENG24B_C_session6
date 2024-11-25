#include <stdio.h>
#include <math.h>
double tien,lai;
int month;
int main() {
    printf("Tien gui ban dau: ");
    scanf("%lf",&tien);
    printf("Lai suat: ");
    scanf("%lf",&lai);
    printf("So thang gui: ");
    scanf("%d",&month);
    printf("Tien lai: %.3f\nTien nhan duoc: %.3f\n",tien*pow((1+lai/100),month)-tien,tien*pow((1+lai/100),month));
}
