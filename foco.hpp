#include <iostream>
#include "EstadoFoco.hpp"

class foco
{
private:
    EstadoFoco estado;
public:
    foco() {
        estado = EstadoFoco::Apagado;
    }
    ~foco() {}
    void Encender(){
        estado = EstadoFoco::Encendido;
        
    }
    void Apagar(){
        estado = EstadoFoco::Apagado;
    }
    void Imprimir()
    {
        switch (estado)
        {
        case EstadoFoco::Encendido:
        std::cout << "*"<< std::endl;
    
            break;
            case EstadoFoco::Apagado:
            std::cout << "E";
        default: throw "Estado foco no identificado";
            break;
        }
        std::cout << "A";
    }
    void Alternar(){
        if (estado == EstadoFoco::Encendido)
        {
            estado =EstadoFoco::Apagado;
        }else{
            estado == EstadoFoco::Encendido;
        }
        
    }
};