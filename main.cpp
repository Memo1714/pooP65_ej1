#include <iostream>
using namespace std;
double verificarNotas(double nota){
    if(nota>10 or nota<0){
        cout<<"Nota fuera de rango";

    }
};
string estado_alumno(double promedio){

    if (promedio>=7){
        cout<<"El estado del alumno es: Aprobado";
    }else if (promedio>=5 and promedio<7){
        cout<<"El estado del alumno es: Suspendido";
    }else if (promedio>=1 and promedio<5){
        cout<<"El estado del alumno es: Reprobado";
    }

};
int main(){
    string rango;
    double notas[4];
    double promedio;
    string estado;
    cout<<"****Ingreso de Notas****"<<endl;
    for(int i=0;i<4;i++){

        do{

            cout<<"Ingrese la nota "<<"["<<i+1<<"]"<<":";
            cin>>notas[i];
            rango=verificarNotas(notas[i]);
            cout<<rango<<endl;

        }while(notas[i]<0 or notas[i]>10);
    }
    promedio=(notas[0]+notas[1]+notas[2]+notas[3])/4;
    cout<<"El Promedio es: "<<promedio<<endl;
    estado=estado_alumno(promedio);

    return 0;
}
