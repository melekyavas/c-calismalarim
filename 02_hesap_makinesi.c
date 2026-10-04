#include <stdio.h> // printf ve scanf fonksiyonları için gerekli kütüphane
#include <math.h> // pow(üs alma) fonksiyonu için gerekli kütüphane

int main() {
    float a,b; //kullanıcının gireceği iki ondalıklı sayı (float=ondalıklı sayı)
    scanf("%f",&a); //kullanıcıdan bir sayı al ve a'ya kaydet
    scanf("%f",&b); //kullanıcıdan bir sayı al ve b'ye kaydet

      //dört işlemin sonucunu virgülden sonra 2 basamakla yazdır
    printf("toplam:%.2f\n", a+b);
    printf("fark:%.2f\n", a-b);
    printf("carpim:%.2f\n",a*b);

    //b sıfırsa bölme yapma,çünkü sıfıra bölünce sonsuz (inf) çıkar
    if(b==0) { //b==0 b sıfır mı?
        printf("Hata:sifira bolunmez\n");
    } else{
        printf("bolum:%.2f\n",a/b);
    }

     // a sayısının b. kuvvetini hesapla (a üzeri b)
     // a negatif ve b 0 ile 1 arasında ise pow fonksiyonu hata verir
     if(a<0 && b>0 && b<1){
           printf("Hata: negatif sayinin kesirli kuvveti tanımsızdır\n");
     } else{
        printf("us:%.2f\n",pow(a,b)); // pow(a,b) a üzeri b demektir
     }
     // logaritma sadece pozitif sayılar için tanımlıdır
     if(a<=0) { // a sıfır veya negatif mi?
        printf("Hata: logaritma icin sayi sifirdan büyük olmalidir\n");
     } else { 
        printf("ln:%.2f\n", log(a)); // log(a) a sayının doğal logaritması demektir
        printf("log10:%.2f\n", log10(a)); // log10(a) a sayısının 10 tabanındaki logaritması demektir
     }
     
     // a'nın b tabanındaki logaritması; b pozitif ve 1'den farklı olmalıdır
     if(a>0 && b>0 && b!=1) { // a pozitif ve b pozitif ve 1'den farklı mı?
         printf("log_b(a):%.2f\n", log(a)/log(b)); // log_b(a) = log(a)/log(b)
     } else{
         printf("Hata: logaritma icin sayi sifirdan büyük ve tabanı 1'den farklı olmalıdır\n");
     }
     return 0; // program sorunsuz bitti (return=bitirmek)
}
