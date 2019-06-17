/* https://www.youtube.com/watch?v=pq3wN8TrdHo*/

#include<iostream>
using namespace std;

// CLASE NODO
template <class L>
class Nodo{
	private:
	L dato;
	Nodo<L> *siguiente;
	public:
		//Constructor de Nodo
		Nodo(L n){
			dato=n;
			siguiente=NULL;
		}
		void set_siguiente(Nodo<L> *next){
			siguiente=next;
		}
		L getdato(){
			return dato;
		}
		Nodo<L> *getsiguiente(){
			return siguiente;
		}
		
};

// CLASE LISTA ENLAZADA

template <class L>
class Iterador_Lista;
template <class L>
class Lista_enlazada{
	Nodo<L> *inicio;
	public:
	Lista_enlazada(){
		inicio=NULL;
	}
	/////////////////////////
    void insertar(L dat)
    {
        Nodo<L> *nuevo;
        nuevo=new Nodo<L>(dat);
        Nodo<L> *auxiliar;
        if(inicio==NULL)
        {
            inicio=nuevo;
        }
        else{
                auxiliar=inicio;
                while((auxiliar->getsiguiente())!=NULL)
                {
                    auxiliar=auxiliar->getsiguiente();
                }
            auxiliar->set_siguiente(nuevo);
        }
    }
    
    void mostrar()
    {
        Nodo<L> *temp;
        temp=inicio;
        while(temp)
        {
            cout<<temp->getdato()<<" -> ";
            temp=temp->getsiguiente();
        }
        cout<<"NULL"<<endl;

    }
    
    /*void ite_mostrar(Lista_enlazada<L> lista,Iterador_Lista<L> i){
    	
    	Iterador_Lista<L> it=i;
    	for(it=lista.get_inicio() ; it != lista.get_final() ; ++it ){
    		cout << *it << " -> ";
		}
        cout<<"NULL"<<endl;
	}*/
	
    Iterador_Lista<L> buscar(L n){
        Nodo<L> *temp=inicio;
        Iterador_Lista<L> i;
        while(temp)
        {
        	//compara v con el dato
            if(temp->getdato()==n)
            {
               //iterador lo apunto al nodo
			    i=temp;
			    return i;
            }
            temp=temp->getsiguiente();
	    }
	    return i;
    }
    void eliminar_pos(int p)
    {
        Nodo<L>*temp;
        temp=inicio;
        Nodo<L>*temp1;
        if(p==0)
        {
            temp=temp->getsiguiente();
        }
        else
        {
            for(int j=0;j<p-1;j++)
            {
                temp=temp->getsiguiente();
            }
            temp1=temp->getsiguiente();
            temp->set_siguiente(temp1->getsiguiente());
        }
    }
    ///////  Para utilizar en el iterador ///////
    Nodo<L>* get_inicio(){
    	return inicio;
	}
    Nodo<L>* get_final() {
    	Nodo<L>* aux = inicio;
    	while(aux->getsiguiente() != NULL){
    		aux = aux->getsiguiente();
		}
		return aux->getsiguiente();
	}
	/////////
    
    ~Lista_enlazada()
    {

       while(inicio!=NULL)
       {
           inicio=inicio->getsiguiente();
           delete inicio;
       }
    }
    
};


template <class L>
// CLASE ITERADOR LISTA
class Iterador_Lista{
	private:
		Nodo<L> *ite;
	public:
		void operator=(Nodo<L> *nodo){
			ite=nodo;
		}
		Nodo<L>* operator++(){
			ite = ite->getsiguiente();
            return ite;
		}
		L operator*(){
			return ite->getdato();
		}
		bool operator==(Nodo<L> *nodo){
			return ite== nodo;
		}
		bool operator!=(Nodo<L> *nodo){
			return ite!= nodo;
		}
		
};

int main()
{
	int x,y,valor;
	cout<< "LISTA ENLAZADAS CREADAS "<<endl;
    Lista_enlazada<char> l_char;
    Lista_enlazada<int> l_int;
    Iterador_Lista<char> it;
    Iterador_Lista<int> iti;
    l_char.insertar('a');
    l_char.insertar('b');
    l_char.insertar('c');
    l_char.insertar('d');
    l_char.insertar('e');
    l_char.mostrar();
    l_int.insertar(1);
    l_int.insertar(2);
    l_int.insertar(3);
    l_int.mostrar();
    it=l_char.buscar('a');
    cout<<"Se encontro "<<*it<<endl;
    for(it=l_char.get_inicio() ; it != l_char.get_final() ; ++it )
        cout << *it << " -> ";
    cout<<"NULL"<<endl;
    l_int.eliminar_pos(2);
   for(iti=l_int.get_inicio() ; iti != l_int.get_final() ; ++iti )
        cout << *iti << " -> ";
    cout<<"NULL"<<endl;
    
    

}

