#include <stdio.h>
#include <ctype.h>


   int main(){
   //Metnimizi 100 karakater ile s�n�rlad�k.
   char metin[100];
   //Harf kayd�r�lma miktar�m�z� anahatar olarak tan�mlad�k.
   int anahtar;
   int i; 
   //Kullan�c�dan metnimizi ald�k.
   printf("Metni giriniz:");
   gets(metin);
   
   //Kullan�c�dan kayd�rma miktar�m�z� ald�k.
   printf("Anahtar degerini giriniz:");
   scanf("%d",&anahtar);
   
    //for d�ng�s� ile kullan�c�dan ald���m�z kayd�rma miktar� kadar harf kayd�rd�k.
    for (i = 0; metin[i] != '\0'; ++i) {
    	//isalpha c fonksiyonumuz ile girilen karakterin harf olup olmad���n�  kontrol ettik.
        if (isalpha(metin[i])) {
        	//isupper fonksiyonumuz ile girilen metinde b�y�k harf olup olmad���n� kontrol ettik.
            if (isupper(metin[i])) {
            	//Alfabedeki harf say�s� 26 oldu�u i�in %26 olarak mod ald�k ve 0 dan 25'e kadar d�ng� i�inde kald�.
                metin[i] = ((metin[i] - 'A' + anahtar) % 26 + 26 ) % 26 +'a';
            } else {
            	//tolower fonksiyonumuz ile b�y�k harf var ise k���k harfe d�n��t�rd�k.
                metin[i] = ((tolower(metin[i]) - 'a' + anahtar) % 26+ 26) % 26 + 'a';
            }
        }
    }
    //�ifrelenmesini isted�imiz metni yazd�rd�k.
    printf("Sifrelenmis metniniz: %s",metin);
    
    
    
    
    
    
   
    
	return 0;
}




