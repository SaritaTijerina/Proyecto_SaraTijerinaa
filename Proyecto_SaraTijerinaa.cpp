
#include <iostream>
#include <string>
using namespace std;

int main()
{

	int op, edad, c, h, preciounit, cant, preuni, total;
	string n, trata, descrip;
	int s = 1;

	system("cls");

	do {

		cout << " --Citas para servicios medicos dentales-- \n" << endl;
		cout << "1.- Agendar cita" << endl;
		cout << "2.- Modificar cita" << endl;
		cout << "3.- Elminar cita" << endl;
		cout << "4.- Lista de citas vigentes" << endl;
		cout << "5.- Limpiar pantalla" << endl;
		cout << "6. - Salir" << endl;

		cout << "\n Ingrese la opcion que necesite: \n" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			while (op == 1) {
				cout << "\nNombre del paciente:" << endl;
				cin.ignore();
				getline(cin, n);

				cout << "\nEdad del paciente:" << endl;
				cin >> edad;

				cout << "\nHora de tratamiento:" << endl;
				cin >> h;

				cout << "\nNombre del tratamiento:" << endl;
				cin.ignore();
				getline(cin, trata);

				cout << "\nDescripcion sobre el tratamiento:" << endl;
				cin.ignore();
				getline(cin, descrip);

				cout << "\nPrecio unitario del tratamiento:" << endl;
				cin >> preciounit;

				cout << "\nCantidad necesaria del tratamiento:" << endl;
				cin >> cant;

				cout << "Precio unitario: \n" << endl;
				cin >> preuni;

				cout << "Total: \n" << endl;
				cin >> total;
			}
			break;


		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:
			system("cls");
			op = 5;
			break;

		case 6:
			exit(1);
			break;


		default:
			cout << "Por favor ingrese una opción valida \n" << endl;
		}
		if (op != 6)
		{
			cout << "Desea volver al menu?\n" << endl;
			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> s;
		}
	} while (s == 1);
}


