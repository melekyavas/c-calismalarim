#include <stdio.h>
#include <stdlib.h>

/* Karar yapıları
Bölünebilme kuralları 15'e bölünebilme durumu sorgulayan programı yazın*/

int main () {
    int sayi1;

    printf("Lutfen bir tam sayi giriniz: \n");
    scanf("%d", &sayi1);

if (sayi1 %3==0 && sayi1 %5==0){
    printf("Girdiginiz sayi 15'e tam bolunur");
} else {
    printf("Girdiginiz sayi 15'e tam bolunmez");
}
return 0;
}