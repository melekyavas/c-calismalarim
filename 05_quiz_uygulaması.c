#include<stdio.h> // printf ve scanf fonksiyonları için gerekli kütüphane 
#include<ctype.h> // toupper ve tolower fonksiyonları için gerekli kütüphane
#include<string.h> // metinlerle çalışırken kullanılır

int main() {
    printf("Adınızı ve soyadınızı giriniz. \n");

    char isim[50]; // kullanıcı 50 harflik bir isim girebilir
    fgets(isim, 50, stdin); // En fazla 50 karakteri, klavyeden oku ve isim kutusuna koy
    isim[strcspn (isim, "\n")] ='\0' ;
    printf("Merhaba %s\n", isim); 

    printf("Hangi dilde çalışmak istersiniz? \n");
    printf ("A)İngilizce-Türkçe \n");
    printf("B) Almanca-Türkçe \n");
    
    char secim;
    while (1) { // şart doğru olduğu sürece burası tekrar tekrar çalışır
if (secim == 'A'|| secim =='B') {
    break; // doğru cevap geldi, döngüden çık
}
    }
    return 0; // program sorunsuz bitti
}





