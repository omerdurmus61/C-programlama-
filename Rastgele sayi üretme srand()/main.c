#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Program� her �al��t�rd���m�zda farkl� say� g�rmek istiyorsak srand() kullan�r�z.
    time.h k�t�phanesinde bulunur srand(time(NULL)) ile tan�mlan�r; */

    srand (time(NULL));

    int   rastgeleSayi = (50+rand()%1000);

    printf("%d",rastgeleSayi);


    /* (5*+rand()%1000); komutu rastgele gelen say�n�n minimum 50 maksimum 1000 olacak��n� mod alma ve toplama i�lemi ile yap�l�r
    b�ylece 0 gelse dahi 50 ile toplan�r minimum 50 olur 1200 gelirse 1000 ile b�l�m�nden kalan 200 ve 50 ile toplan�nca 250 say�s� olucak */

    return 0;
}
