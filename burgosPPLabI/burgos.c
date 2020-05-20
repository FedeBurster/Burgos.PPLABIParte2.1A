
#include "Burgos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int mainMenu()
{
    int respuesta;
    system("cls");

    printf("MENU DE OPCIONES\n\n1)Alta mascota\n2)Modificar mascota\n3)Baja mascota\n4)Listar mascotas\n5)Listar tipos\n6)Listar colores\n7)Listar servicios\n8)Alta trabajo\n9)Listar trabajos\n10)Mostrar mascotas por color seleccionado\n11)Mostrar mascotas por tipo seleccionado\n12)Mostrar mascotas menores\n13)Mostrar mascotas separadas por tipo\n14)Mostrar color y tipo\n0)SALIR");
    printf("\n\nIngrese la opcion que desee realizar: ");
    scanf("%d", &respuesta);
    fflush(stdin);

    return respuesta;
}

int hardcodeoEjemplos(eMascota* mascotas,eCliente* clientes,int* alta,int* id)
{
    mascotas[0].mascotaId=1;
    mascotas[1].mascotaId=2;
    mascotas[2].mascotaId=3;
    mascotas[3].mascotaId=4;

    mascotas[0].mascotaIdCliente=3002;
    mascotas[1].mascotaIdCliente=3000;
    mascotas[2].mascotaIdCliente=3001;
    mascotas[3].mascotaIdCliente=3000;

    strcpy(mascotas[0].mascotaNombre,"Fido  ");
    strcpy(mascotas[1].mascotaNombre,"Michi ");
    strcpy(mascotas[2].mascotaNombre,"Huesos");
    strcpy(mascotas[3].mascotaNombre,"Pelusa");

    mascotas[0].mascotaIdTipo=1001;
    mascotas[1].mascotaIdTipo=1000;
    mascotas[2].mascotaIdTipo=1002;
    mascotas[3].mascotaIdTipo=1002;

    mascotas[0].mascotaIdColor=5000;
    mascotas[1].mascotaIdColor=5002;
    mascotas[2].mascotaIdColor=5001;
    mascotas[3].mascotaIdColor=5000;

    mascotas[0].mascotaEdad=2;
    mascotas[1].mascotaEdad=1;
    mascotas[2].mascotaEdad=3;
    mascotas[3].mascotaEdad=4;

    mascotas[0].mascotaIsEmpty=0;
    mascotas[1].mascotaIsEmpty=0;
    mascotas[2].mascotaIsEmpty=0;
    mascotas[3].mascotaIsEmpty=0;

    clientes[0].clienteId=3000;
    clientes[1].clienteId=3001;
    clientes[2].clienteId=3002;

    strcpy(clientes[0].clienteNombre,"Fede Burgos   ");
    strcpy(clientes[1].clienteNombre,"Bart Simpson  ");
    strcpy(clientes[2].clienteNombre,"Chavo del ocho");

    clientes[0].clienteSexo='M';
    clientes[1].clienteSexo='M';
    clientes[2].clienteSexo='M';

    clientes[0].clienteIsEmpty=0;
    clientes[1].clienteIsEmpty=0;
    clientes[2].clienteIsEmpty=0;

    *alta=4;
    *id=5;
    return 0;
}

int hardcodeoEstructuras(eTipo* tipos,eColor* colores,eServicio* servicios)
{
    strcpy(tipos[0].tipoDescripcion,"Ave   ");
    strcpy(tipos[1].tipoDescripcion,"Perro ");
    strcpy(tipos[2].tipoDescripcion,"Gato  ");
    strcpy(tipos[3].tipoDescripcion,"Roedor");
    strcpy(tipos[4].tipoDescripcion,"Pez   ");

    tipos[0].tipoId=1000;
    tipos[1].tipoId=1001;
    tipos[2].tipoId=1002;
    tipos[3].tipoId=1003;
    tipos[4].tipoId=1004;

    strcpy(colores[0].colorNombre,"Negro ");
    strcpy(colores[1].colorNombre,"Blanco");
    strcpy(colores[2].colorNombre,"Gris  ");
    strcpy(colores[3].colorNombre,"Rojo  ");
    strcpy(colores[4].colorNombre,"Azul  ");

    colores[0].colorId=5000;
    colores[1].colorId=5001;
    colores[2].colorId=5002;
    colores[3].colorId=5003;
    colores[4].colorId=5004;

    strcpy(servicios[0].servicioDescripcion,"Corte        ");
    strcpy(servicios[1].servicioDescripcion,"Desparasitado");
    strcpy(servicios[2].servicioDescripcion,"Castrado     ");

    servicios[0].servicioId=2000;
    servicios[1].servicioId=2001;
    servicios[2].servicioId=2002;

    servicios[0].servicioPrecio=250;
    servicios[1].servicioPrecio=300;
    servicios[2].servicioPrecio=400;
    return 0;
}
