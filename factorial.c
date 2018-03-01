#include<stdio.h>

void main(){
    int num, fac = 1;
    printf("enter the numbers;");
    scanf("%d", &num);
    for(int i = 2; i <= num; i++){
        fac *= i;
    }
    printf("%d", fac);
}
