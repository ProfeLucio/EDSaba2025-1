#include <iostream>
using namespace std;

//Declaracion Nodo
struct nodo {
    int valor;
    struct nodo *sig;//NULL
};
//Generar una funcion que permita determinar si existe un nodo con valor X. Y cuantos nodos tienen dicho valor
struct nodo *cab, *aux, *ultimo;
int mostrarNodos(){
    for(aux=cab; aux!=NULL; aux=aux->sig){
        cout<<aux->valor<<" <- Valor del Nodo"<<endl;        
    }
}
int crearNodo(){    
    aux = ((struct nodo *) malloc(sizeof(struct nodo)));
    cout<<"Registre el valor: ";
    cin>>aux->valor;
    aux->sig = NULL;
    if(cab==NULL){
        cab = aux;
    } else {
        ultimo = cab;
        while(ultimo->sig!=NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig = aux;
        ultimo = NULL;
        free(ultimo);
    }
    aux = NULL;
    free(aux);
}
int buscar(){
    int aguja;
    int contador=0;
    cout<<"Cual es el valor a buscar: ";
    cin>>aguja;
    for(aux=cab; aux!=NULL; aux=aux->sig){
        if(aguja==aux->valor){
            contador++;
        }
    }
    if(contador==0){
        cout<<"Pailas, no se encontro el valor en el arreglo FIFO.";
    } else {
        cout<<"Felicidades!!, Se encontro el valor en el arreglo FIFO. En "<<contador<<" ocasiones.";
    }
}
int main(){
    int opc;
    do {
        cout<<"1. Registrar Nodo"<<endl;
        cout<<"2. Mostrar Nodos"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
            case 1: crearNodo(); break;
            case 2: mostrarNodos(); break;
        }
    }while(opc!=3);
}

