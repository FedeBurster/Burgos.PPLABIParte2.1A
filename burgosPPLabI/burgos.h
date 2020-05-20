#include "color.h"
#include "tipo.h"
#include "mascotas.h"
#include "servicio.h"
#include "trabajo.h"
#include "cliente.h"

/** \brief Muestra el menu principal en pantalla, mostrando al usuario las distintas opciones
 *
 * \return Devuelve la opcion elegida por el usuario
 *
 */
int mainMenu();

/** \brief Llena los arrays de estructura con datos preexistentes
 *
 * \param Array de estructura vacio
 * \param Array de estructura vacio
 * \param Array de estructura vacio
 * \return Devuelve 0 al terminar
 *
 */
int hardcodeoEstructuras(eTipo* tipos,eColor* colores,eServicio* servicios);

int hardcodeoEjemplos(eMascota* mascotas,eCliente* clientes,int* alta,int* id);
