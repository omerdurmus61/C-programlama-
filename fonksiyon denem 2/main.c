#include <stdio.h>
#include <stdlib.h>

// fonksiyon imzas� kullan�m�.

 int ortalama(int deger1,int deger2);

 /*fonksiyon imzas�n� kullanmadan sadece mainin alt�nda fonksiyonu tan�mlarsak

 eski derleycilerde hata alabiliriz ayn� de�i�kenlerde oldu�u gibi. De�i�keni kullanmadan �nce tan�mlamak gerekir,fonksiyonda da

 bir imza gerekli fakat bu imza sat�r� olmadan da g�n�m�z derleycilerinde �al���r*/

int main()
{
   int sayi1=10,sayi2=2;

    printf("(%d+%d)/%d=%d",sayi1,sayi2,2,ortalama(sayi1,sayi2));

    return 0;
}

int ortalama(int deger1,int deger2)
{
    return (deger1+deger2)/2;
}
