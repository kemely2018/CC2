#include <iostream>
using namespace std;

template <class C>
class Nodo{
    public:
        C dato;
        Nodo<C> *sig;
};


template <class C>
class Iterador_Lista;
template <class C>
class Lista_Enlazada{
public:
    Nodo<C> *raiz;
    Nodo<C> *fondo;
public:
    Lista_Enlazada();
    ~Lista_Enlazada();
    bool vacia();
    int size();
    void push(C x);
    C pop();
    Nodo<C>* get_inicio();
    Nodo<C>* get_final();
    //Iterador_Lista<C> buscar(C n);
    void mostrar(Lista_Enlazada<C> l,Iterador_Lista<C> i);
    void buscar(Lista_Enlazada<C> l,Iterador_Lista<C> i,C v);
    void imprimir();
};

template <class C>
Lista_Enlazada<C>::Lista_Enlazada()
{
    raiz = NULL;
    fondo = NULL;
}

template <class C>
Lista_Enlazada<C>::~Lista_Enlazada()
{
    while (raiz != NULL)
    {
        raiz=raiz->sig;
        delete raiz;
    }
}

template <class C>
bool Lista_Enlazada<C>::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

template <class C>
int Lista_Enlazada<C>::size(){
	Nodo<C> *aux;
	aux=raiz;
	int c=0;
	while(aux != NULL){
		c++;
		aux=aux->sig;
	}
	return c;
}


template <class C>
void Lista_Enlazada<C>::push(C x)
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
C Lista_Enlazada<C>::pop()
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

/*template <class C>
Iterador_Lista<C> Lista_Enlazada<C>::buscar(C n){
    Nodo<C> *temp = raiz;
    Iterador_Lista<C> i;
    while(temp)
    {
        //compara v con el dato
        if(temp->dato==n)
        {
            //iterador lo apunto al nodo
			i=temp;
			return i;
        }
            temp=temp->sig;
	}
	//return -1;
}*/

template <class C>
void Lista_Enlazada<C>::buscar(Lista_Enlazada<C> l,Iterador_Lista<C> i,C v){
    for(i=l.get_inicio() ; i != l.get_final() ; ++i ){
        if(-i==v){
        	cout<<"Se encontro "<<-i<<endl;
        	break;
		}
    }
}
template <class C>
void Lista_Enlazada<C>::mostrar(Lista_Enlazada<C> l,Iterador_Lista<C> i){
    for(i=l.get_inicio() ; i != l.get_final() ; ++i )
        cout << -i << " -> ";
    cout<<"NULL"<<endl;
}
template <class C>
Nodo<C>* Lista_Enlazada<C>::get_inicio(){
	return raiz;
}

template <class C>
Nodo<C>* Lista_Enlazada<C>::get_final(){
    Nodo<C>* ptr = raiz;
    while(ptr->sig != NULL)
        ptr = ptr->sig;
    return ptr->sig;
    return fondo;
}

template <class C>
// CLASE ITERADOR LISTA
class Iterador_Lista{
	private:
		Nodo<C> *ite;
	public:
		void operator=(Nodo<C> *nodo){
			ite=nodo;
		}
		Nodo<C>* operator++(){
			ite = ite->sig;
            return ite;
		}
		C operator-(){
			return ite->dato;
		}
		bool operator==(Nodo<C> *nodo){
			return ite== nodo;
		}
		bool operator!=(Nodo<C> *nodo){
			return ite!= nodo;
		}
		
};

int main()
{
    cout<<" \n-- LISTA ENLAZADA TIPO INT --\n"<<endl;
    Lista_Enlazada<int> lista_int;
    Iterador_Lista<int> iti;
    lista_int.push(5);
    lista_int.push(10);
    lista_int.push(50);
    lista_int.mostrar(lista_int,iti);
    lista_int.buscar(lista_int,iti,10);
    cout<<"-Extraemos : " <<lista_int.pop()<<endl;
    cout<<"-Extraemos : " <<lista_int.pop()<<endl;
    lista_int.mostrar(lista_int,iti);
    return 0;
    
}
