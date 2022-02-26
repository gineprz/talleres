#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int opc, x, y, res;
    char z;
	while(opc)
	{
        cout << "Menu de Opciones" << endl;
        cout << "----------------" << endl;
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) Multiplicacion" << endl;
        cout << "4) Division" << endl;
        cout << "5) ingresos" << endl;
        cout << "6) retiro" << endl;
        cout << "digite una opcion" << endl;
		cin>>opc;

		if(opc==1) {
           cout << "ingrese un numero: " << endl; cin>>x;
           cout << "ingrese otro numero: " << endl; cin>>y;
           res=x+y;
           cout << "el resusltado de la operacioes es: " <<res;
		}
		else if(opc==2){
           cout << "ingrese un numero: " << endl; cin>>x;
           cout << "ingrese otro numero: " << endl; cin>>y;
           res=x-y;
           cout << "el resusltado de la operacioes es: " <<res;
		}
		else if(opc==3){
           cout << "ingrese un numero: " << endl; cin>>x;
           cout << "ingrese otro numero: " << endl; cin>>y;
           res=x*y;
           cout << "el resusltado de la operacioes es: " <<res;
	   }
	   else if(opc==4){
           cout << "ingrese un numero: " << endl; cin>>x;
           cout << "ingrese otro numero: " << endl; cin>>y;
           res=x/y;
           cout << "el resusltado de la operacioes es: " <<res;
	   }
	   if(opc==5){
			cout<<"ingrese la cantidad de dinero a depositar: "<<endl;
			cin>>x;
			cout<<"dinero ingresado en su cuenta: "<<endl;
	   }
	   else if (opc==6){
			cout<<"ingrese la cantidad de dinero a retirar: "<<endl;
			cin>>x;
			cout<<"dinero retirado de su cuenta: "<<endl;
       }
            cout<<"para salir presione z. "<<endl;
            cin>>z;
	}
	system("pause");
	return 0;
}
