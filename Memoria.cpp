#include <iostream>

using namespace std;

int main(){

    cout<<"Tipos de datos"<<endl;
    cout<<"int:"<< sizeof(int)<<endl;
    cout<<"float:"<< sizeof(float)<<endl;
    cout<<"double:"<< sizeof(double)<<endl;
    cout<<"bool:"<< sizeof(bool)<<endl;
    cout<<"Operador direccion"<<endl;
    int a = 74;
    int b = 185;
    
    cout<< "Direccion de memoria A: "<< endl;
    cout<< "Direccion de memoria A: "<< endl;
    
    int * direccion=&a;
    cout<< "Direccion:"<< endl;
    
    cout<< "Direccion:"<< direccion <<endl;
    cout<< "Direccion:"<< *direccion <<endl;
    cout<< "Direccion:"<< &direccion <<endl;
    cout<< "Direccion:"<< sizeof(direccion) <<endl;
};