#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamSayi=1254;
    //tamSayi de�i�keninin bellek adresi isaretci adl� pointera atand�.
    int *isaretci=&tamSayi;

    printf("tamSayi degiskeninin bellekteki adresi %p ",isaretci);
    // %p ile pointer yazd�r�ld�.
    return
}
