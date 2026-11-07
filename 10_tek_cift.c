#include <stdio.h>
#include <stdlib.h>

/*Karar yapıları
Kullanıcıdan alınan tam sayının çift ya da tek olduğunu ekrana yazdıran bir program yazınız */

int main(){
    int sayi; // Değişken tanımlama

    printf("Lutfen bir tam sayi giriniz: \n"); //Değişkenleri isteme
    scanf("%d" , &sayi); // sayıları kaydetme

    if(sayi%2==0) {// if(sayi%2==0 && sayi%==3) // karar yapısı

        printf("Girilen sayi çifttir"); 
    } else{
        printf("Girilen sayi tektir.");
    }
    return 0;
}