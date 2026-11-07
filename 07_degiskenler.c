#include <stdio.h>
#include <stdlib.h>

// Değişkenler

int main ()
{
int sayi1=25;//Tam Sayı 4 Byte
float sayi2=17.3; // Kesirli Sayı . ile ayrılılır 4 byte
char sayi3='A'; // Karakterler 1 byte %c ile yazılır
double sayi4=48.5; /*Çok büyük veya çok küçük sayılar 8 byte gerekli olmadığı sürece kullanma %lf ile yazılır*/

printf (" Tam Sayı Degeri: %d \n" , sayi1 ); 
printf(" Kesirli Sayı Degeri: %f \n", sayi2); 
printf(" Karekter Degeri: %c \n", sayi3);
printf(" Sayi Degeri: %lf \n", sayi4);
    return 0;
}