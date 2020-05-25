#include <stdio.h>
#include <stdlib.h>

/* Ufak bir yorum yapal�m iki say�y� s�ralamam�z isteniyor.E�er bu iki say�n�n tam k�s�mlar� farkl� ise �rne�in 1.5 ile 2.5
    sadece tam k�s�mlara bakarak k�yaslama yapabiliriz noktadan sonras� gerekmez bellekten de tasaruf edilmi� olur (int ile double farkl� boyutta yer tutar).Fakat 2.54 ile 2.34 gibi tam k�s�mlar� hatta noktadan sonrak� baz� haneleri de
    ayn� olan say�lar� k�yaslarken double ya da float gibi veri tiplerine ihtiya� duyar�z. */
void tamMin(int,int);
void tamMax(int ,int );
void doubleMin(double ,double );
void doubleMax(double,double );


int main()
{
    int tamSayi1,tamSayi2;
    double ondalikSayi1,ondalikSayi2;
    printf("iki adet tam sayi giriniz.\n");
    scanf("%d%d",&tamSayi1,&tamSayi2);
    printf("iki adet ondalikli sayi giriniz.\n");
    scanf("%lf%lf",&ondalikSayi1,&ondalikSayi2);

    tamMax(tamSayi1,tamSayi2);
    tamMin(tamSayi1,tamSayi2);
    doubleMax(ondalikSayi1,ondalikSayi2);
    doubleMin(ondalikSayi1,ondalikSayi2);


    return 0;
}

void tamMin(int sayi1,int sayi2)
{
    if(sayi1<sayi2)
        printf("kucuk tamsayi=%d\n",sayi1);
    else
        printf("kucuk tamsayi=%d\n",sayi2);
}

void tamMax(int sayi1,int sayi2)
{
    if(sayi1<sayi2)
        printf("buyuk tamsayi=%d\n",sayi2);
    else
        printf("buyuk tamsayi=%d\n",sayi1);
}


void doubleMax(double sayi1 ,double sayi2)
{
    if(sayi1<sayi2)
        printf("buyuk ondalik sayi =%lf\n",sayi2);
    else
        printf("buyuk ondalik sayi =%lf\n",sayi1);
}

void doubleMin(double sayi1,double sayi2)
{
    if(sayi1<sayi2)
        printf("kucuk ondalik sayi =%lf\n",sayi1);
    else
        printf("kucuk ondalik sayi =%lf\n",sayi2);
}
