#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1. seviye
    int sayi=23;

    {
        //2.seviye
        int sayi=43;
        printf("sayi degiskeni=%d\n",sayi);
    }

    printf("sayi degiskeni =%d\n",sayi);


    /* Bir de�i�kene eri�mek istendi�inde ilk �nce bulunan kod blo�unun i�ine bak�l�r orada yoksa �st seviyeye bak�l�r. */

    // �rnek

    {   /* bu kod blogu i�ersinde sayi degiskeni olmad��� i�in bir �st sevieye bakar.*/
        printf("sayi degiskeni= %d",sayi);
    }


    /* Bir kod blokunda tan�mlanm�� bir de�i�kene sadece o kod blokunda ve daha i�teki  kod bloklar�ndan eri�ilebilri. ?*/


    return 0;
}
