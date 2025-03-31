#pragma once
using namespace std;

class Usuario
{
private:
    string _nombre;
    string _clave;
    string _rol;

public:

    Usuario(string nombre, string clave, string rol);
    string getNombre();
    void setNombre(string nombre);
    string getClave();
    void setClave(string clave);
    string getRol();
    void setRol(string rol);
};

int verificarUsuario (Usuario lista[], int tam, string id, string pass);

void imprimirMensaje(Usuario usuario);
