//Miguel Angel Garcia Romero
//Hernandez Guzman Zuriel Jaffid
#include<iostream>
#include<conio.h>

using namespace std;

main(){
	cout<<"Insertando comentario al archivo del repositorio"<<endl;
	int cont=1;
	int opc,i,x,suma;
	//char opc;
	cout<<"\tMenu\t"<<endl;
	cout<<"a)muestra numeros de 1 al 100"<<endl;
	cout<<"b)muestra numeros de 100 al 1"<<endl;
	cout<<"c)muestra numeros pares del 1 al 100"<<endl;
	cout<<"d)muestra numeros impares del 1 al 100"<<endl;
	cout<<"e)suma de los numeros del 1 al 100"<<endl;
	cout<<"f)suma de los numeros pares del 1 al 100"<<endl;
	
	cin>>opc;
	
switch(opc){
	case 1:
		cout<<"muestra los numeros del 1 al 100"<<endl;
		while(cont<=100){
			
			cout<<"numero: "<<cont<<endl;
			cont+=1;
		}
		break;
	case 2:
		cout<<"numeros del 100 al 1"<<endl;
		for(i=100;i>=1;i--){
			cout<<"numero: "<<i<<endl;
		}
		break;
	case 3:
		cout<<"numeros pares que haya del 1 al 100"<<endl;
		for(x=1; x<=100;x++){
			i=x%2;
			if(i==0){
				cout<<x<<endl;
			}
		}
		break;
	case 4:
		cout<<"numeros impares del 1 al 100"<<endl;
		for(x=1; x<=100; x++){
			i=x%2;
			if(i==1){
				cout<<x<<endl;
			}
		}
		break;
	case 5:
		cout<<"la suma de todos los numeros que van del 1 al 100"<<endl;
		for(x=1;x<=100;x++){
			suma=suma+x;
			cout<<suma<<endl;
		}
		break;
	case 6:
		cout<<"suma de numeros pares del 1 al 100"<<endl;
		for(x=1; x<=100;x++){
			i=x%2;
			if(i==0){
				suma=suma+x;
				cout<<suma<<endl;
			}
		}
		break;
	case 7:
		cout<<"suma de los numeros impares del 1 al 100"<<endl;
		for(x=1;x<=100;x++){
			i=x%2;
			if(i==1){
				suma=suma+x;
				cout<<suma<<endl;
			}
		}
		break;
		case 8:
			cout<<"numeros pares del 1 al 100 y cuantos hay"<<endl;
			for(x=1; x<=100;x++){
			i=x%2;
			if(i==0){
				cout<<i<<endl;
			}
		}
		break;
}	

	getch();
}