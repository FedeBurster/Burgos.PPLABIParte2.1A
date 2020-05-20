#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "burgos.h"
#include "informes.h"
#define TAM 50

int main()
{
    int respuesta=33,banderaIdMascotas=1,banderaAlta=0,banderaIdTrabajo=0;
    eMascota mascotas[TAM];
    eTipo tipos[5];
    eColor colores[5];
    eServicio servicios[3];
    eTrabajo trabajos[10];
    eCliente clientes[10];

    initMascotas(mascotas,TAM);
    initTrabajos(trabajos,10);
    initClientes(clientes,10);

    hardcodeoEjemplos(mascotas,clientes,&banderaAlta,&banderaIdMascotas);
    hardcodeoEstructuras(tipos,colores,servicios);

    do{
        respuesta=mainMenu();
        switch(respuesta)
        {
            case 1:
                altaMascota(mascotas,TAM,&banderaIdMascotas,&banderaAlta,tipos,colores);
                break;
            case 2:
                if(banderaAlta<1)
                {
                    printf("\nPara modificar los datos primero se debe completar el alta.\n");
                    system("pause");
                    break;
                }
                listarMascotas(mascotas,TAM,tipos,colores,&banderaAlta,clientes);
                modificarMascota(mascotas,TAM,tipos,colores,&banderaAlta);
                break;
            case 3:
                if(banderaAlta<1)
                {
                    printf("\nPara dar de baja primero se debe completar el alta.\n");
                    system("pause");
                    break;
                }
                listarMascotas(mascotas,TAM,tipos,colores,&banderaAlta,clientes);
                bajaMascota(mascotas,TAM,&banderaAlta);
                break;
            case 4:
                listarMascotas(mascotas,TAM,tipos,colores,&banderaAlta,clientes);
                system("pause");
                break;
            case 5:
                system("cls");
                listarTipos(tipos);
                system("pause");
                break;
            case 6:
                listarColores(colores);
                system("pause");
                break;
            case 7:
                system("cls");
                listarServicios(servicios);
                system("pause");
                break;
            case 8:
                if(banderaAlta<1)
                {
                    printf("\nPara cargar un trabajo primero se debe completar el alta.\n");
                    system("pause");
                    break;
                }
                listarMascotas(mascotas,TAM,tipos,colores,&banderaAlta,clientes);
                altaTrabajo(trabajos,mascotas,servicios,&banderaIdTrabajo);
                break;
            case 9:
                if(banderaIdTrabajo<1)
                {
                    printf("\nPara listar trabajos primero se debe completar el alta.\n");
                    system("pause");
                    break;
                }
                listarTrabajos(trabajos,mascotas,servicios);
                break;
            case 10:
                mostrarMascotaColor(mascotas,TAM,&banderaAlta,clientes,colores);
                break;
            case 11:
                mostrarMascotaTipo(mascotas,TAM,&banderaAlta,clientes,tipos);
                break;
            case 12:
                mostrarMascotaMenor(mascotas,TAM,&banderaAlta,clientes);
                break;
            case 13:
                system("cls");
                mostrarSeparadasTipo(mascotas,TAM,&banderaAlta,clientes);
                break;
            case 14:
                mostrarTipoColor(mascotas,TAM,&banderaAlta,clientes,colores,tipos);
                break;
            case 0:
                break;
            default:
                break;
        }
    }while(respuesta!=0);
    return 0;
}
