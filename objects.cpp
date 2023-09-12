#include<iostream>
#include<sstream>
#include<stdlib.h>
#include "string"
#include<string>
using namespace std;
//Crear clase padre Electrodoméstio
class ElecDom{
    //Atributos
    private:
        string codigo;
        string marca;
        int anioFab;
        float precio;
    //Métodos
    public:
        ElecDom();
        ~ElecDom();
        ElecDom(string _codigo,string _marca,int _anioFab,float _precio);
        void setCodigo(string _codigo);
        string getCodigo();
        void setMarca(string _marca);
        string getMarca();
        void setAnioFab(int _anioFab);
        int getAnioFab();
        void setPrecio(float _precio);
        float getPrecio();
        void leerElec();
        float precioElec();
        void mostrarElec();
};
//Crear subclase televisor
class Tv:public ElecDom{
    //Atributos
    private:
        float tamanio;
        string resolution;
        string tipoPant;
    //Métodos
    public:
        Tv();
        ~Tv();
        Tv(string _codigo,string _marca,int _anioFab,float _precio,float _tamanio,string _resolution,string _tipo);
        void setTamanio(float _tamanio);
        float getTamanio();
        void setResolution(string _resolution);
        string getResolution();
        void setTipoPant(string _tipoPant);
        string getTipoPant();
        void leerTv();
        void mostrarTv();
};
//Crear subclase equipo de sonido
class EquipSoun:public ElecDom{
    private:
        int canalesAud;
        int potencia;
        int puertosUsb;
    public:
        EquipSoun();
        ~EquipSoun();
        EquipSoun(string _codigo,string _marca,int _anioFab,float _precio,int _canalesAud,int _potencia,int _puertosUsb);
        void setCanaalesAud(int _canalesAud);
        int getCanalesAud();
        void setPotencia(int _potencia);
        int getPotencia();
        void setPuertosUsb(int _puertosUsb);
        int getPuertosUsb();
        void leerEquipo();
        void mostrarEquipo();
        
};
//Crear subclase refrigerador
class Refrigerador:public ElecDom{
    private:    
        int capacidad;
        string tipo;
    public:
        Refrigerador();
        ~Refrigerador();
        Refrigerador(string _codigo,string _marca,int _anioFab,float _precio,int _capacidad,string _tipo);
        void setCapacidad(int _capacidad);
        int getCapacidad();
        void setTipo(string _tipo);
        string getTipo();
        void leerRefrigerador();
        void mostrarRefrigerador();

};
//Crear subclase microondas
class Microondas:public ElecDom{
    private:    
        float tamanio;
        int capacidad;
    public:
        Microondas();
        ~Microondas();
        Microondas(string _codigo,string _marca,int _anioFab,float _precio,float _tamanio,int _capacidad);
        void setTamanio(float _tamanio);
        float getTamanio();
        void setCapacidad(int _capacidad);
        int getCapacidad();
        void leerMicroondas();
        void mostrarMicroondas();

};
//Crear subclase licuadora
class Licuadora:public ElecDom{
    private:
        string material;
        int velocidad;
    public:
        Licuadora();
        ~Licuadora();
        Licuadora(string _codigo,string _marca,int _anioFab,float _precio,string _material,int _velocidad);
        void setMaterial(string _material);
        string getMaterial();
        void setVelocidad(int _velocidad);
        int getVelocidad();
        void leerLicuadora();
        void mostrarLicuadora();

};
//Crear subclase cafetera
class Cafetera:public ElecDom{
    private:
        string tipo;
    public:
        Cafetera();
        ~Cafetera();
        Cafetera(string _codigo,string _marca,int _anioFab,float _precio,string _tipo);
        void setTipo(string _tipo);
        string getTipo();
        void leerCafetera();
        void mostrarCafetera();

};
//Crear subclase Termo
class Termo:public ElecDom{
    private:
        int nroQuemadores;
        float tamanio;
        int capacidad;
    public:
        Termo();
        ~Termo();
        Termo(string _codigo,string _marca,int _anioFab,float _precio,int _nroQuemadores,float _tamanio,int _capacidad);
        void setNroQuemadores(int _nroQuemadores);
        int getNroQuemadores();
        void setTamanio(float _tamanio);
        float getTamanio();
        void setCapacidad(int _capacidad);
        int getCapacidad();
        void leerTermo();
        void mostrarTermo();

};
//Crear subclase cocina
class Cocina:public ElecDom{
    private:
        int nroHornillas;
        float tamanio;
    public:
        Cocina();
        ~Cocina();
        Cocina(string _codigo,string _marca,int _anioFab,float _precio,int _nroHornillas,float _tamanio);
        void setNroHornillas(int _nroHornillas);
        int getNroHornillas();
        void setTamanio(float _tamanio);
        float getTamanio();
        void leerCocina();
        void mostrarCocina();

};
//Crear subclase lavadora
class Lavadora:public ElecDom{
    private:    
        int capacidadLavado;
        int capacidadSecado;
        string tipoEnergy;
    public:
        Lavadora();
        ~Lavadora();
        Lavadora(string _codigo,string _marca,int _anioFab,float _precio,int _capacidadLavado,int _capacidadSecado,string _tipoEnergy);
        void setCapacidadLavado(int _capacidadLavado);
        int getCapacidadLavado();
        void setCapacidadSecado(int _capacidadSecado);
        int getCapacidadSecado();
        void setTipoEnergy(string _tipoEnergy);
        string getTipoEnergy();
        void leerLavadora();
        void mostrarLavadora();    
};