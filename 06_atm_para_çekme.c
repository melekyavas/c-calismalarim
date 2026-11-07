#include <stdio.h> // printf ve scanf fonksiyonları için gerekli kütüphane

int main() // Program burada başlar

{ 
    int bakiye =1000 ; // Başlangıç bakiyesi 
    int secim =-1; // Kullanıcının menüden seçtiği sayı
    int miktar; // Çekilecek veya yatırılacak para miktarı

    while (secim !=0){ // Kullanıcının seçtiği değer 0 değilse ;

    printf(" ===ATM=== \n");
    printf(" 1. Bakiye Sorgula \n");
    printf(" 2. Para Çek \n");
    printf(" 3. Para Yatır \n");
    printf(" 0. Çıkış \n");
    printf(" Seçiminiz: ");
   if (scanf(" %d", &secim) !=1); // %d: Tam sayı okur, &secim: Sayıyı secim değişkenine yazdır
{ 
    printf("Geçersiz Giriş!\n");
 int c;
 while (( c= getchar ()) != '\n' && c != EOF);
 secim = -1;
 continue;
}
    if (secim == 1) // Seçim 1 ise
{
    printf(" Bakiyeniz: %d \n", bakiye);
    }
    else if (secim ==2){
    printf("Çekmek istediğiniz miktar: ");
    scanf("%d" , &miktar);
    if ( miktar<=0){
        printf("Geçersiz miktar!\n");
    } else if (miktar > bakiye){
        printf("Yetersiz Bakiye! \n");
    } else {
        bakiye = bakiye - miktar;
        printf("Para Çekildi.\n");
        printf("Yeni Bakiyeniz: %d\n" , bakiye);
    }
     }else if (secim ==3) { // Kullanıcı 3. seçeneği seçerse 
        printf("Ne kadar para yatırmak istersiniz? \n");
        scanf( "%d", &miktar);
        if(miktar <=0) 
        {
            printf("Geçersiz miktar! \n");
        }
            else{
                bakiye = bakiye + miktar;
                printf("Yeni Bakiyeniz: %d \n", bakiye);

            }
        }
     else if (secim == 0){
      printf("Çıkış Yapılıyor. \n" );
     }
    else  {
        printf("Geçersiz \n");
    }
    }
    return 0; // İşlem başarıyla bitti
}