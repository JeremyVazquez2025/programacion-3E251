#include <iostream>
#include <string>
#include <map>
using namespace std;

enum TipoPokemon
{
    AGUA,
    FUEGO,
    ELECTRICO,
    PLANTA,
    
};

class Pokemon {
    private:
        string nombre;
        int ataque;
        TipoPokemon tipo;

    public:
    Pokemon (string nombre, int ataque, TipoPokemon tipo)
    {
        this->nombre = nombre;
        this->ataque = ataque;
        this->tipo = tipo;
    }
};

int main(int argc, char const *argv[])
{
    map<int, Pokemon> pokedex;
    pokedex[1] = Pokemon("Bulbasaur", 1, TipoPokemon::PLANTA);
    pokedex[2] = Pokemon("Yvasaur", 2, TipoPokemon::PLANTA);
    pokedex[3] = Pokemon("Venasaur", 3, TipoPokemon::PLANTA);
    pokedex[4] = Pokemon("Charmander", 4, TipoPokemon::FUEGO);
    pokedex[5] = Pokemon("Charmeleon", 5, TipoPokemon::FUEGO);
    pokedex[6] = Pokemon("Charizard", 6, TipoPokemon::FUEGO);
    pokedex[7] = Pokemon("Squirtle", 7, TipoPokemon::AGUA);
    pokedex[8] = Pokemon("Wartortle", 8, TipoPokemon::AGUA);
    pokedex[9] = Pokemon("Blastoise", 9, TipoPokemon::AGUA);

    map<string, string> diccionario;
    diccionario["Programa"] = "Serie de elemntos organizado bla blabala";
    diccionario["aleatorio"] = "Que depende del azar o de la casualidad";    
    return 0;
}