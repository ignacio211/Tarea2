/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ignacio
 *
 * Created on 25 de abril de 2019, 2:32
 */

#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int largo=100000; // se define el largo del vector
    int vector[largo];
    int opcion;
    float suma=0;
    float promedio=0;
    float var=0;
    float varianza=0;
    float desv_std=0;
    
    
    srand(time(NULL));
    
    cout << "Mostrando elementos del vector:  \n" << endl;
    
    for (int i=0; i<largo ; i++)
    {
        vector[i]=rand(); // se asignan valores random al vector
        suma=vector[i] + suma;
        cout << "Elemento" << "[" << i << "]" << ":" << vector[i] << endl;
    }
    
    promedio=(suma/largo);
    
    for(int i=0; i<largo; i++)
    {
        var= pow((vector[i]-promedio),2) + var;
    }
                  
    varianza=(var/largo);   
    desv_std=sqrt(varianza);
                   
    
    
    cout << "-------------------------------------------------------------------" << endl;
    
    while(opcion!=4)
    {
        cout << "" << endl;
        cout << "Menu de Opciones \n" << endl;
        cout << " Opcion 1: Promedio de los elementos del vector \n";
        cout << " Opcion 2: Varianza de los elementos del vector \n ";
        cout << "Opcion 3: Desviacion Estandar de los elementos del vector \n";
        cout << " Opcion 4: Salir \n";
    
        cout << " Seleccione una opcion: ";
        cin >> opcion;
    
        
        while(opcion > 4 or opcion < 1)
        {
            cout << " Error: Opcion ingresada no valida \n";
            cout << " Seleccione una opcion: ";
            cin >> opcion;
        }
        
    
        switch(opcion)
        {
    
            case 1: cout << " El promedio de los elementos del vector es: " << promedio << endl;
                    break;
        
            case 2: cout << " La varianza de los elementos del vector es: " << varianza << endl;;
                    break;
        
            case 3: cout << " La desviacion estandar de los elementos del vector es: " <<  desv_std << endl;
                    break;
        
            
        }
    
     
   
    }
    
}
