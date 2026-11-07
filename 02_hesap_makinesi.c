#include <stdio.h> // printf ve scanf fonksiyonları için gerekli kütüphane
#include <math.h> // pow(üs alma) fonksiyonu için gerekli kütüphane

int main() {
    float a,b; //kullanıcının gireceği iki ondalıklı sayı (float=ondalıklı sayı)
    
    printf("Birinci sayiyi giriniz:"); // kullanıcıya birinci sayıyı girmesini söyle
     while(scanf("%f",&a) !=1) {
        printf("Hata: Lütfen sadece sayi giriniz!:\n"); // kullanıcı sayı yazmadıysa hata mesajı ver
        while(getchar()!='\n'); // hatalı girişi temizle ( kullanıcı sayı yerine harf veya sembol yazarsa sonsuz döngüye girmesin diye)
        printf("Birinci sayiyi giriniz:"); // kullanıcıya birinci sayıyı girmesini söyle
   }
    printf("İkinci sayiyi giriniz:"); // kullanıcıya ikinci sayıyı girmesini söyle
    while(scanf("%f",&b)!=1) { // kullanıcıdan bir sayı al ve b'ye kaydet
        printf("Hata: Lütfen sadece sayi giriniz!\n"); // kullanıcı sayı yazmadıysa hata mesajı ver
        while(getchar()!='\n'); // hatalı girişi temizle ( kullanıcı sayı yerine harf veya sembol yazarsa sonsuz döngüye girmesin diye)
        printf("İkinci sayiyi giriniz:"); // kullanıcıya ikinci sayıyı girmesini söyle
    }

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

     // b'nin a tabanındaki logaritması; a pozitif ve 1'den farklı olmalıdır
     if(b>0 && a>0 && a!=1)  { // b pozitif ve a pozitif ve a 1'den farklı mı?
        printf("log_a(b):%.2f\n", log(b)/log(a)); // log_a(b) = log(b)/log(a) 
        } else{
            printf("Hata: logaritma icin sayi sifirdan büyük ve tabanı 1'den farklı olmalıdır\n");
        }

    // a sayısının b sayısına bölümünden kalanı hesapla (mod alma)
     if(b==0) { // b sıfır mı?
        printf("Hata: sifira bolunmez!\n");
    } else{
        printf("mod:%.2f\n", fmod(a,b)); // fmod(a,b) a sayısının b sayısına bölümünden kalanı demektir
    }
    // a sayısının mutlak değerini hesapla
    printf("Birinci sayinin mutlak degeri:%.2f\n", fabs(a)); // fabs(a) a sayısının mutlak değeri demektir

    // b sayısının mutlak değerini hesapla
    printf("İkinci sayinin mutlak degeri:%.2f\n", fabs(b)); // fabs(b) b sayısının mutlak değeri demektir

    // a sayısının karekökünü hesapla
    if(a<0) { // a negatif mi;?
        printf("Hata: negatif bir sayinin karekoku tanımsızdır!\n");
    }else{
        printf("Birinci sayinin kakekoku:%.2f\n" , sqrt(a)); // sqrt(a) a sayısının karekökü demektir
    }

    // b sayısının karekökünü hesapla
    if(b<0) { // b negatif mi?
        printf("Hata: negatif bir sayının karekoku tanımsızdır!\n");
       } else{
        printf("İkinci sayinin kerkoku:%.2f\n" , sqrt(b)); // sqrt(b) b sayısının karekökü demektir
       }
      // a kuvvetinde b sayısının karekökünü hesapla
      if(a<0 && b>0 && b<1) { // a negatif ve b 0 ile 1 arasında mı?
        printf("Hata: negatif bir sayının kesirli kuvveti tanımsızdır!\n");
    } else {
        printf("Birinci sayinin %.2f. kuvvetinin karekökü:%.2f\n",b,sqrt(pow(a,b))) ;  // sqrt(pow(a,b)) a sayısının b kuvvetinin karekökü demektir 
    }

       // a sayıısnın yüzde b'sini hesapla
       printf("yuzde:%.2f\n", (a*b)/100); //a sayısının yüzde b'si=(a*b)/100
       if(b==0) { // b sıfır mı?
        printf("Hata: sifira bolunmez!\n");
    }else{
       printf("Yüzde:%.2f\n", (a/b)*100); // a sayısının b sayısına göre yüzde değeri=(a/b)*100
    }

       // a ve b sayılarının ortalamasını hesapla
       printf("Ortalama:%.2f\n",(a+b)/2); // a ve b sayılarının ortalaması=(a+b)/2

       // iki sayıyı karşılaştır
       if(a>b) { // a b'den büyük mü?
        printf("Birinci sayı ikinci sayıdan büyüktür\n"); 
    } else if (b>a) { // b a'dan büyük mü?
        printf("İkinci sayı birinci sayıdan büyüktür\n");
    } else { // İkisi de değilse eşittir
        printf("İki sayı eşittir\n");
    }
     // a sayısı tek mi çift mi?
     if ( fmod (a,2)==0) { // a sayısının 2'ye bölümünden kalan 0 mi?
        printf("Birinci sayı çifttir\n"); 
    } else {
        printf("Birinci sayı tektir\n");
    }

    // b sayisi tek mi çift mi?
    if ( fmod( b,2)==0) { // b sayısının 2'ye bölümünden kalan 0 mı?
        printf("İkinci sayı çifttir\n");
    }else {
     printf("İkinci sayı tektir\n");
    }
    
     return 0; // program sorunsuz bitti (return=bitirmek)
}
