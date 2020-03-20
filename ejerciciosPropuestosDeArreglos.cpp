#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Esta función es solo de prueba
void imprimirNumeros(int a[], int e ){
	for(int i = 0; i < e; i++){
		cout << a[i] << endl;
	}
}

void dosArrays(){
	int perico[5] = {};
	int perico2[5] = {};
	int perico3[10] = {};
	
	for(int i = 0; i < 5; i++){
		perico[i] = rand()%51;
		perico2[i] = rand()%51;
	}
	
	for(int i = 0; i < 5; i++){
			perico3[i] = perico[i];
			perico3[i+5] = perico2[i];
	}
	
	imprimirNumeros(perico, 5);
	imprimirNumeros(perico2, 5);
	
	imprimirNumeros(perico3, 10);
}

int sumar(int a[]){
	int suma = 0;
	for(int i = 0; i < 10; i++){
		suma += a[i];
	}
	return suma;
}

int restar(int a[]){
	int resta = 0;
	for(int i = 0; i < 10; i++){
		resta -= a[i];
	}
	return resta;
}

int multiplicar(int a[]){
	int multiplicacion = a[0];
	for(int i = 1; i < 10; i++){
		multiplicacion *= a[i];
	}
	return multiplicacion;
}

float dividir(int a[]){
	float dividir = a[0];
	for(int i = 1; i < 10; i++){
		dividir /= a[i];
	}
	return dividir;
}

int operacionesDeMatrices(){
	int num[10] = {};
	int opc;
	int r;
	for(int i = 0; i < 10; i++){
		num[i] = rand()%51;
	}
	//imprimirNumeros(num);
	do{
		cout<<"Que operacion quieres realizar" << endl << "1.Sumar" << endl << "2.Restar" << endl << "3.Multiplicar" << endl << "4.Dividirr" << endl << "Opcion: ";
		cin >> opc;
		switch(opc){
			case 1:
				cout << "El resultado de la suma es: " << sumar(num) << endl;
				break;
			case 2:
				cout << "El resultado de la resta es: " << restar(num) << endl;
				break;
			case 3:
				cout << "El resultado de la multiplicacion es: " << multiplicar(num) << endl;
				break;
			case 4:
				cout << "El resultado de la division es: " << dividir(num) << endl;
				break;
			default:
				cout << "Esta opcion no existe" << endl;
				break;
		}
		cout<<"¿Quieres hacer otra operación" << endl << "1.Si" << endl << "2.No" << endl << "Opcion: ";
		cin >> r;
	}while(r==1);
	return 0;
}

void multiplicarArreglo(){
	int arreglo[5] = {};
	int arreglo2[5] = {};
	for(int i = 0; i < 5; i++){
		arreglo[i] = rand()%51;
	}
	
	for(int i = 0; i < 5; i++){
		arreglo2[i] = arreglo[i] * 2;
	}
	
	cout<<"Primeros numeros" << endl;
	imprimirNumeros(arreglo, 5);
	cout << "********************" << endl << "Segundo arreglo" << endl;
	imprimirNumeros(arreglo2, 5);
}

void promedio(){
	int cali[10] = {};
	int total = 0;
	float promedio = 0;
	for(int i = 0; i < 10; i++){
		cali[i] = rand()%11;
		total += cali[i];
	}
	
	imprimirNumeros(cali, 10);
	promedio = total / (float)10;
	
	cout << "El promedio es: " << promedio << endl;
	
}

