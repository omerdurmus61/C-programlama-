#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi = 897.123456789;
    // %f virg�lden sonra 6 haneyi g�sterir.
    printf("sayinin normal gosterimi = %f\n",sayi);
    // Virg�lden sonra istenilen kadar basamak g�stemek i�in kesinlik belirteci kullan�l�r.
    printf("vilgulden sonra 2 basamakli gosterimi = %.2f\n ",sayi);
    printf("vilgulden sonra 4 basamakli gosterimi = %.4f\n ",sayi);
    printf("vilgulden sonra 5 basamakli gosterimi = %.5f\n ",sayi);
    printf("vilgulden sonra 8 basamakli gosterimi = %.8f\n ",sayi);
    printf("vilgulden sonra 10 basamakli gosterimi = %.10f\n ",sayi);

    return 0;
}
