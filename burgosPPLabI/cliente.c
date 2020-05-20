#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Burgos.h"

int initClientes(eCliente* clientes,int arrayLength){

    int i;

    for(i=0;i<arrayLength;i++)
    {
        clientes[i].clienteIsEmpty=1;
    }

    return 0;
}
