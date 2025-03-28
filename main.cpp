#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include "Serie.hpp"
#include <iostream>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    
    auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    auto documento = vbox(
        spinner(21,1)
    );

    Render(pantalla, documento);
    pantalla.Print();

    Serie seriaNavidenia;

    seriaNavidenia.Imprimir();
    seriaNavidenia.EncenderTodo();
    seriaNavidenia.ApagarCantidad(5);
    seriaNavidenia.Imprimir();
    seriaNavidenia.ApagarTodo();
    seriaNavidenia.Imprimir();


    return 0;
}