void mayorMenor(int cantidad, int opc, int a[]){
	int empleadomayor[2] = {};
	int empleadomenor[2] = {};
	for(int i = 0; i < cantidad-1; i++){
		if(i == 0){
			empleadomayor[0] = i;
			empleadomayor[1] = a[i];
			empleadomenor[0] = i;
			empleadomenor[1] = a[i]; 
		}
		if(empleadomenor[1] > a[i+1]){
			empleadomenor[0] = i+1;
			empleadomenor[1] = a[i+1]; 
		}
		if(empleadomayor[1] < a[i+1]){
			empleadomayor[0] = i+1;
			empleadomayor[1] = a[i+1]; 
		}
	}
	
	if(opc == 1){
		cout << "El empleado numero " << empleadomayor[0]+1 << " es el que recibe mas sueldo, $" << empleadomayor[1] << endl;
		cout << "El empleado numero " << empleadomenor[0]+1 << " es el que recibe menos sueldo, $" << empleadomenor[1] << endl;
	} else{
		cout << "El estudiante numero " << empleadomayor[0]+1 << " es el promedio mas alto con " << empleadomayor[1] << endl;
		cout << "El estudiante numero " << empleadomenor[0]+1 << " es el promedio mas bajo con " << empleadomenor[1] << endl;
	}
}

void empleados(){
	int sueldo[10] = {};
	for(int i = 0; i < 10; i++){
		sueldo[i] = rand()%201;
		cout << "Al empleado numero " << (i+1) << endl;
		cout << "Se le paga a la semana $" << sueldo[i] * 7 << endl;
		cout << "Al mes $ " << sueldo[i] * 30 << endl;
		cout << "Al anio $ " << sueldo[i] * 365 << endl;
	}
	
	mayorMenor(10,1, sueldo);
}

void promedioAlumnos(){
	int nAlumnos = 0;
	int sumaP = 0;
	float promedio = 0;
	int opc = 0;
	do{
		do{
			cout << "Cuantos alumnos vas a ingresar?" << endl;
			cin >> nAlumnos;
			if(nAlumnos < 20){
				cout << "Lo siento, no puedes ingresar menos de 20 alumnos" << endl;
			} else if(nAlumnos > 30){
				cout << "Lo siento, no puedes ingresar mas de 30 alumnos" << endl;
			}
		}while(nAlumnos < 20 || nAlumnos > 30);
		
		int cali[nAlumnos] = {};
		int cali2[nAlumnos] = {};
		
		for(int i = 0; i < nAlumnos; i++){
			cali[i] = rand()%11;
			sumaP += cali[i];
		}
		
		promedio = sumaP / nAlumnos;
		cout << "El promedio general del salon es: " << promedio << endl;
		mayorMenor(nAlumnos, 2, cali);
		
		for(int i = 0; i < nAlumnos; i++){
			if(cali[i] == (int)promedio){
				cout << "El alumno numero " << i+1 << " entra a los alumnos con nota promedio" << endl;
			}
			cali2[i] = cali[i];
			if(cali[i] == 6){
				cout << "El alumno numero " << i+1 << " tendra un trabajo extra que sumara un punto a su calificacion" << endl;
				cali2[i] = cali[i]+1;
			}
		}
		
		for(int i = 0; i < nAlumnos; i++){
		cout << "El alumno numero " + i+1 << "tenia de calificacion " << cali[i] << " ahora tiene " << cali2[i] << endl;
	 	}
	 	
	 	cout << "Desesa realizar otro calculo de promedios?" << endl << "1.Si" << endl << "2.No" << endl <<"Opcion:";
	 	cin >> opc;
 	}while(opc == 1);
}

int main(){
	int opc;
	
	cout << "Ejercicios propuestos de arreglos" << endl;
	cout << "1.Operaciones con matrices" << endl;
	cout << "2.Dos arrays" << endl;
	cout << "3.Nuevo array" << endl;
	cout << "4.Promedio" << endl;
	cout << "5.Empleados" << endl;
	cout << "6. Promedios de alumnos" << endl;
	cout << "Ingresa que opcion quieres realizar: ";
	cin >> opc;
	
	switch(opc){
		case 1:
			operacionesDeMatrices();
			break;
		case 2:
			dosArrays();
			break;
		case 3:
			multiplicarArreglo();
			break;
		case 4:
			promedio();
			break;
		case 5:
			empleados();
			break;
		case 6:
			promedioAlumnos();
		default:
			break;
	}
	return 0;
}
