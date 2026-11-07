#include <stdio.h>
#include <stdlib.h>
 // Kullanıcıdan bilgi alma (scanf();)

 int main ()
  {
    int muhammet;
    float eylul;
    char omar;
 
    printf("Lutfen Bir Karakter Giriniz: \n");
    scanf("%c" , &omar);
    printf("Girdiğiniz Deger: %c\n",omar);

    printf("Lutfen Bir Tam Sayi Giriniz: \n");
    scanf("%d" , &muhammet);
    printf("Girdiğiniz Deger: %d \n" , muhammet);

    printf("Lutfen Kesirli Bir Sayı Giriniz:\n");
    scanf("%f", &eylul);
    printf("Girdiginiz Deger: \n");

    return 0;
 }