#include <stdio.h>
#include <ctype.h>


   int main(){
   //Metnimizi 100 karakater ile sýnýrladýk.
   char metin[100];
   //Harf kaydýrýlma miktarýmýzý anahatar olarak tanýmladýk.
   int anahtar;
   int i; 
   //Kullanýcýdan metnimizi aldýk.
   printf("Metni giriniz:");
   gets(metin);
   
   //Kullanýcýdan kaydýrma miktarýmýzý aldýk.
   printf("Anahtar degerini giriniz:");
   scanf("%d",&anahtar);
   
    //for döngüsü ile kullanýcýdan aldýðýmýz kaydýrma miktarý kadar harf kaydýrdýk.
    for (i = 0; metin[i] != '\0'; ++i) {
    	//isalpha c fonksiyonumuz ile girilen karakterin harf olup olmadýðýný  kontrol ettik.
        if (isalpha(metin[i])) {
        	//isupper fonksiyonumuz ile girilen metinde büyük harf olup olmadýðýný kontrol ettik.
            if (isupper(metin[i])) {
            	//Alfabedeki harf sayýsý 26 olduðu için %26 olarak mod aldýk ve 0 dan 25'e kadar döngü içinde kaldý.
                metin[i] = ((metin[i] - 'A' + anahtar) % 26 + 26 ) % 26 +'a';
            } else {
            	//tolower fonksiyonumuz ile büyük harf var ise küçük harfe dönüþtürdük.
                metin[i] = ((tolower(metin[i]) - 'a' + anahtar) % 26+ 26) % 26 + 'a';
            }
        }
    }
    //Þifrelenmesini istedðimiz metni yazdýrdýk.
    printf("Sifrelenmis metniniz: %s",metin);
    
    
    
    
    
    
   
    
	return 0;
}




