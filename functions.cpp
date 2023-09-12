#include "constructores.cpp"
//CREAR FUNCIONES PARA EL PROGRAMA PRINCIPAL

//Crear listas enlazadas por subclase
//Nodo tv
struct NodoTv{
    Tv dato;
    NodoTv *siguiente;
};
//Nodo equipo de sonido
struct NodoEq{
    EquipSoun dato;
    NodoEq *siguiente;
};
//Nodo refrigerador
struct NodoRef{
    Refrigerador dato;
    NodoRef *siguiente;
};
//Nodo microondas
struct NodoMic{
    Microondas dato;
    NodoMic *siguiente;
};
//Nodo licuadora
struct NodoLic{
    Licuadora dato;
    NodoLic *siguiente;
};
//Nodo cafetera
struct NodoCaf{
    Cafetera dato;
    NodoCaf *siguiente;
};
//Nodo termo
struct NodoTerm{
    Termo dato;
    NodoTerm *siguiente;
};
//Nodo Ccoina
struct NodoCoc{
    Cocina dato;
    NodoCoc *siguiente;
};
//Nodo lavadora
struct NodoLav{
    Lavadora dato;
    NodoLav *siguiente;
};
//Funciones para añadir un elemento a cada subclase
void insertarTv(NodoTv *&,Tv);
void insertarEq(NodoEq *&,EquipSoun);
void insertarRef(NodoRef *&,Refrigerador);
void insertarMic(NodoMic *&,Microondas);
void insertarLic(NodoLic *&,Licuadora);
void insertarCaf(NodoCaf *&,Cafetera);
void insertarTerm(NodoTerm *&,Termo);
void insertarCoc(NodoCoc *&,Cocina);
void insertarLav(NodoLav *&,Lavadora);
//Funciones para mostrar cada Lista de subclase
void mostrarTvs(NodoTv *,bool);
void mostrarEqs(NodoEq *,bool);
void mostrarRefs(NodoRef *,bool);
void mostrarMics(NodoMic *,bool);
void mostrarLics(NodoLic *,bool);
void mostrarCafs(NodoCaf *,bool);
void mostrarTerms(NodoTerm *,bool);
void mostrarCocs(NodoCoc *,bool);
void mostrarLavs(NodoLav *,bool);
//Funciones para buscar productos de un determinado año
void mostrarTvsA(NodoTv *teles,int anio);
void mostrarEqsA(NodoEq *equipos,int anio);
void mostrarRefA(NodoRef *refris,int anio);
void mostrarMicsA(NodoMic *microos,int anio);
void mostrarLicsA(NodoLic *licuadoras,int anio);
void mostrarCafsA(NodoCaf *cafeteras,int anio);
void mostrarTermsA(NodoTerm *termos,int anio);
void mostrarCocsA(NodoCoc *cocinas,int anio);
void mostrarLavsA(NodoLav *lavadoras,int anio);
//Funciones para menús
void Menu();
//CREAR MODULO PRINCIPAL

