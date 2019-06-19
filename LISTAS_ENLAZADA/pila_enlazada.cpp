/* PILA - STACK : LIFO (Last in, First out).
 * Pila<int> miPila; declara miPila como tipo Pila 
 * miPila.empty() revisar si esta vacia
 * miPila.size() retorna tamaño de la pila
 * miPila.top() acceder al siguiente elemento
 * miPila.push(elemento) insertar el ultimo elemento
 * miPila.pop() Elimina el siguiente elemento */
 
#include <iostream>
using namespace std;

template <class P>
class Nodo{
    public:
        P dato;
        Nodo<P> *sig;
};

template <class P>
class Pila{
public:
    Nodo<P> *raiz;
    Nodo<P> *fondo;
public:
    Pila();
    ~Pila();
    bool vacia();
    int size();
    P top();
    void push(P x);
    P pop();
    void imprimir();
    void imprimir_vacia();
};

template <class P>
Pila<P>::Pila()
{
    raiz = NULL;
    fondo = NULL;
}

template <class P>
Pila<P>::~Pila()
{
    while (raiz != NULL)
    {
        raiz=raiz->sig;
        delete raiz;
    }
}

template <class P>
bool Pila<P>::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

template <class P>
int Pila<P>::size(){
	Nodo<P> *aux;
	aux=raiz;
	int c=0;
	while(aux != NULL){
		c++;
		aux=aux->sig;
	}
	return c;
}


template<class P>
P Pila<P>::top(){
	return raiz->dato;
}

template <class P>
void Pila<P>::push(P x)
{
    Nodo<P> *nuevo;
    nuevo = new Nodo<P>;
    nuevo->dato = x;
    nuevo->sig =NULL;
    if(raiz !=NULL){
    	nuevo->sig=raiz;
	}
	raiz =nuevo;
}

template <class P>
P Pila<P>::pop()
{
    if (!vacia())
    {
        P informacion = raiz->dato;
        Nodo<P> *bor = raiz;
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
template <class P>
void Pila<P>::imprimir()
{
    Nodo<P> *reco = raiz;
    cout << "-Lista elementos de la pila:\n"<<endl;
    while (reco != NULL)
    {
        cout << reco->dato <<endl;
        reco = reco->sig;
    }
    cout << "\n";
}

template <class P>
void Pila<P>::imprimir_vacia(){
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
	cout<<" \n-- PILA TIPO INT --\n"<<endl;
    Pila<int> pila_int;
    pila_int.push(5);
    pila_int.push(10);
    pila_int.push(50);
    pila_int.imprimir();
    cout<<"El elemento superior: "<<pila_int.top()<<endl;
    cout<<"-Tamanio: "<<pila_int.size()<<endl;
    cout<<"-Extraemos : " <<pila_int.pop()<<endl;
    cout<<"-Extraemos : " <<pila_int.pop()<<endl;
    //pila_int.pop();
    pila_int.imprimir();
    cout<<"-Tamanio: "<<pila_int.size()<<endl;
    pila_int.imprimir_vacia();
    
    cout<<" \n-- PILA TIPO CHAR --\n"<<endl;
    Pila<char> pila_char;
    pila_char.push('a');
    pila_char.push('b');
    pila_char.push('c');
    pila_char.imprimir();
    cout<<"-Tamanio: "<<pila_char.size()<<endl;
    cout<<"-Extraemos: " <<pila_char.pop()<<endl;
    pila_char.imprimir();
    cout<<"-Tamanio: "<<pila_char.size()<<endl;
    cout<<"El elemento superior: "<<pila_char.top()<<endl;
	 
    return 0;
    
}
