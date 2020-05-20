#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Burgos.h"

int mostrarMascotaColor(eMascota* mascotas,int arrayLength,int *banderaAlta,eCliente* clientes,eColor*colores)
{
    int i,auxInt,j;

    if(*banderaAlta<1)
    {
        printf("\nPara modificar los datos primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }
    system("cls");
    printf("Mostrar mascotas por color");
    listarColores(colores);
    printf("\nIngrese el color: ");
    scanf("%d", &auxInt);
    fflush(stdin);
    switch(auxInt)
    {
        case 5000:
        case 5001:
        case 5002:
        case 5003:
        case 5004:
            printf("\n\nID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
            for(i=0;i<arrayLength;i++)
            {
                    for(j=0;j<10;j++)
                    {
                        if(mascotas[i].mascotaIdCliente==clientes[j].clienteId)
                        {
                            if(auxInt==5000 && mascotas[i].mascotaIdColor==auxInt)
                            {
                                if(mascotas[i].mascotaIdTipo==1000)
                                    printf("%d |Negro | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1001)
                                    printf("%d |Negro | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1002)
                                    printf("%d |Negro |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1003)
                                    printf("%d |Negro | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1004)
                                    printf("%d |Negro |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                            }
                            if(auxInt==5001 && mascotas[i].mascotaIdColor==auxInt)
                            {
                                if(mascotas[i].mascotaIdTipo==1000)
                                    printf("%d |Blanco| Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1001)
                                    printf("%d |Blanco| Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1002)
                                    printf("%d |Blanco|Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1003)
                                    printf("%d |Blanco| Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1004)
                                    printf("%d |Blanco|Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                            }
                            if(auxInt==5002 && mascotas[i].mascotaIdColor==auxInt)
                            {
                                if(mascotas[i].mascotaIdTipo==1000)
                                    printf("%d |Gris  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1001)
                                    printf("%d |Gris  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1002)
                                    printf("%d |Gris  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1003)
                                    printf("%d |Gris  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdColor==1004)
                                    printf("%d |Gris  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);

                            }
                            if(auxInt==5003 && mascotas[i].mascotaIdColor==auxInt)
                            {
                                if(mascotas[i].mascotaIdTipo==1000)
                                    printf("%d |Rojo  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1001)
                                    printf("%d |Rojo  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1002)
                                    printf("%d |Rojo  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1003)
                                    printf("%d |Rojo  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1004)
                                    printf("%d |Rojo  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                            }
                            if(auxInt==5004 && mascotas[i].mascotaIdColor==auxInt)
                            {
                                if(mascotas[i].mascotaIdTipo==1000)
                                    printf("%d |Azul  | Ave  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1001)
                                    printf("%d |Azul  | Gato |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1002)
                                    printf("%d |Azul  |Perro |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1003)
                                    printf("%d |Azul  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                                if(mascotas[i].mascotaIdTipo==1004)
                                    printf("%d |Azul  |Roedor|%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                            }
                        }
                    }
            }
            system("pause");
            return 0;
        default:
            printf("\n\nHa ocurrido un error durante el ingreso de los datos\nPor favor volver a intentar.\n");
            system("pause");
            return -1;
    }
    return 0;
}

int mostrarMascotaTipo(eMascota* mascotas,int arrayLength,int *banderaAlta,eCliente* clientes,eTipo*tipos)
{
    int i,auxInt,j;

    if(*banderaAlta<1)
    {
        printf("\nPara modificar los datos primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }
    system("cls");
    printf("Mostrar mascotas por tipo");
    listarTipos(tipos);
    printf("\n\n\nIngrese el Tipo: ");
    scanf("%d", &auxInt);
    fflush(stdin);
    switch(auxInt)
    {
        case 1000:
        case 1001:
        case 1002:
        case 1003:
        case 1004:
            printf("\n\nID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
            for(i=0;i<arrayLength;i++)
            {
                    for(j=0;j<10;j++)
                    {
                        if(mascotas[i].mascotaIdCliente==clientes[j].clienteId)
                        {
                            if(auxInt==1000 && mascotas[i].mascotaIdTipo==auxInt)
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
                            if(auxInt==1001 && mascotas[i].mascotaIdTipo==auxInt)
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
                            if(auxInt==1002 && mascotas[i].mascotaIdTipo==auxInt)
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
                            if(auxInt==1003 && mascotas[i].mascotaIdTipo==auxInt)
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
                            if(auxInt==1004 && mascotas[i].mascotaIdTipo==auxInt)
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
            system("pause");
            return 0;
        default:
            printf("\n\nHa ocurrido un error durante el ingreso de los datos\nPor favor volver a intentar.\n");
            system("pause");
            return -1;
    }
    return 0;
}

int mostrarMascotaMenor(eMascota* mascotas,int arrayLength,int *banderaAlta,eCliente* clientes)
{
    int banderaMenor=9999,i,primera=0,j;

    if(*banderaAlta<1)
    {
        printf("\nPara listar primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }


    for(i=0;i<arrayLength;i++)
    {
        if(primera==0 && mascotas[i].mascotaIsEmpty==0)
        {
            banderaMenor=mascotas[i].mascotaEdad;
            primera++;
        }
        if(banderaMenor>mascotas[i].mascotaEdad && mascotas[i].mascotaIsEmpty==0)
        {
            banderaMenor=mascotas[i].mascotaEdad;
        }
    }
    system("cls");
    printf("Mascotas menores: \n\n");
    printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {

                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId)
                {

                    if(mascotas[i].mascotaIdTipo==1000 && banderaMenor==mascotas[i].mascotaEdad)
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
                    if(mascotas[i].mascotaIdTipo==1001 && banderaMenor==mascotas[i].mascotaEdad)
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
                    if(mascotas[i].mascotaIdTipo==1002 && banderaMenor==mascotas[i].mascotaEdad)
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
                    if(mascotas[i].mascotaIdTipo==1003 && banderaMenor==mascotas[i].mascotaEdad)
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
                    if(mascotas[i].mascotaIdTipo==1004 && banderaMenor==mascotas[i].mascotaEdad)
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
    system("pause");
    return 0;
}

int mostrarSeparadasTipo(eMascota* mascotas,int arrayLength,int *banderaAlta,eCliente* clientes)
{
    int i, j;
    if(*banderaAlta<1)
    {
        printf("\nPara listar primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }
    printf("Mascotas de tipo ave:\n");
    printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {

                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId && mascotas[i].mascotaIsEmpty==0)
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
                }
            }
    }
    printf("\n\nMascotas de tipo Gato: \n\n");
    printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {

                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId && mascotas[i].mascotaIsEmpty==0)
                {

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
                }
            }
    }
    printf("\n\nMascotas de tipo Perro: \n\n");
    printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {
                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId && mascotas[i].mascotaIsEmpty==0)
                {
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
                }
            }
    }
    printf("\n\nMascotas de tipo pez: \n\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {
                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId && mascotas[i].mascotaIsEmpty==0)
                {
                    if(mascotas[i].mascotaIdTipo==1003)
                    {
                        if(mascotas[i].mascotaIdColor==5000)
                            printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
                            printf("%d |Negro | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5001)
                            printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
                            printf("%d |Blanco| Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5002)
                            printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
                            printf("%d |Gris  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5003)
                            printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
                            printf("%d |Rojo  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                        if(mascotas[i].mascotaIdColor==5004)
                            printf("ID|Color |Tipo  |Nombre duenio |Nombre mascota\n");
                            printf("%d |Azul  | Pez  |%s|%s\n",mascotas[i].mascotaId,clientes[j].clienteNombre,mascotas[i].mascotaNombre);
                    }
                }
            }
    }
    printf("Mascotas de tipo Roedor: \n\n");
    for(i=0;i<arrayLength;i++)
    {
            for(j=0;j<10;j++)
            {

                if(mascotas[i].mascotaIdCliente==clientes[j].clienteId && mascotas[i].mascotaIsEmpty==0)
                {
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
    printf("\n\n");
    system("pause");
    return 0;
}

int mostrarTipoColor(eMascota* mascotas,int arrayLength,int *banderaAlta,eCliente* clientes,eColor *colores,eTipo* tipos)
{
    int auxTipo,auxColor,i,contador=0;
    if(*banderaAlta<1)
    {
        printf("\nPara listar primero se debe completar el alta.\n");
        system("pause");
        return -1;
    }
    system("cls");
    listarColores(colores);
    printf("\nIngrese el ID del color: ");
    scanf("%d",&auxColor);
    fflush(stdin);
    switch(auxColor)
    {
        case 5000:
        case 5001:
        case 5002:
        case 5003:
        case 5004:
            listarTipos(tipos);
            printf("\nIngrese el ID del tipo: ");
            scanf("%d",&auxTipo);
            fflush(stdin);
            switch(auxTipo)
            {
                case 1000:
                case 1001:
                case 1002:
                case 1003:
                case 1004:
                    for(i=0;i<arrayLength;i++)
                    {
                        if(mascotas[i].mascotaIdTipo==auxTipo && mascotas[i].mascotaIdColor==auxColor)
                        {
                            contador++;
                        }
                    }
                    printf("\n\nHay %d mascotas que coinciden con los criterios ingresados.\n",contador);
                    system("pause");
                    return 0;
                default:
                    break;
            }
            break;
        default:
            break;
    }
    printf("\nLos valores ingresados no corresponden al campo.\n");
    system("pause");
    return -1;
}
