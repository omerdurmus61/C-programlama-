#include <stdio.h>
#include <stdlib.h>

void kareBul(int );

int main()
{
    int sayi;
    printf("karesi alinacak bir sayi giriniz.\n");
    scanf("%d",&sayi);

    kareBul(sayi);

    return 0;
}
/* Bir bilgi verelim genellikle void ile tan�mlanan fonksiyonlarda return ifadesi kullan�lmaz denir ancak sadece return ifadesi kullan�labilinir.E�er bir de�er d�nd�rmeden sadece return yaza�p komutun kullan�m� gere�i
 bir de ";" koyarsan�z program return ifadesini g�rd��� yerde sonlan�r */
void kareBul(int sayi)
{
    printf("sayinin karesi=%d",sayi*sayi);
    return ;
}
