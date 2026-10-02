#include <stdio.h>

int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);

    printf("toplam:%.2f\n", a+b);
    printf("fark:%.2f\n", a-b);
    printf("carpim:%.2f\n",a*b);
    printf("bolum:%.2f\n",a/b);
    return 0;
}