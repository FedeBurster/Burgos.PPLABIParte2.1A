#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarTipos(eTipo* tipos)
{
    int i;


    printf("\n| Tipos  |   ID\n\n");
    for(i=0;i<5;i++)
    {
        printf("| %s |  %d\n",tipos[i].tipoDescripcion,tipos[i].tipoId);

    }
    printf("\n");

    return 0;
}
