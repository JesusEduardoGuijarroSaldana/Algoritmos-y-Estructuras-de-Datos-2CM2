/* 
 * File:   9DiferentesOrdenamientos.cpp
 * Author: guija
 *
 * Created on 19 de marzo de 2021, 02:05 PM
 */

//busqueda secuencial

#include <iostream>
#define max 5

using namespace std;

class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void insercion();
    void seleccion();
    void burbuja();
    Ordenamiento();
    ~Ordenamiento();
};
//Constructor
Ordenamiento::Ordenamiento()
{

}
//Destructor
Ordenamiento::~Ordenamiento()
{

}
void Ordenamiento::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::insercion()
{
    int i,pos,aux;
    for (i=0;i<=max;i++)
    {
        pos=i;
        aux = datos[i];
        while((pos>0)&&(datos[pos-1]>aux))
        {
            datos[pos]=datos[pos-1];
            pos--;
        }
        datos[pos]=aux;
    }
}
void Ordenamiento::seleccion()
{
    int i, j, aux, minimo;
    for (i=0; i<=max; i++)
    {
        minimo=i;
        for (j=i+1; j<=max; j++)
        {
            if (datos[j]<datos[minimo])
            {
                minimo = j;
            }
        }
        aux=datos[i];
        datos[i]=datos[minimo];
        datos[minimo]=aux;
    }
}
void Ordenamiento::burbuja()
{
    int i,j, aux;
    for(i=0; i<max; i++){
        for(j=0; j<max; j=j+1){
            if(datos[j]>datos[j+1]){
                aux=datos[j];
                datos[j]=datos[j+1];
                datos[j+1]=aux;
            }
        }

    }
}
int main()
{

    cout << "\n\tMenu de ordenamiento, primero llene el arreglo, luego"
            " eliga la opción del ordenamiento que desee usar." << endl;
    
    cout <<"1.- Ordenamiento de inserción." << endl;
    cout <<"2.- Ordenamiento de selección." << endl;
    cout <<"3.- Ordenamiento de burbuja." << endl;
    
    Ordenamiento objeto1;
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    
// Menu.
    
    int opcion=0;
    
    cout << "Ingrese alguna opción existete: " << endl;
    cin >> opcion;
    
    switch (opcion){
        case 1: {
            objeto1.insercion();
            objeto1.mostrar("ordenados por el ordenamiento de inserción");
            break;
        }
        case 2: {
            objeto1.seleccion();
            objeto1.mostrar("ordenados por el ordenamiento de selección");
            break;
        }
        case 3: {
            objeto1.burbuja();
            objeto1.mostrar("ordenamos por el ordenamiento de burbuja");
            break;
        }
        default: {
            cout << "Opción no válida" <<endl;
        }
    }
    

    return 0;
}

