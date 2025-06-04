#include <iostream>
#include <cmath>
using namespace std;
//Calcula la tarifa segun el consumo if(19)
//for(3) Suma de los primeros N numeros 
//While y do-while 18
//Switch (9)
//Arreglo (5)

//Ejercicio if
int main(){
    //Tarifa luz electrica
    //Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.
    int tarifa, consumo;
    cout << "Por favor ingree su consumo de luz electrica (menor a 100kWh a mas de 200kwh) " << endl;
    cin >> consumo;
    if (consumo < 100){
        cout << "Su tarifa es baja." << endl;
    } else if (consumo >= 100 && consumo < 200){
        cout << "Su tarifa es media." << endl;
    } else if (consumo > 200){
        cout << "Su tarifa es alta." << endl;
    }
    return 0;
}

//Ejercicio for 
int main(){
//Suma de los primeros N numeros 
//Solicita un número N al usuario y calcula la suma de los primeros N números naturales.
int number;
cout << "Ingrese una cantidad N numeros a sumar." << endl;
cin>> number;
for(int i = 0; i <= number; ++i){
    int suma;
    suma = suma + i;
    cout << suma << endl; 

}
    return 0;
}

//Ejercicio While
int main(){
    //Juego de adivinanza con intentos limitados 
    //El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50
    int intentos = 5, num;
    


    return 0;
}

//Ejercicio Switch
int main(){
    //Dias en un mes 
    //Pide el número de un mes y muestra cuántos días tiene
    int month;
    cout << "Por favor ingrese el numero de un mes" << endl; 
    cout << "Ejemplo: enero es el mes 1. " << endl;
    cin >> month;
    switch(month){
        case 1:
        cout << "Enero tiene 31 dias." << endl;
        break;
        case 2:
        cout << "Febrero tiene 28 dias." << endl;
        break;
        case 3:
        cout << "Marzo tiene 31 dias." << endl;
        break;
        case 4:
        cout << "Abril tiene 30 dias." << endl;
        break;
        case 5:
        cout << "Mayo tiene 31 dias." << endl;
        break; 
        case 6:
        cout << "Junio tiene 30 dias." << endl;
        break;
        case 7:
        cout << "Julio tiene 31 dias." << endl;
        break;
        case 8:
        cout << "Agosto tiene 31 dias." << endl;
        break;
        case 9:
        cout << "Septiembre tiene 30 dias." << endl;
        break;
        case 10:
        cout << "Octubre tiene 31 dias." << endl;
        break;
        case 11:
        cout << "Noviembre tiene 30 dias." << endl;
        break;
        case 12:
        cout << "Diciembre tiene 31 dias." << endl;
        break;
    }


    return 0;
}

//Ejercicio Array
int main(){
    //Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.

    return 0;
}
