//Incluir archivo cpp donde son declarados los objetos, sus atribuots y métodos a desarrollar
#include "objects.cpp"

//Construccion de clase electrodomestico
ElecDom::ElecDom(){
    codigo="";
    marca="";
    anioFab=0;
    precio=0.0;
}
//Propiedades set and get
ElecDom::ElecDom(string _codigo,string _marca,int _anioFab,float _precio){
    codigo=_codigo;
    marca=_marca;
    anioFab=_anioFab;
    precio=_precio;
}
void ElecDom::setCodigo(string _codigo){
    codigo=_codigo;
}
string ElecDom::getCodigo(){
    return codigo;
}
void ElecDom::setMarca(string _marca){
    marca=_marca;
}
string ElecDom::getMarca(){
    return marca;
}
void ElecDom::setAnioFab(int _anioFab){
    anioFab=_anioFab;
}
int ElecDom::getAnioFab(){
    return anioFab;
}
void ElecDom::setPrecio(float _precio){
    precio=_precio;
}
float ElecDom::getPrecio(){
    return precio;
}
//Desarrollo de métodos
float ElecDom::precioElec(){
    if(anioFab<2018){
        return precio*0.9;
    }
    else{
        return precio;
    }
}
void ElecDom::leerElec(){
    cout<<endl;
    cout<<"INGRESAR DATOS PARA ELECTRODOMESTICO"<<endl;
    cout<<"Ingresar codigo: ";cin>>codigo;
    cout<<"Ingresar marca de producto: ";cin>>marca;
    cout<<"Ingresar anio del producto: ";cin>>anioFab;
    cout<<"Ingresar precio del producto: ";cin>>precio;
}
void ElecDom::mostrarElec(){
    cout<<endl;
    cout<<"DATOS DE ELECTRODOMESTICO"<<endl;
    cout<<"Codigo producto: "<<codigo<<endl;
    cout<<"Marca producto: "<<marca<<endl;
    cout<<"Anio producto: "<<anioFab<<endl;
    cout<<"Precio producto: S/"<<precioElec()<<endl;
}
ElecDom::~ElecDom(){}
//Construccion de subclase televisor
Tv::Tv():ElecDom(){
    tamanio=0;
    resolution="";
    tipoPant="";
}
Tv::Tv(string _codigo,string _marca,int _anioFab,float _precio,float _tamanio,string _resolution,string _tipoPant):ElecDom(_codigo,_marca,_anioFab,_precio){
    tamanio=_tamanio;
    resolution=_resolution;
    tipoPant=_tipoPant;
}
//Propiedades set and get
void Tv::setTamanio(float _tamanio){
    tamanio=_tamanio;
}
float Tv::getTamanio(){
    return tamanio;
}
void Tv::setResolution(string _resolution){
    resolution=_resolution;
}
string Tv::getResolution(){
    return resolution;
}
void Tv::setTipoPant(string _tipoPant){
    tipoPant=_tipoPant;
}
string Tv::getTipoPant(){
    return tipoPant;
}
//Desarrollo de métodos
void Tv::leerTv(){
    leerElec();
    cout<<"INGRESAR DATOS DE TELEVISOR"<<endl;
    cout<<"Ingresar el tamanio de pantalla: ";cin>>tamanio;
    cout<<"Ingresar la resolucion del televisor: ";cin>>resolution;
    cout<<"Ingresar el tipo de pantalla: ";cin>>tipoPant;
}
void Tv::mostrarTv(){
    mostrarElec();
    cout<<"DATOS DE TELEVISOR"<<endl;
    cout<<"Tamanio de pantalla: "<<tamanio<<" pulgadas"<<endl;
    cout<<"Resolucion: "<<resolution<<endl;
    cout<<"Tipo de pantalla: "<<tipoPant<<endl;
}
Tv::~Tv(){}
//Construccion de subclase Equipo de sonido
EquipSoun::EquipSoun():ElecDom(){
    canalesAud=0;
    potencia=0;
    puertosUsb=0;
}
EquipSoun::EquipSoun(string _codigo,string _marca,int _anioFab,float _precio,int _canalesAud,int _potencia,int _puertosUsb):ElecDom(_codigo,_marca,_anioFab,_precio){
    canalesAud=_canalesAud;
    potencia=_potencia;
    puertosUsb=_puertosUsb;
}
//Propiedades set and get
void EquipSoun::setCanaalesAud(int _canalesAud){
    canalesAud=_canalesAud;
}
int EquipSoun::getCanalesAud(){
    return canalesAud;
}
void EquipSoun::setPotencia(int _potencia){
    potencia=_potencia;
}
int EquipSoun::getPotencia(){
    return potencia;
}
void EquipSoun::setPuertosUsb(int _puertosUsb){
    puertosUsb=_puertosUsb;
}
int EquipSoun::getPuertosUsb(){
    return puertosUsb;
}
//Desarrollo de métodos
void EquipSoun::leerEquipo(){
    leerElec();
    cout<<"INGRESAR DATOS DE EQUIPO DE SONIDO"<<endl;
    cout<<"Ingresar la cantidad de canales de audio: ";cin>>canalesAud;
    cout<<"Ingresar la potencia del equipo: ";cin>>potencia;
    cout<<"Ingresar la cantidad de puertos USB del equipo: ";cin>>puertosUsb;
}
void EquipSoun::mostrarEquipo(){
    mostrarElec();
    cout<<"DATOS DE EQUIPO DE SONIDO"<<endl;
    cout<<"Canales de audio: "<<canalesAud<<endl;
    cout<<"Potencia: "<<potencia<<" W"<<endl;
    cout<<"Cantidad de puertos USB: "<<puertosUsb<<endl;
}
EquipSoun::~EquipSoun(){}
//Constructor de subclase refrigerador
Refrigerador::Refrigerador():ElecDom(){
    capacidad=0;
    tipo="";
}
Refrigerador::Refrigerador(string _codigo,string _marca,int _anioFab,float _precio,int _capacidad,string _tipo):ElecDom(_codigo,_marca,_anioFab,_precio){
    capacidad=_capacidad;
    tipo=_tipo;
}
//Propiedades set and get
void Refrigerador::setCapacidad(int _capacidad){
    capacidad=_capacidad;
}
int Refrigerador::getCapacidad(){
    return capacidad;
}
void Refrigerador::setTipo(string _tipo){
    tipo=_tipo;
}
string Refrigerador::getTipo(){
    return tipo;
}
//Desarrollo de métodos
void Refrigerador::leerRefrigerador(){
    leerElec();
    cout<<"INGRESAR DATOS DE REFRIGERADOR"<<endl;
    cout<<"Ingresar la capacidad del refrigerador: ";cin>>capacidad;
    cout<<"Ingresar el tipo de refrigerador: ";cin>>tipo;
}
void Refrigerador::mostrarRefrigerador(){
    mostrarElec();
    cout<<"DATOS DE REFRIGERADOR"<<endl;
    cout<<"Capacidad: "<<capacidad<<" lts"<<endl;
    cout<<"Tipo de refrigerador: "<<tipo<<endl;
}
Refrigerador::~Refrigerador(){}
//Constructor de subclase microondas
Microondas::Microondas():ElecDom(){
    tamanio=0.0;
    capacidad=0;
}
Microondas::Microondas(string _codigo,string _marca,int _anioFab,float _precio,float _tamanio,int _capacidad):ElecDom(_codigo,_marca,_anioFab,_precio){
    tamanio=_tamanio;  
    capacidad=_capacidad;  
}
//Propiedades set and get
void Microondas::setTamanio(float _tamanio){
    tamanio=_tamanio;
}
float Microondas::getTamanio(){
    return tamanio;
}
void Microondas::setCapacidad(int _capacidad){
    capacidad=_capacidad;
}
int Microondas::getCapacidad(){
    return capacidad;
}
//Desarrollo de métodos
void Microondas::leerMicroondas(){
    leerElec();
    cout<<"INGRESAR DATOS DE MICROONDAS"<<endl;
    cout<<"Ingresar el tamanio del microondas: ";cin>>tamanio;
    cout<<"Ingresar la capacidad del microondas: ";cin>>capacidad;
}
void Microondas::mostrarMicroondas(){
    mostrarElec();
    cout<<"DATOS DE MICROONDAS"<<endl;
    cout<<"Tamanio de microondas: "<<tamanio<<" cm"<<endl;
    cout<<"Capacidad de microondas: "<<capacidad<<" litros"<<endl;
}
Microondas::~Microondas(){}
//Constructtor de subclase licuadora
Licuadora::Licuadora():ElecDom(){
    material="";
    velocidad=0;
} 
Licuadora::Licuadora(string _codigo,string _marca,int _anioFab,float _precio,string _material,int _velocidad):ElecDom(_codigo,_marca,_anioFab,_precio){
    material=_material;
    velocidad=_velocidad;
}
//Propiedades set and get
void Licuadora::setMaterial(string _material){
    material=_material;
}
string Licuadora::getMaterial(){
    return material;
}
void Licuadora::setVelocidad(int _velocidad){
    velocidad=_velocidad;
}
int Licuadora::getVelocidad(){
    return velocidad;
}
//Desarrollo de métodos
void Licuadora::leerLicuadora(){
    leerElec();
    cout<<"INGRESAR DATOS DE LICUADORA"<<endl;
    cout<<"Ingresar el material de vaso de la licuadora: ";cin>>material;
    cout<<"Ingresar la velocidad de la licuadora: ";cin>>velocidad;
}
void Licuadora::mostrarLicuadora(){
    mostrarElec();
    cout<<"DATOS DE LICUADORA"<<endl;
    cout<<"Material del vaso: "<<material<<endl;
    cout<<"Velocidad de licuadora: "<<velocidad<<endl;
}
Licuadora::~Licuadora(){}
//Constructor de subclase cafetera
Cafetera::Cafetera():ElecDom(){
    tipo="";
}
Cafetera::Cafetera(string _codigo,string _marca,int _aniofab,float _precio,string _tipo):ElecDom(_codigo,_marca,_aniofab,_precio){
    tipo=_tipo;
}
//Propiedades set and get
void Cafetera::setTipo(string _tipo){
    tipo=_tipo;
}
string Cafetera::getTipo(){
    return tipo;
}
//Desarrollo de métodos
void Cafetera::leerCafetera(){
    leerElec();
    cout<<"INGRESAR DATOS DE CAFETERA"<<endl;
    cout<<"Ingresar el tipo de cafetera: ";cin>>tipo;
}
void Cafetera::mostrarCafetera(){
    mostrarElec();
    cout<<"DATOS DE CAFETERA"<<endl;
    cout<<"Tipo de cafetera: "<<tipo<<endl;
}
Cafetera::~Cafetera(){}
//Constructor de subclase termo
Termo::Termo():ElecDom(){
    nroQuemadores=0;
    tamanio=0;
    capacidad=0;
}
Termo::Termo(string _codigo,string _marca,int _anioFab,float _precio,int _nroQuemadores,float _tamanio,int _capacidad):ElecDom(_codigo,_marca,_anioFab,_precio){
    nroQuemadores=_nroQuemadores;
    tamanio=_tamanio;
    capacidad=_capacidad;
}
//Propiedades set and get
void Termo::setNroQuemadores(int _nroQuemadores){
    nroQuemadores=_nroQuemadores;
}
int Termo::getNroQuemadores(){
    return nroQuemadores;
}
void Termo::setTamanio(float _tamanio){
    tamanio=_tamanio;
}
float Termo::getTamanio(){
    return tamanio;
}
void Termo::setCapacidad(int _capacidad){
    capacidad=_capacidad;
}
int Termo::getCapacidad(){
    return capacidad;
}
//Desarrollo de métodos
void Termo::leerTermo(){
    leerElec();
    cout<<"INGRESAR DATOS DE TERMO"<<endl;
    cout<<"Ingresar el numero de quemadores: ";cin>>nroQuemadores;
    cout<<"Ingresar el tamanio del termo: ";cin>>tamanio;
    cout<<"Ingresar numero de litrajes del termo: ";cin>>capacidad;
}
void Termo::mostrarTermo(){
    mostrarElec();
    cout<<"DATOS DE TERMO"<<endl;
    cout<<"Numero de quemadores: "<<nroQuemadores<<endl;
    cout<<"Tamanio del termo: "<<tamanio<<" cm"<<endl;
    cout<<"Litrajes del termo: "<<capacidad<<" litros"<<endl;
}
Termo::~Termo(){}
//Constructor la subclase cocina
Cocina::Cocina():ElecDom(){
    nroHornillas=0;
    tamanio=0.0;
}
Cocina::Cocina(string _codigo,string _marca,int _anioFab,float _precio,int _nroHornillas,float _tamanio):ElecDom(_codigo,_marca,_anioFab,_precio){
    nroHornillas=_nroHornillas;
    tamanio=_tamanio;
}
//Propiedades set and get
void Cocina::setNroHornillas(int _nroHornillas){
    nroHornillas=_nroHornillas;
}
int Cocina::getNroHornillas(){
    return nroHornillas;
}
void Cocina::setTamanio(float _tamanio){
    tamanio=_tamanio;
}
float Cocina::getTamanio(){
    return tamanio;
}
//Desarrollo de métodos
void Cocina::leerCocina(){
    leerElec();
    cout<<"INGRESAR DATOS DE COCINA"<<endl;
    cout<<"Ingresar el numero de hornillas: ";cin>>nroHornillas;
    cout<<"Ingresar el ancho de la cocina: ";cin>>tamanio;
}
void Cocina::mostrarCocina(){
    mostrarElec();
    cout<<"DATOS DE COCINA"<<endl;
    cout<<"Numero de hornillas: "<<nroHornillas<<endl;
    cout<<"Ancho de cocina: "<<tamanio<<" cm"<<endl;
}
Cocina::~Cocina(){}
//Constructor de subclase lavadora
Lavadora::Lavadora():ElecDom(){
    capacidadLavado=0;
    capacidadSecado=0;
    tipoEnergy="";
}
Lavadora::Lavadora(string _codigo,string _marca,int _anioFab,float _precio,int _capacidadLavado,int _capacidadSecado,string _tipoEnergy):ElecDom(_codigo,_marca,_anioFab,_precio){
    capacidadLavado=_capacidadLavado;
    capacidadSecado=_capacidadSecado;
    tipoEnergy=_tipoEnergy;
}
//Propiedades set and get
void Lavadora::setCapacidadLavado(int _capacidadLavado){
    capacidadLavado=_capacidadLavado;
}
int Lavadora::getCapacidadLavado(){
    return capacidadLavado;
}
void Lavadora::setCapacidadSecado(int _capacidadSecado){
    capacidadSecado=_capacidadSecado;
}
int Lavadora::getCapacidadSecado(){
    return capacidadSecado;
}
void Lavadora::setTipoEnergy(string _tipoEnergy){
    tipoEnergy=_tipoEnergy;
}
string Lavadora::getTipoEnergy(){
    return tipoEnergy;
}
//Desarrollo de métodos
void Lavadora::leerLavadora(){
    leerElec();
    cout<<"INGRESAR DATOS DE LAVADORA"<<endl;
    cout<<"Ingresar la capacidad de lavado: ";cin>>capacidadLavado;
    cout<<"Ingresar la capacidad de secado: ";cin>>capacidadSecado;
    cout<<"Ingrese el tipo de energia: ";cin>>tipoEnergy;
}
void Lavadora::mostrarLavadora(){
    mostrarElec();
    cout<<"DATOS DE LAVADORA"<<endl;
    cout<<"Capacidad de lavado: "<<capacidadLavado<<" Kg"<<endl;
    cout<<"Caapcidad de secado: "<<capacidadSecado<<" Kg"<<endl;
    cout<<"Tipo de energia: "<<tipoEnergy<<endl;
}
Lavadora::~Lavadora(){}