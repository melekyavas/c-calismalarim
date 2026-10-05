#include <stdio.h> // printf ve scanf fonksiyonları için gerekli kütüphane 

int main() {
    int a; // kullanıcının gireceği bir tam sayı (int=tam sayı)

printf("Sınıf mevcudunu giriniz:"); // kullanıcıya sınıf mevcudunu girmesini söyle

 scanf("%d",&a); // kullanıcıdan bir sayı al ve a'ya kaydet
 printf("Girdiğiniz sayi:%d \n",a); // kullanıcıya girdiği sayıyı yazdır

 char isim[100]; // kullanıcıdan gelen isim için dizi

 printf("Öğrencinin ismini giriniz:"); // kullanıcıya bir isim girmesini söyle

 scanf("%s",isim); // kullanıcıdan bir isim al ve isim dizisine kaydet
 printf("Öğrencinin isimi:%s \n",isim); // kullanıcının girdiği ismi yazdır

 char soyisim[100]; // kullanıcıdan gelen soyisim için dizi
 printf("Öğrencinin soyismini giriniz:"); // kullanıcıya bir soyisim girmesini söyle

 scanf("%s", soyisim); // kullanıcıdan bir soyisim al ve soyisim dizisine kaydet
 printf("Öğrencinin soyismi:%s \n", soyisim); // kullanıcının girdiği soyismi yazdır
 

 int ders_notları[3]; // ders notları için dizi
 
 printf("3 adet ders notu giriniz:"); // kullanıcıya 3 adet ders notu girmesini söyle

 int i; // döngü için sayaç değişkeni
 int toplam=0; // notların toplamı (başlangıçta 0 olmalı!)

 for(i=0;i<3;i++) { // 0'dan 2'ye kadar döngü
    scanf("%d", &ders_notları[i]); // kullanıcıdan bir sayı al ve ders_notları dizisine kaydet
    toplam= toplam+ ders_notları[i]; // girilen notu toplama ekle ( toplam+= ders_notalrı[i]; şeklinde de yazılabilir)
 }

 printf("Notların toplamı: %d \n", toplam); // toplamı yazdır
 float ortalama = toplam/3.0; // ortalama= toplamı 3.0'a böl (3.0 float olduğu için sonuç float olur)
 printf("Notların ortalaması:%.2f \n", ortalama); // ortalamayı yazdır 

    return 0;
}