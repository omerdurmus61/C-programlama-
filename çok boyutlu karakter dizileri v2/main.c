#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100][100]={"bir",{'i','k','i','\0'},"uc","dort"};

    //dizinin 4.eleman�n�n 3.karakterini bast�ral�m.
    //karakter dizileri de indis �eklindedir.
    printf("Dizinin 4.elemani=%s\nBu elemanin 3.karakteri=%c",dizi[3],dizi[3][2]);

    return 0;
}
