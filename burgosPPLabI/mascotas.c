#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include <string.h>
#include "Burgos.h"

int initMascotas(eMascota* mascotas,int arrayLength){

    int i;

    for(i=0;i<arrayLength;i++)
    {
        mascotas[i].mascotaIsEmpty=1;
    }

    return 0;
}


int altaMascota(eMascota* mascotas,int arrayLength,int* banderaId,int* banderaAlta,eTipo* tipos,eColor* colores)
{
    int i,auxInt;
    char auxString[50];
    system("cls");

    for(i=0;i<arrayLength;i++)
    {
        if(mascotas[i].mascotaIsEmpty==1)
        {
            printf("Alta mascota\n\nIngrese el nombre de la mascota: ");
            scanf("%s",mascotas[i].mascotaNombre);
            fflush(stdin);
            if(esSoloLetras(mascotas[i].mascotaNombre)==0)
            {
                printf("\nError, solo se aceptan caracteres alfabeticos para el campo nombre.\n\n");
                system("pause");
                return -1;
            }
            printf("\n\n1)Ave\n2)Gato\n3)Perro\n4)Pez\n5)Roedor\n\nIngrese el tipo de su mascota: ");
            scanf("%d", &auxInt);
            fflush(stdin);
            switch(auxInt)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    mascotas[i].mascotaIdTipo=auxInt;
                    printf("\n\n1)Negro\n2)Blanco\n3)Gris\n4)Rojo\n5)Azul\n\nIngrese el color de su mascota: ");
                    scanf("%d", &auxInt);
                    fflush(stdin);
                    switch(auxInt)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                            mascotas[i].mascotaIdColor=auxInt;
                            printf("\nIngrese la edad de su mascota: ");
                            scanf("%s",auxString);
                            if(validarStringInt(auxString)==0)
                            {
                                printf("\n\nError, los datos ingresados no corresponden al campo edad.\n\n");
                                system("pause");
                                return -1;
                            }
                            mascotas[i].mascotaEdad=atoi(auxString);
                            mascotas[i].mascotaId=*banderaId;
                            *banderaId=*banderaId+1;
                            *banderaAlta=*banderaAlta+1;
                            mascotas[i].mascotaIsEmpty=0;
                            printf("\nSe le asigno el ID %d.\n",mascotas[i].mascotaId);
                            printf("\n\nSe ha completado el alta con exito.\n");
                            system("pause");
                            return 0;

                        default:
                            printf("\n\nHa ocurrido un error durante el ingreso de los datos\nPor favor volver a intentar.\n");
                            system("pause");
                            return -1;
                    }
                default:
                    printf("\n\nHa ocurrido un error durante el ingreso de los datos\nPor favor volver a intentar.\n");
                    system("pause");
                    return -1;
            }
        }
    }
    return -1;
}
int modificarMascota(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores,int* banderaAlta)
{
    char auxString[20];
    int auxInt,i;

    if(*banderaAlta<1)
    {
        printf("\nPara modificar los datos primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }

    printf("\nIngrese el ID de la mascota que desea modificar: ");
    scanf("%s",auxString);
    fflush(stdin);
    if(validarStringInt(auxString)==0)
    {
        printf("\n\nError, los datos ingresados no corresponden al ID.\n\n");
        system("pause");
        return -1;
    }
    auxInt=atoi(auxString);
    for(i=0;i<arrayLength;i++)
    {
        if(auxInt==mascotas[i].mascotaId && mascotas[i].mascotaIsEmpty==0)
        {

            printf("\n\n1)Modificar tipo\n2)Modificar edad\n\nIngrese la opcion segun el campo que desea modificar: ");
            scanf("%s",auxString);
            if(validarStringInt(auxString)==0)
            {
                printf("\n\nError.\n\n");
                system("pause");
                return -1;
            }
            auxInt=atoi(auxString);
            switch(auxInt)
            {
                case 1:
                    printf("\n\n1)Ave\n2)Gato\n3)Perro\n4)Pez\n5)Roedor\n\nIngrese el nuevo tipo de su mascota: ");
                    scanf("%d", &auxInt);
                    fflush(stdin);
                    switch(auxInt)
                    {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                            mascotas[i].mascotaIdTipo=auxInt;
                            printf("\nEl tipo fue modificado con exito.\n");
                            system("pause");
                            return 0;
                        default:
                            printf("\n\nHa ocurrido un error durante el ingreso de los datos\nPor favor volver a intentar.\n");
                            system("pause");
                            return -1;
                    }
                    break;
                case 2:
                    printf("\nIngrese la nueva edad de su mascota: ");
                    scanf("%s",auxString);
                    if(validarStringInt(auxString)==0)
                    {
                        printf("\n\nError, los datos ingresados no corresponden al campo edad.\n\n");
                        system("pause");
                        return -1;
                    }
                    mascotas[i].mascotaEdad=atoi(auxString);
                    printf("\nLa edad fue modificada con exito.\n");
                    system("pause");
                    return 0;
                default:
                    printf("\nHa ocurrido un error.\n");
                    system("pause");
                    return -1;
            }

        }
    }
    return -1;
}

int bajaMascota(eMascota* mascotas,int arrayLength,int* banderaAlta)
{
    char auxString[20];
    int auxInt,i;

    if(*banderaAlta<1)
    {
        printf("\nPara dar de baja primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }
    printf("\n\nIngrese el ID de la mascota que desea dar de baja: ");
    scanf("%s",auxString);
    fflush(stdin);
    if(validarStringInt(auxString)==0)
    {
        printf("\n\nError, los datos ingresados no corresponden al ID.\n\n");
        system("pause");
        return -1;
    }
    auxInt=atoi(auxString);
    for(i=0;i<arrayLength;i++)
    {
        if(auxInt==mascotas[i].mascotaId && mascotas[i].mascotaIsEmpty==0)
        {
            mascotas[i].mascotaIsEmpty=1;
            *banderaAlta=*banderaAlta+1;
            printf("\nLa baja se ha completado con exito.\n");
            system("pause");
            return 0;
        }
    }
    return -1;
}

int listarMascotas(eMascota* mascotas,int arrayLength,eTipo* tipos,eColor* colores,int* banderaAlta,eCliente* clientes)
{
    int c, d,i,j;
    eMascota auxMascota;

    if(*banderaAlta<1)
    {
        printf("\nPara listar primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }

    for (c = 0 ; c < arrayLength - 1; c++)
    {
        for (d = 0 ; d < arrayLength - c - 1; d++)
        {
            if (mascotas[d].mascotaIdTipo > mascotas[d+1].mascotaIdTipo) /* For decreasing order use < */
            {
                auxMascota = mascotas[d];
                mascotas[d]   = mascotas[d+1];
                mascotas[d+1] = auxMascota;
            }
            if(mascotas[d].mascotaIdTipo == mascotas[d+1].mascotaIdTipo)
            {
                if(mascotas[d].mascotaNombre[0] > mascotas[d+1].mascotaNombre[0])
                {
                    auxMascota = mascotas[d];
                    mascotas[d]   = mascotas[d+1];
                    mascotas[d+1] = auxMascota;
                }
            }
        }
    }
    system("cls");
    printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {
                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId)
                {
                    if(mascotas[i].mascotaIdTipo==1000)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("%d |Negro | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("%d |Blanco| Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("%d |Gris  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("%d |Rojo  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("%d |Azul  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                    if(mascotas[i].mascotaIdTipo==1001)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("%d |Negro | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("%d |Blanco| Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("%d |Gris  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("%d |Rojo  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("%d |Azul  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                    if(mascotas[i].mascotaIdTipo==1002)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("%d |Negro |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("%d |Blanco|Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("%d |Gris  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("%d |Rojo  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("%d |Azul  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                    if(mascotas[i].mascotaIdTipo==1003)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("%d |Negro | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("%d |Blanco| Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("%d |Gris  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("%d |Rojo  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("%d |Azul  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                    if(mascotas[i].mascotaIdTipo==1004)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("%d |Negro |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("%d |Blanco|Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("%d |Gris  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("%d |Rojo  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("%d |Azul  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                }
            }

    }
    return 0;
}


