#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100][100]={"bir",{'i','k','i','\0'},"uc","dort"};

    //dizinin 4.elemanının 3.karakterini bastıralım.
    //karakter dizileri de indis şeklindedir.
    printf("Dizinin 4.elemani=%s\nBu elemanin 3.karakteri=%c",dizi[3],dizi[3][2]);

    return 0;
}
