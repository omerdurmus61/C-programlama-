#include <stdio.h>
#include <stdlib.h>

int main()
{   char kelime[20];
printf("ismizini giriniz\n");
// BU KULLANIM YANLI�TIR
// scanf("%s",&kelime);

//BU KULLLANIM DO�RUDUR

scanf("%s",kelime);
printf("Merhaba %s",kelime);

/* B�R D�Z� �SM� O D�Z�N�N �LK ELEMANININ BELLEK ADES�N� TEMS�L
 EDER BU Y�ZDEN & ��ARET� KULLANMAYA GEREK YOKTUR
    */
    return 0;
}
