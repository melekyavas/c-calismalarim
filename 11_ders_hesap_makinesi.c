#include <stdio.h>
#include <stdlib.h>

/* Karar yapıları
Hesap makinesi seçenekler
1 Toplama
2 Çıkarma
3 Çarpma
4 Bölme*/

int main (){

    float sayi1, sayi2, sonuc=0;
    int islem;
    printf("Lutfen birinci tam sayıyı giriniz: \n");
    scanf("%f", &sayi2);
    printf("Lutfen ikinci tam sayıyı giriniz:\n");
    scanf("%f", &sayi2);

    printf("Toplama için 1\n");
    printf("Çıkarma için 2\n");
    printf("Çarpma için 3\n");
    printf("Bölme için 4\n");
    printf("Lutfen yapilacak islemi giriniz");
    scanf("%d", &islem);

    if (islem ==1) {
        sonuc= sayi1 + sayi2;
    } else if (islem==2){
        sonuc = sayi1 - sayi2;
    } else if (islem==3){
        sonuc = sayi1 * sayi2;
    } else if(islem==4) {
        sonuc= sayi1 / sayi2;
    }  else {
        printf("Hatali Islem Gırısı\n");
    }

    printf("Islem Sonucu: %f 'dir" , sonuc);
    return 0;
}