#include <stdio.h>
#include <stdlib.h>

int main()
{   /* Bu k�s�mda sayi1 degiskeni float olmas�na ragmen 7 ve 3 int oldu�u i�in sonu� 2.33 sayisinin int k�sm� olan 2 olur sayi1 2 ye e�itlenir */
    float sayi1 = 7/3;
    /* tip d�n���m� yapmadan �nce sonu� hesaplan�yor ve sayi2 de�iskenine atan�yor bu y�den sayi2 de�iskeni 2 ye e�itleniyor.*/
    float sayi2 = (float)(7/3);
    /* tip d�n���m� operat�r� b�lme operat�r�nden �nceliklidir bu y�zden �nce 3 sayisi float tipine d�n���r
    ve 7 sayisi int olarak kal�r sonra iki say�n�n b�l�nebilmesi i�in 7 sayisida floata d�n��t�r�l�r ve b�lme i�lemi yap�l�r sonu� yani sayi3 de�i�keni float olur*/
    float sayi3 = 7/(float)3;
    /* tip d�n���m� operat�r� b�lme operat�r�nden �nceliklidir bu y�zden yukar�daki �rnek ile ayn�d�r.*/
    float sayi4 = (float)7/3;
    /*Burada i�i garantiye al�p iki sayi de�erinide �nceden float yap�p i�leme sokuyoruz*/
    float sayi5 = (float)7/(float)3;

    printf("%f\n",sayi1);
    printf("%f\n",sayi2);
    printf("%f\n",sayi3);
    printf("%f\n",sayi4);
    printf("%f\n",sayi5);




    double d1 = 5.3;
    double d2 = 5.4;
    double d3 = 5.5;

    //�nce toplay�p sonra tip de�i�tirme i�lemi yap�yoruz.

    int toplam1 = (int)(d1+d2+d3); // sonu� 16.2 fakat int oldu�u i�in 16 yaz�cak

    //�nce tip de�i�tirme i�lemi yap�p sonra topluyoruz.

    int toplam2 = (int)d1+(int)d2+(int)d3;  // dobule de�i�kenlerinin k�s�ratlar� at�l�p toplanacak toplam 15


        printf("%d\n",toplam1);
        printf("%d\n",toplam2);

    return 0;
}
