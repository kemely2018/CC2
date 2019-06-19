// COLA : FIFO (First In,  First Out) 
/*
 * COLA - QUEUE
 * Cola<int> unaCola; declara miCola como tipo Cola
 * unaCola.vacia() revisar si esta vacia
 * unaCola.size() retorna tamaño de la cola
 * unaCola.front() acceder al primer elemento
 * unaCola.back() acceder al ultimo elemento
 * unaCola.push(elemento) elemento insertar el ultimo elemento
 * unaCola.pop() Elimina el siguiente elemento
 * ------------------------------------------------------
 */
#include <iostream>
using namespace std;

template <class C>
class Nodo{
    public:
        C dato;
        Nodo<C> *sig;
};

template <class C>
class Cola{
public:
    Nodo<C> *raiz;
    Nodo<C> *fondo;
public:
    Cola();
    ~Cola();
    bool vacia();
    int size();
    C front();
    C back();
    void push(C x);
    C pop();
    void imprimir();
    void imprimir_vacia();
};

template <class C>
Cola<C>::Cola()
{
    raiz = NULL;
    fondo = NULL;
}

template <class C>
Cola<C>::~Cola()
{
    while (raiz != NULL)
    {
        raiz=raiz->sig;
        delete raiz;
    }
}

template <class C>
bool Cola<C>::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

template <class C>
int Cola<C>::size(){
	Nodo<C> *aux;
	aux=raiz;
	int c=0;
	while(aux != NULL){
		c++;
		aux=aux->sig;
	}
	return c;
}

template<class C>
C Cola<C>::front(){
	return raiz->dato;
}

template<class C>
C Cola<C>::back(){
	Nodo<C> *aux;
    Nodo<C> *aux2;
    int c=0;
    aux=raiz;
    aux2=raiz;
    while(aux!=NULL)
    {
        aux=aux->sig;
        c++;
    }
    for(int i=0;i<c-1;i++)
    {
        aux2=aux2->sig;
	}
    return aux2->dato;

}

template <class C>
void Cola<C>::push(C x)
{
    Nodo<C> *nuevo;
    nuevo = new Nodo<C>;
    nuevo->dato = x;
    nuevo->sig = NULL;
    if (vacia()) 
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

template <class C>
C Cola<C>::pop()
{
    if (!vacia())
    {
        C informacion = raiz->dato;
        Nodo<C> *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else 
        {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
}
template <class C>
void Cola<C>::imprimir()
{
    Nodo<C> *reco = raiz;
    cout << "-Lista elementos de la cola:\n";
    while (reco != NULL)
    {
        cout << reco->dato << " -> ";
        reco = reco->sig;
    }
    cout << "NULL \n";
}

template <class C>
void Cola<C>::imprimir_vacia(){
	if (!vacia())
    {
    	cout<<"NO esta vacia"<<endl;
    }
    else{
    	cout<<"Si esta vacia"<<endl;
	}
}


int main()
{
	cout<<" \n-- COLA TIPO INT --\n"<<endl;
    Cola<int> cola_int;
    cola_int.push(5);
    cola_int.push(10);
    cola_int.push(50);
    cola_int.imprimir();
    cout<<"El elemento al frente es: "<<cola_int.front()<<endl;
    cout<<"El elemento de atras: "<<cola_int.back()<<endl; 
    cout<<"-Tamanio: "<<cola_int.size()<<endl;
    cout<<"-Extraemos : " <<cola_int.pop()<<endl;
    cout<<"-Extraemos : " <<cola_int.pop()<<endl;
    //cola_int.pop();
    cola_int.imprimir();
    cout<<"-Tamanio: "<<cola_int.size()<<endl;
    cola_int.imprimir_vacia();
    
    cout<<" \n-- COLA TIPO CHAR --\n"<<endl;
    Cola<char> cola_char;
    cola_char.push('a');
    cola_char.push('b');
    cola_char.push('c');
    cola_char.imprimir();
    cout<<"-Tamanio: "<<cola_char.size()<<endl;
    cout<<"-Extraemos: " <<cola_char.pop()<<endl;
    cola_char.imprimir();
    cout<<"-Tamanio: "<<cola_char.size()<<endl;
    cout<<"El elemento al frente es: "<<cola_char.front()<<endl;
    cout<<"El elemento de atras: "<<cola_char.back()<<endl;   
	 
    /*cout<<" \n-- COLA TIPO STRING --\n"<<endl;
    Cola<string> cola_s;
    cola_s.push("HOLA");
    cola_s.push("COMO");
    cola_s.push("ESTAS?");
    cola_s.imprimir();
    cout<<"-Tamano :"<<cola_s.size()<<endl;
    cout<<"-Extraemos :" <<cola_s.pop()<<endl;
    cola_s.imprimir();
    cout<<"-Tamano :"<<cola_char.size()<<endl;*/
    
    return 0;
    
}
