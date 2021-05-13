/* 
 * File:   023ApuntadoresConPilasdeStrings.cpp
 * Author: guija
 *
 * Created on 12 de mayo de 2021, 05:07 PM
 */

#include <iostream>
#include <cstdlib>
#include <string.h>

#define max 21

using namespace std;
//aaa
class CppApuntadoresPilas{
private:
    string frases[max];
    string *puntero1=0;
    string *puntero2=0;
public:
    void mostrarString();
    void mostrarStringEfectoPila();
    CppApuntadoresPilas();
    ~CppApuntadoresPilas();
};
// Constructor
CppApuntadoresPilas::CppApuntadoresPilas(){
    frases[0]={"Hoy ha sido el peor día de mi vida"};
    frases[1]={"Y no trates de convencerme de que"};
    frases[2]={"Hay algo positivo en cada día que vivimos"};
    frases[3]={"Porque, si te fijas"};
    frases[4]={"Este mundo es un lugar lleno de maldad"};
    frases[5]={"Incluso cuando"};
    frases[6]={"Algo bueno sale a la luz de vez en cuando,"};
    frases[7]={"La felicidad y la satisfacción no durarán"};
    frases[8]={"Y no es cierto que"};
    frases[9]={"Todo está en la mente y en el corazón"};
    frases[10]={"Porque"};
    frases[11]={"La verdadera felicidad puede alcanzarse"};
    frases[12]={"Únicamente si lo que te rodea es bueno"};
    frases[13]={"No es cierto que lo bueno existe"};
    frases[14]={"Seguro que estarás de acuerdo conmigo en que"};
    frases[15]={"La realidad"};
    frases[16]={"Crea"};
    frases[17]={"Mi actitud"};
    frases[18]={"No hay nada que yo pueda controlar"};
    frases[19]={"Y jamás me escucharás decir que"};
    frases[20]={"Hoy ha sido un buen día"};
}
// Destructor
CppApuntadoresPilas::~CppApuntadoresPilas(){
}

void CppApuntadoresPilas::mostrarString(){
    cout << "\n\tFrases normales del string usando apuntadores."<<endl<<endl;
    for(int i=0; i<max; i++){
        puntero1 = &frases[i];
        cout << *puntero1 << endl;
    }
}
void CppApuntadoresPilas::mostrarStringEfectoPila(){
    cout << "\n\tFrases con efecto pila usando apuntadores." << endl << endl;
    for(int i=max; i>-1; i--){
        puntero2 = &frases[i];
        cout << *puntero2 << endl;
    }
}

int main(int argc, char** argv) {

CppApuntadoresPilas objeto1;

objeto1.mostrarString();
objeto1.mostrarStringEfectoPila();
    
    return 0;
}

