#include "functions.cpp"
int main(){
    //Crear Listas
    NodoTv *teles=NULL;
    NodoEq *equipos=NULL;
    NodoRef *refris=NULL;
    NodoMic *microos=NULL;
    NodoLic *licuadoras=NULL;
    NodoCaf *cafeteras=NULL;
    NodoTerm *termos=NULL;
    NodoCoc *cocinas=NULL;
    NodoLav *lavadoras=NULL;
    //CREAR OBJETOS
    //Crear 10 objetos de la subclase televisor
    Tv tl1("TV001","Samsung",2019,4500,68,"8k","curvo"),tl2("TV002","Lg",2015,1200,39,"4k","plana");
    Tv tl3("TV003","LG",2016,1600,42,"4k","plana"),tl4("TV004","Sony",2018,2100,44,"8k","plana");
    Tv tl5("TV005","LG",2014,1400,34,"4k","plana"),tl6("TV006","Philips",2010,1100,39,"HD","plana");
    Tv tl7("TV007","Samsung",2018,3900,66,"8k","curvo"),tl8("TV008","HYUNDAI",2015,2100,53,"8k","curvo");
    Tv tl9("TV009","LG",2016,3100,44,"8k","plana"),tl10("TV010","Sony",2016,2900,39,"8k","curvo");
    insertarTv(teles,tl1);insertarTv(teles,tl2);insertarTv(teles,tl3);insertarTv(teles,tl4);insertarTv(teles,tl5);
    // insertarTv(teles,tl6);insertarTv(teles,tl7);insertarTv(teles,tl8);insertarTv(teles,tl9);insertarTv(teles,tl10);

    //Crear 10 objetos de la subclace equipo de sonido
    EquipSoun eqs1("ES001","Panasonic",2017,1299,2,2000,1),eqs2("ES002","Samsung",2018,1500,4,2000,2);
    EquipSoun eqs3("ES003","Prolink",2014,800,2,1200,1),eqs4("ES004","Panasonic",2016,1499,3,1200,1);
    EquipSoun eqs5("ES005","LG",2019,2000,4,5000,3),eqs6("ES006","Sony",2015,1000,2,1200,1);
    EquipSoun eqs7("ES007","Samsung",2012,850,1,1000,0),eqs8("ES008","Prolink",2014,900,1,1100,0);
    EquipSoun eqs9("ES009","Panasonic",2015,1100,2,1200,1),eqs10("ES010","Samsung",2019,1600,4,2400,2);
    //Insertar equipos a su respectiva lista
    insertarEq(equipos,eqs1);insertarEq(equipos,eqs2);insertarEq(equipos,eqs3);insertarEq(equipos,eqs4);insertarEq(equipos,eqs5);
    // insertarEq(equipos,eqs6);insertarEq(equipos,eqs7);insertarEq(equipos,eqs8);insertarEq(equipos,eqs9);insertarEq(equipos,eqs10);

    //Crear 10 objetos de la subclase refrigerador
    Refrigerador rf1("RF001","LG",2016,2099,450,"Frigobar"),rf2("RF002","Electrolux",2015,1599,250,"Vinera");
    Refrigerador rf3("RF003","Samsung",2019,3500,700,"Frigobar"),rf4("RF004","LG",2016,1600,400,"Congeladora");
    Refrigerador rf5("RF005","Mabe",2017,1700,550,"Side by side"),rf6("RF006","Coldex",2014,1499,460,"Frigobar");
    Refrigerador rf7("RF007","Bosch",2013,1200,370,"Vinera"),rf8("RF008","Coldex",2016,1999,580,"Frigobar");
    Refrigerador rf9("RF009","Elextrolux",2017,1800,500,"Vinera"),rf10("RF010","Bosch",2015,1450,550,"Top mount");
    //Insertar refrigeradores a su respectiva lista
    insertarRef(refris,rf1);insertarRef(refris,rf2);insertarRef(refris,rf3);insertarRef(refris,rf4);insertarRef(refris,rf5);
    // insertarRef(refris,rf6);insertarRef(refris,rf7);insertarRef(refris,rf8);insertarRef(refris,rf9);insertarRef(refris,rf10);

    //Crear 10 objetos de la subclase microondas
    Microondas mo1("MO001","Samsung",2012,320,60,25),mo2("MO002","Teka",2015,780,67,30);
    Microondas mo3("MO003","LG",2014,500,64,28),mo4("MO004","Panasonic",2019,1200,69,32);
    Microondas mo5("MO005","Samsung",2016,980,64,29),mo6("MO006","Electrolux",2015,900,61,27);
    Microondas mo7("MO007","Electrolux",2012,320,60,25),mo8("MO008","LG",2012,320,60,25);
    Microondas mo9("MO009","Panasonic",2016,1000,68,28),mo10("MO010","Panasonic",2018,1500,68,32);
    //Insertar microondas a su respectiva clase
    insertarMic(microos,mo1);insertarMic(microos,mo2);insertarMic(microos,mo3);insertarMic(microos,mo4);insertarMic(microos,mo5);
    // insertarMic(microos,mo6);insertarMic(microos,mo7);insertarMic(microos,mo8);insertarMic(microos,mo9);insertarMic(microos,mo10);
    
    //Crear 10 objetos de la clase licuadora
    Licuadora lc1("LC001","Oster",2014,150,"Vidrio",5),lc2("LC002","Taurus",2016,195,"Tritan",5);
    Licuadora lc3("LC003","Oster",2018,210,"SAN",14),lc4("LC004","Hp",2019,256,"Plastico",16);
    Licuadora lc5("LC005","Boch",2016,160,"Vidrio",8),lc6("LC006","Oster",2015,130,"Vidrio",8);
    Licuadora lc7("LC007","Oster",2012,100,"Acrilico",4),lc8("LC008","Oster",2016,166,"Vidrio",7);
    Licuadora lc9("LC009","Xiaomi",2017,150,"Vidrio",10),lc10("LC010","Boch",2017,200,"Tritan",12);
    //Insertar licuadoras a su respectiva lista
    insertarLic(licuadoras,lc1);insertarLic(licuadoras,lc2);insertarLic(licuadoras,lc3);insertarLic(licuadoras,lc4);insertarLic(licuadoras,lc5);
    // insertarLic(licuadoras,lc6);insertarLic(licuadoras,lc7);insertarLic(licuadoras,lc8);insertarLic(licuadoras,lc9);insertarLic(licuadoras,lc10);

    //Crear 10 objetos de la clase cafetera
    Cafetera cf1("CF001","Oster",2016,90,"Expreso"),cf2("CF002","SMEG",2017,1200,"Expreso");
    Cafetera cf3("CF003","Imaco",2014,200,"Filtro y goteo"),cf4("CF004","Oster",2018,1000,"Filtro y goteo");
    Cafetera cf5("CF005","Bosch",2016,100,"Expreso"),cf6("CF006","Imaco",2017,160,"Filtro y goteo");
    Cafetera cf7("CF007","Bosch",2018,210,"Filtro y goteo"),cf8("CF008","Oster",2014,89,"Expreso");
    Cafetera cf9("CF009","SMEG",2018,640,"Filtro y goteo"),cf10("CF010","SMEG",2012,80,"Filtro y goteo");
    //Insertar cafeteras a su respectiva clase
    insertarCaf(cafeteras,cf1);insertarCaf(cafeteras,cf2);insertarCaf(cafeteras,cf3);insertarCaf(cafeteras,cf4);insertarCaf(cafeteras,cf5);
    // insertarCaf(cafeteras,cf6);insertarCaf(cafeteras,cf7);insertarCaf(cafeteras,cf8);insertarCaf(cafeteras,cf9);insertarCaf(cafeteras,cf10);

    //Crear 10 objetos de la subclase termo
    Termo tm1("TM001","Oster",2015,39,4,60,21),tm2("TM002","Sole",2019,89,6,71,32);
    Termo tm3("TM003","Rotoplas",2016,60,6,61,24),tm4("TM004","Oster",2015,60,4,65,29);
    Termo tm5("TM005","Teka",2017,69,6,65,30),tm6("TM006","Oster",2012,30,3,58,20);
    Termo tm7("TM007","Imaco",2018,78,6,67,29),tm8("TM008","Sole",2017,59,6,64,27);
    Termo tm9("TM009","Rotoplas",2015,70,4,60,28),tm10("TM010","Teka",2013,52,4,64,26);
    //Insertar termos a su respectiva lista
    insertarTerm(termos,tm1);insertarTerm(termos,tm2);insertarTerm(termos,tm3);insertarTerm(termos,tm4);insertarTerm(termos,tm5);
    // insertarTerm(termos,tm6);insertarTerm(termos,tm7);insertarTerm(termos,tm8);insertarTerm(termos,tm9);insertarTerm(termos,tm10);

    //Crear 10 objetos de la subclase cocina
    Cocina cc1("CC001","LG",2018,1900,4,76.5),cc2("CC002","Electrolux",2019,3600,6,78);
    Cocina cc3("CC003","Mabe",2015,1500,4,69.2),cc4("CC004","LG",2016,1780,4,72);
    Cocina cc5("CC005","Mabe",2015,1300,4,70.9),cc6("CC006","SOLE",2018,2100,6,76.5);
    Cocina cc7("CC007","Electrolux",2012,1200,2,61),cc8("CC008","LG",2016,1800,4,69.9);
    Cocina cc9("CC009","Coldex",2018,1999,6,75),cc10("CC010","SOLE",2017,1699,4,66.6);
    //Insertar cocinas a su respectiva lista
    insertarCoc(cocinas,cc1);insertarCoc(cocinas,cc2);insertarCoc(cocinas,cc3);insertarCoc(cocinas,cc4);insertarCoc(cocinas,cc5);
    // insertarCoc(cocinas,cc6);insertarCoc(cocinas,cc7);insertarCoc(cocinas,cc8);insertarCoc(cocinas,cc9);insertarCoc(cocinas,cc10);
    
    //Crear 10 objetos de la subclase lavadora
    Lavadora lv1("LV001","Electrolux",2019,2199,10,8,"Electrica"),lv2("LV002","Panasonic",2012,1100,6,5,"Electrica");
    Lavadora lv3("LV003","LG",2018,1590,8,6,"Electrica"),lv4("LV004","Panasonic",2017,1599,9,7,"Electrica");
    Lavadora lv5("LV005","Electrolux",2016,1680,10,6,"Electrica"),lv6("LV006","Electrolux",2015,1900,9,8,"Electrica");
    Lavadora lv7("LV007","Bosch",2019,4000,11,10,"Gas"),lv8("LV008","Bosch",2018,3000,10,9,"Electrica");
    Lavadora lv9("LV009","Panasonic",2015,2200,9,9,"Electrica"),lv10("LV010","LG",2016,3600,11,8,"Electrica");
    //Insertar lavadoras a su respectiva lista
    insertarLav(lavadoras,lv1);insertarLav(lavadoras,lv2);insertarLav(lavadoras,lv3);insertarLav(lavadoras,lv4);insertarLav(lavadoras,lv5);
    // insertarLav(lavadoras,lv6);insertarLav(lavadoras,lv7);insertarLav(lavadoras,lv8);insertarLav(lavadoras,lv9);insertarLav(lavadoras,lv10);
    //Crear objetos auxiliares
    Tv auxTv=Tv();
    EquipSoun auxEq=EquipSoun();
    Refrigerador auxRef=Refrigerador();
    Microondas auxMic=Microondas();
    Licuadora auxLic=Licuadora();
    Cafetera auxCaf=Cafetera();
    Termo auxTerm=Termo();
    Cocina auxCoc=Cocina();
    Lavadora auxLav=Lavadora();

    int op,op2,op3,op4;
    int anioBus;

    do{
        cout<<endl<<"**********************************************"<<endl;
        cout<<"1.-Ver el stock de productos"<<endl;
        cout<<"2.-Agregar un producto"<<endl;
        cout<<"3.-Ver producto de una determinada clase"<<endl;
        cout<<"4.-Ver todos los productos con descuento"<<endl;
        cout<<"5.-Ver productos con descuento de una determinada clase"<<endl;
        cout<<"6.-Ver los productos de un determinado anio"<<endl;
        cout<<"7.-Salir"<<endl;
        cout<<"Ingrese una opcion: ";cin>>op;

        switch(op){
            case 1:
                cout<<endl<<"*******TELEVISORES*******"<<endl;
                mostrarTvs(teles,false);
                cout<<endl<<"*******EQUIPOS DE SONIDO*******"<<endl;
                mostrarEqs(equipos,false);
                cout<<endl<<"*******REFRIGERADORES******"<<endl;
                mostrarRefs(refris,false);
                cout<<endl<<"******MICROONDAS******"<<endl;
                mostrarMics(microos,false);
                cout<<endl<<"*******LICUADORAS*******"<<endl;
                mostrarLics(licuadoras,false);
                cout<<endl<<"*******CAFETERAS*******"<<endl;
                mostrarCafs(cafeteras,false);
                 cout<<endl<<"*******TERMOS*******"<<endl;
                mostrarTerms(termos,false);
                cout<<endl<<"*******COCINAS*******"<<endl;
                mostrarCocs(cocinas,false);
                cout<<endl<<"*******LAVADORAS*******"<<endl;
                mostrarLavs(lavadoras,false);
                break;
            case 2:
                cout<<endl<<"1.-Agregar un televisor"<<endl;
                cout<<"2.-Agrgar un equipo de sonido"<<endl;
                cout<<"3.-Agregar un refrigerador"<<endl;
                cout<<"4.-Agregar un microondas"<<endl;
                cout<<"5.-Agregar una licuadora"<<endl;
                cout<<"6.-Agregar una cafetera"<<endl;
                cout<<"7.-Agregar un termo"<<endl;
                cout<<"8.-Agregar una cocina"<<endl;
                cout<<"9.-Agregar una lavadora"<<endl;
                cout<<"Elija una opcion: ";cin>>op2;
                switch(op2){
                    case 1:
                        auxTv.leerTv();
                        insertarTv(teles,auxTv);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 2:
                        auxEq.leerEquipo();
                        insertarEq(equipos,auxEq);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 3:
                        auxRef.leerRefrigerador();
                        insertarRef(refris,auxRef);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 4:
                        auxMic.leerMicroondas();
                        insertarMic(microos,auxMic);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 5:
                        auxLic.leerLicuadora();
                        insertarLic(licuadoras,auxLic);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 6:
                        auxCaf.leerCafetera();
                        insertarCaf(cafeteras,auxCaf);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 7:
                        auxTerm.leerTermo();
                        insertarTerm(termos,auxTerm);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 8:
                        auxCoc.leerCocina();
                        insertarCoc(cocinas,auxCoc);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    case 9:
                        auxLav.leerLavadora();
                        insertarLav(lavadoras,auxLav);
                        cout<<endl<<"PRODUCTO ANADIDO"<<endl;
                        break;
                    default:
                        cout<<"La opcion ingresada no existe"<<endl;
                        break;
                }
                break;
            case 3:
                cout<<endl<<"1.-Ver televisores"<<endl;
                cout<<"2.-Ver equipos de sonido"<<endl;
                cout<<"3.-Ver refrigeradores"<<endl;
                cout<<"4.-Ver microondas"<<endl;
                cout<<"5.-Ver licuadoras"<<endl;
                cout<<"6.-Ver cafeteras"<<endl;
                cout<<"7.-Ver termos"<<endl;
                cout<<"8.-Ver cocinas"<<endl;
                cout<<"9.-Ver lavadoras"<<endl;
                cout<<"Ingrese una opcion: ";cin>>op3;
                switch(op3){
                    case 1:
                        mostrarTvs(teles,false);
                        break;
                    case 2:
                        mostrarEqs(equipos,false);
                        break;
                    case 3:
                        mostrarRefs(refris,false);
                        break;
                    case 4:
                        mostrarMics(microos,false);
                        break;
                    case 5:
                        mostrarLics(licuadoras,false);
                        break;
                    case 6:
                        mostrarCafs(cafeteras,false);
                        break;
                    case 7:
                        mostrarTerms(termos,false);
                        break;
                    case 8:
                        mostrarCocs(cocinas,false);
                        break;
                    case 9:
                        mostrarLavs(lavadoras,false);
                        break;
                    default:
                        cout<<"La opcion ingresada no existe"<<endl;
                        break;
                }
                break;
            case 4:
                cout<<endl<<"*******TELEVISORES CON DESCUENTO*******"<<endl;
                mostrarTvs(teles,true);
                cout<<endl<<"*******EQUIPOS DE SONIDO CON DESCUENTO*******"<<endl;
                mostrarEqs(equipos,true);
                cout<<endl<<"*******REFRIGERADORES CON DESCUENTO*******"<<endl;
                mostrarRefs(refris,true);
                cout<<endl<<"*******MICROONDAS CON DESCUENTO*******"<<endl;
                mostrarMics(microos,true);
                cout<<endl<<"*******LICUADORAS CON DESCUENTO*******"<<endl;
                mostrarLics(licuadoras,true);
                cout<<endl<<"*******CAFETERAS CON DESCUENTO*******"<<endl;
                mostrarCafs(cafeteras,true);
                cout<<endl<<"*******TERMOS CON DESCUENTO*******"<<endl;
                mostrarTerms(termos,true);
                cout<<endl<<"*******COCINAS CON DESCUENTO*******"<<endl;
                mostrarCocs(cocinas,true);
                cout<<endl<<"*******LAVADORAS CON DESCUENTO*******"<<endl;
                mostrarLavs(lavadoras,true);
                break;
            case 5:
                cout<<endl<<"1.-Ver televisores con descuento"<<endl;
                cout<<"2.-Ver equipos de sonido con descuento"<<endl;
                cout<<"3.-Ver refrigeradores con descuento"<<endl;
                cout<<"4.-Ver microondas con descuento"<<endl;
                cout<<"5.-Ver licuadoras con descuento"<<endl;
                cout<<"6.-Ver cafeteras con descuento"<<endl;
                cout<<"7.-Ver termos con descuento"<<endl;
                cout<<"8.-Ver cocinas con descuentos"<<endl;
                cout<<"9.-Ver lavadoras con descuento"<<endl;
                cout<<"Elija una opcion: ";cin>>op4;

                switch(op4){
                    case 1:
                        mostrarTvs(teles,true);
                        break;
                    case 2:
                        mostrarEqs(equipos,true);
                        break;
                    case 3:
                        mostrarRefs(refris,true);
                        break;
                    case 4:
                        mostrarMics(microos,true);
                        break;
                    case 5:
                        mostrarLics(licuadoras,true);
                        break;
                    case 6:
                        mostrarCafs(cafeteras,true);
                        break;
                    case 7:
                        mostrarTerms(termos,true);
                        break;
                    case 8:
                        mostrarCocs(cocinas,true);
                        break;
                    case 9:
                        mostrarLavs(lavadoras,true);
                        break;
                    default:
                        cout<<"La opcion ingresada no existe"<<endl;
                        break;

                }
                break;
            case 6:
                cout<<endl<<"Ingrese el anio a buscar: ";cin>>anioBus;
                cout<<endl<<"*******TELEVISORES DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarTvsA(teles,anioBus);
                cout<<endl<<"*******EQUIPOS DE SONIDO DEL ANIO "<<anioBus<<" *******"<<endl; 
                mostrarEqsA(equipos,anioBus);     
                cout<<endl<<"*******REFRIGERADORES DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarRefA(refris,anioBus);
                cout<<endl<<"*******MICROONDAS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarMicsA(microos,anioBus);
                cout<<endl<<"*******LICUADORAS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarLicsA(licuadoras,anioBus);
                cout<<endl<<"*******CAFETERAS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarCafsA(cafeteras,anioBus);
                cout<<endl<<"*******TERMOS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarTermsA(termos,anioBus);
                cout<<endl<<"*******COCINAS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarCocsA(cocinas,anioBus);
                cout<<endl<<"*******LAVADORAS DEL ANIO "<<anioBus<<" *******"<<endl;
                mostrarLavsA(lavadoras,anioBus);
                break; 
            case 7:
                break;
            default:
                cout<<"La opcion ingresada no existe"<<endl;
                break;

        }
        cout<<endl;
        // system("pause");
        system("cls");

    }while(op!=7);
    cout<<"***********FIN DEL PROGRAMA**********"<<endl;
    // system("pause");
    return 0;
}