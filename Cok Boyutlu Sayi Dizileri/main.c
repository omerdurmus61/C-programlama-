#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[2][2]={{4,6},{2,3}};
    //4 eleman�n� basmak i�in dizinin ilk eleman� 0.indistir.
    printf("%d\n",can[0][0]);
    //6 eleman�n� basmak i�in dizinin ilk eleman� 1.indistir.
    printf("%d\n",can[0][1]);

    printf("%d\n",can[1][0]);

    printf("%d\n",can[1][1]);
    return 0;
}