//Desarrollar funciones de listas enlazadas
void insertarTv(NodoTv *&televisores,Tv tele){
    NodoTv *nuevo_nodo=new NodoTv();
    nuevo_nodo->dato=tele;
    NodoTv *aux1=televisores;
    NodoTv *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(televisores==aux1){
        televisores=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarEq(NodoEq *&equipos,EquipSoun equip){
    NodoEq *nuevo_nodo=new NodoEq();
    nuevo_nodo->dato=equip;
    NodoEq *aux1=equipos;
    NodoEq *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(equipos==aux1){
        equipos=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarRef(NodoRef *&refris,Refrigerador ref){
    NodoRef *nuevo_nodo=new NodoRef();
    nuevo_nodo->dato=ref;
    NodoRef *aux1=refris;
    NodoRef *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(refris==aux1){
        refris=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarMic(NodoMic *&microos,Microondas mic){
    NodoMic *nuevo_nodo=new NodoMic();
    nuevo_nodo->dato=mic;
    NodoMic *aux1=microos;
    NodoMic *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(microos==aux1){
        microos=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarLic(NodoLic *&licus,Licuadora lic){
    NodoLic *nuevo_nodo=new NodoLic();
    nuevo_nodo->dato=lic;
    NodoLic *aux1=licus;
    NodoLic *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(licus==aux1){
        licus=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarCaf(NodoCaf *&cafs,Cafetera caf){
    NodoCaf *nuevo_nodo=new NodoCaf;
    nuevo_nodo->dato=caf;
    NodoCaf *aux1=cafs;
    NodoCaf *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(cafs==aux1){
        cafs=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarTerm(NodoTerm *&termos,Termo term){
    NodoTerm *nuevo_nodo=new NodoTerm();
    nuevo_nodo->dato=term;
    NodoTerm *aux1=termos;
    NodoTerm *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(termos==aux1){
        termos=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarCoc(NodoCoc *&cocinas,Cocina coc){
    NodoCoc *nuevo_nodo=new NodoCoc();
    nuevo_nodo->dato=coc;
    NodoCoc *aux1=cocinas;
    NodoCoc *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(cocinas==aux1){
        cocinas=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void insertarLav(NodoLav *&lavadoras,Lavadora lav){
    NodoLav *nuevo_nodo=new NodoLav;
    nuevo_nodo->dato=lav;
    NodoLav *aux1=lavadoras;
    NodoLav *aux2;
    while(aux1!=NULL){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lavadoras==aux1){
        lavadoras=nuevo_nodo;
    }
    else{
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}
void mostrarTvs(NodoTv *teles,bool cond){
    NodoTv *actual=new NodoTv();
    actual=teles;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarTv();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarTv();
            }
        }
        actual=actual->siguiente;
    }

}
void mostrarEqs(NodoEq *equipos,bool cond){
    NodoEq *actual=new NodoEq();
    actual=equipos;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarEquipo();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarEquipo();
            }
        }
        actual=actual->siguiente;
    }
    
 
}
void mostrarRefs(NodoRef *refris,bool cond){
    NodoRef *actual=new NodoRef();
    actual=refris;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarRefrigerador();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarRefrigerador();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarMics(NodoMic *microos,bool cond){
    NodoMic *actual=new NodoMic();
    actual=microos;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarMicroondas();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarMicroondas();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarLics(NodoLic *licuadoras,bool cond){
    NodoLic *actual=new NodoLic();
    actual=licuadoras;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarLicuadora();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarLicuadora();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarCafs(NodoCaf *cafeteras,bool cond){
    NodoCaf *actual=new NodoCaf();
    actual=cafeteras;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarCafetera();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarCafetera();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarTerms(NodoTerm *termos,bool cond){
    NodoTerm *actual=new NodoTerm();
    actual=termos;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarTermo();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarTermo();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarCocs(NodoCoc *cocinas,bool cond){
    NodoCoc *actual=new NodoCoc();
    actual=cocinas;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarCocina();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarCocina();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarLavs(NodoLav *lavadoras,bool cond){
    NodoLav *actual=new NodoLav();
    actual=lavadoras;
    while(actual!=NULL){
        if(cond==false){
            actual->dato.mostrarLavadora();
        }
        else{
            if(actual->dato.getAnioFab()<2018){
                actual->dato.mostrarLavadora();
            }
        }
        actual=actual->siguiente;
    }
}
void mostrarTvsA(NodoTv *teles,int anio){
    NodoTv *actual=new NodoTv();
    actual=teles;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarTv();
        }
        actual=actual->siguiente;
    }
}
void mostrarEqsA(NodoEq *equipos,int anio){
    NodoEq *actual=new NodoEq();
    actual=equipos;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarEquipo();
        }
        actual=actual->siguiente;
    }
}
void mostrarRefA(NodoRef *refris,int anio){
    NodoRef *actual=new NodoRef();
    actual=refris;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarRefrigerador();
        }
        actual=actual->siguiente;
    }
}
void mostrarMicsA(NodoMic *microos,int anio){
    NodoMic *actual=new NodoMic();
    actual=microos;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarMicroondas();
        }
        actual=actual->siguiente;
    }
}
void mostrarLicsA(NodoLic *licuadoras,int anio){
    NodoLic *actual=new NodoLic();
    actual=licuadoras;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarLicuadora();
        }
        actual=actual->siguiente;
    }
}
void mostrarCafsA(NodoCaf *cafeteras,int anio){
    NodoCaf *actual=new NodoCaf();
    actual=cafeteras;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarCafetera();
        }
        actual=actual->siguiente;
    }
}
void mostrarTermsA(NodoTerm *termos,int anio){
    NodoTerm *actual=new NodoTerm();
    actual=termos;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarTermo();
        }
        actual=actual->siguiente;
    }
}
void mostrarCocsA(NodoCoc *cocinas,int anio){
    NodoCoc *actual=new NodoCoc();
    actual=cocinas;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarCocina();
        }
        actual=actual->siguiente;
    }
}
void mostrarLavsA(NodoLav *lavadoras,int anio){
    NodoLav *actual=new NodoLav();
    actual=lavadoras;
    while(actual!=NULL){
        if(actual->dato.getAnioFab()==anio){
            actual->dato.mostrarLavadora();
        }
        actual=actual->siguiente;
    }
}