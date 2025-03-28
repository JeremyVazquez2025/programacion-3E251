#include "Serie.hpp"


int main(int argc, char const *argv[])
{
    
    Serie seriaNavidenia;

    seriaNavidenia.Imprimir();
    seriaNavidenia.EncenderTodo();
    seriaNavidenia.ApagarCantidad(5);
    seriaNavidenia.Imprimir();
    seriaNavidenia.ApagarTodo();
    seriaNavidenia.Imprimir();


    return 0;
}
