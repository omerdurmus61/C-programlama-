#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        \n = alt sat�ra ge�er
        \r = sat�r ba�� yapar
        \t = yatay tab yapar ,4 bo�luk b�rak�r
        \v = dikey tab yapar
        \b = imleci sbir sola kayd�r�r
        %% = % i�aretini bast�r�r
        \" = " i�aretini bast�r�r
        \' = ' i�aretini bast�r�r
        \\ = \ i�aretini bast�r�r
        */

        printf("a \n b \n");
        printf("a \r b \n");
        printf("a \t b \n");
        printf("a \v b \n");
        printf("a \b b \n");
        printf(" %% \n");
        printf(" \" \n ");
        printf(" \' \n");
        printf(" \\ \n");


    return 0;
}
