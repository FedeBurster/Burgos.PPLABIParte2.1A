#ifndef CLIENTE_H_
#define CLIENTE_H_
struct
{
    int clienteId;
    char clienteNombre[20];
    char clienteSexo;
    int clienteIsEmpty;
}typedef eCliente;

int initClientes(eCliente* clientes,int arrayLength);
#endif
