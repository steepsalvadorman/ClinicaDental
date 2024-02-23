#include <iostream>
using namespace std;
#define precioLimpieza 174000
#define precioBlanqueamiento 70000
#define precioExtraccion 40000
#define precioTapadura 30000

struct fecha {
    int anio;
    int mes;
    int dia;
    int hora;
    int min;
};
//////////////////////


///////////////////////
struct servicio{
    bool limpieza;
    bool blanquiamiento;
    int tapadura;
    int extraccion;
};

/////////////////////
struct pacientes{
    string nombre;
    int edad;
    string sexo;
    int total;
    struct fecha atencion;
    struct servicio serv;
}lista[20];
//////////////////////////////
void Mostrar(){
    for (int i = 0; i < 20; ++i) {
        cout<<"nombre: "<<lista[i].nombre<<"\n";
        cout<<"edad: "<<lista[i].edad<<"\n";
        cout<<"sexo: "<<lista[i].sexo<<"\n";
        cout<<"servicios realizados: \n";
        cout<<"----------------------------\n";
        cout<<"limpieza: "<<lista[i].serv.limpieza<<"\n";
        cout<<"blanqueamiento: " <<lista[i].serv.blanquiamiento<<"\n";
        cout<<"tapaduras realizadas: "<<lista[i].serv.tapadura<<"\n";
        cout<<"extracciones realizadas: "<<lista[i].serv.extraccion<<"\n";
        cout<<"fecha de atencion programada:"<<lista[i].atencion.dia<<"\\"<<lista[i].atencion.mes<<"\\"
        <<lista[i].atencion.anio<<"       "<<"hora programada:"<<lista[i].atencion.hora<<":"<<lista[i].atencion.min<<"\n";
        cout<<"----------------------------\n";
        cout<<"total a pagar: "<<lista[i].total<<"\n\n\n";


    }
}





int main() {
    Mostrar();
    return 0;
}
