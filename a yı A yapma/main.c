#include <stdio.h>
#include <stdlib.h>

int main()
{   /* char ile bir de�i�ken tan�mlad���m�z zaman ona e�itledi�imiz karakteri o de�i�kene atamaz onun ASCI Kod tablosundaki say� kar��l���n� atar b�yle ��renmeliyiz.*/
    char kucukHarf = 'a';

    char buyukHarf = kucukHarf - 32 ;

    printf("buyuk harf = %c",buyukHarf);

    return 0;
}
