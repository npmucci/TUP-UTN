#include <iostream>

#include "Usuario.h"

using namespace std;

Usuario::Usuario(string nombre, string clave, string rol)
{
    _nombre=nombre;
    _clave=clave;
    _rol=rol;
}
string Usuario::getNombre(){
    return _nombre;
}
void Usuario::setNombre(string nombre){
    _nombre=nombre;
}
string Usuario::getClave(){
    return _clave;
}
void Usuario::setClave(string clave){
    _clave=clave;
}
string Usuario::getRol(){
    return _rol;
}
void Usuario::setRol(string rol){
    _rol=rol;
}
int verificarUsuario (Usuario lista[], int tam, string id, string pass){
    for (int i=0;i<tam;i++){
        if(lista[i].getNombre() == id && lista[i].getClave() == pass){
            return i;
        }
    }

    return -1;
}

void imprimirMensaje(Usuario usuario){
  if(usuario.getRol()=="admin"){
    cout<< "Bienvenido  Administrador " << usuario.getNombre() << endl;
  }
  else{
    cout<< "Bienvenido  Usuario " << usuario.getNombre() << endl;
  }
}
