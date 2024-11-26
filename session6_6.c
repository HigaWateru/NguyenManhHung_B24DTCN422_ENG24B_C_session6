#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0)printf("Fizz ");
        else if(i%5==0)printf("Buzz ");
        else if(i%15==0)printf("FizzBuzz ");
        else printf("%d ",i);
    }
}
