#include <iostream>

using namespace std;
int a,b,d;
float c;
string si;
int bus, mod;
int total=0;
struct Hola{
	string buss, data;
	int *codigo;
}ola[1000];
int *codigo_empleado = new int[100];
	string nombre,apellido, puesto;
float  **pm_salario,salario, boni=250 ;	
		int valores=0;
		
		
void datos(){
	Hola ola;
int fcod=0;
cout<<"Cuantos codigos de empleados Desea Ingresar?: ";
cin>>fcod;
ola.codigo = new  int [fcod];
for (int i=0;i<fcod;i++){
cout<<"Cuantos empleados ingresar: ";
	cout<<"Codigo: ";
	cin>>ola.codigo[i];
	cin.ignore();
	cout<<"SALArio : "<<*pm_salario<<endl;
	cout<<"SALARIO + BONIFICACION : "<<&pm_salario<<endl;
}

}

void buscar(){
	char res3;
do{


	cout<<"Ingrese el codigo de usuario el cual quiere buscar"<<endl;
	cin>>bus;
	cout<<"------------------------------"<<endl;
	cin.ignore();
	cout<<"el codigo a buscar es :"<<bus<<endl;
	for(int h=0;h<total;h++){
		if(bus==codigo_empleado[h]){
		
			
			cout<<"El codigo ingresado hace referencia al siguiente empleado .. "<<endl<<"codigo de empleado :"<<codigo_empleado[h]<<endl;
			cout<<"con el nombre de :"<<nombre<<" "<<apellido<<endl;
			cout<<"y su puesto es :"<<puesto<<endl;
			cout<<"con un salario total de:"<<c<<endl;
	
	
		}

		 if(bus!= codigo_empleado[h]){
			cout<<"El usuario seleccionado es erroneo"<<endl;
		}
	}
	cout<<"Quieres buscar mas empleados?... (s/n):";
			cin>>res3;
	}while(res3=='s');
}

void modificar(){
int mod1;
Hola ola;
//ola.buss();
char res2;
do{
float vac=0;
	cout<<"Ingrese el codigo de usuario el cual quiere modificar"<<endl<<endl;
	cin>>mod1;
	for(int h=0;h<total;h++){
			if(h==bus){
	cout<<"\n\n<------------ Valor a Modificar ---------->"<<endl;

			
	
		   printf("1 --codigo-- \n");
		    printf("2 --nombres-- \n");
		    printf("3 - --apellidos--\n");
		    printf("4 - --puesto--\n\n");
		    printf("5 - --Salario--\n\n");
		    
		    printf("Ingrese el la accion que quiere realizar: ");
		    scanf("%d", &mod1 );
				
				
					switch(mod1){
						case 1:
							cout<<"Ingrese el nuevo codigo de empleado: ";
			 		cin>>codigo_empleado[h];
			 
						break;
						case 2:
							cout<<"Ingrese el nuevo nombre: ";
						cin>>nombre;
						break;
						case 3:
							cout<<"Ingrese el nuevo apellido: ";
							cin>>apellido;
						break;
						case 4:
							cout<<"Ingrese el nuevo puesto: ";
						cin>>puesto;
						break;
						case 5:
							cout<<"Ingrese el nuevo sueldo: ";
					cin>>salario;
						break;
					
					}
		cout<<"Dato cambiado exitosamente"<<endl;		}
	
					
	}
	cout<<"modificar mas empleados?... (s/n):"<<endl;
			cin>>res2;
	}while(res2=='s');
	}

	
 int main()
{

		char ress,res1;
		int menu1;
	
	 int Menu;

				  do{
				  

		    system("cls");
		    printf("BIENVENIDO AL PROGRAMA DE JORGE DUARTE\n");
		    printf("1 -Ingresar empleados \n");
		    printf("2 - Buscar empleado\n");
		    printf("3 - Modificar registros\n\n");
		    printf("Ingrese el la accion que quiere realizar: ");
		    scanf("%d", &Menu);
	
	
	switch(Menu){
		case 1:
			do{
			
		system("cls");
	cout<<"cuantos valores desea ingresar :"<<endl;
	cin>>valores;

	for(int i=total; i<valores+total; i++){
	cout<<"Ingrese el codigo en numeros:";
		cin>>codigo_empleado[i];


		cout<<"Ingrese el nombre del empleado:";
		cin>>nombre;
		cout<<"Ingrese el apellido del empleado: " ;
		cin>>apellido;
		cout<<"Ingrese el puesto del empleado:  ";
		cin>>puesto;

		
		cout<<"Ingrese el salario base del empleado en numeros:  ";
		cin>>salario;
	}
	
	cout<<"-------------------------------"<<endl<<endl;

	

	
for(int i=0; i<valores+total; i++){
	cout<<"el codigo del empleado es: "<<codigo_empleado[i]<<endl;
	


}
cout<<"el nombre del empleado es:  "<<nombre<<endl;
	cout<<"el apellido del empleado es: "<<apellido<<endl;
	cout<<"el puesto es: "<<puesto<<endl;
	cout<<"el salario es: "<<salario<<endl;
	c=boni+salario;
		cout<<"el salario es con bonificacion es : "<<c<<endl;
		
total=valores+total;
cin.ignore();
		cout<<"Desea Ingresar mas empleados?. (s/n):";
			cin>>res1;
	}while(res1=='s');
			break;
case 2:
	buscar();
	break;
	case 3:
	modificar();
	break;
		
		
	}
		cout<<"Desea Ingresar regresar al menu principal?.. (s/n):";
			cin>>ress;
	}while(ress=='s');
		
}


