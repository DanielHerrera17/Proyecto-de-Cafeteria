// proyecto de programacion
#include <iostream>
#include <string.h>
#include <conio.h>
#define usuario "Daniel17"
#define contra "Admin"
using namespace std;

struct Administradores {
	char user[15];
	char pass[15];
};

void capturarContra(Administradores admin);
void pass(Administradores admin);
// void administrador(Administradores admin);

int main() {
	Administradores admin;
	capturarContra(admin);

	system("pause > null");
	return 0;
}

void capturarContra(Administradores admin) {
	int a;
	cout << " *****BIENVENIDO AL CONTROL DE INVENTARIO*****" << endl;
	cout << " 1--> ADMINISTRADOR" << endl;
	cout << " 2--> SALIR" << endl;
	cin >> a;

	switch (a) {
		case 1: {

			cout << " BIENVENIDO INGRESA USER Y PASSWORD" << endl;
			int i;
			cout << " Usuario: ";
			cin >> admin.user;
			cout << " Password: ";
			do {
				admin.pass[i] = getch();

				if (admin.pass[i] != 13) {
					putchar('*');
					i++;
				} else if (admin.pass[i] == '\b') {
					cout << "\b";
				}
			} while (admin.pass[i] != 13);
			if ((strcmp(admin.user, usuario) != 0) && (strcmp(admin.pass, contra) != 0)) {
				cout << "\n Lo sentimos usuario no permitido, o pass incorrecta, por favor intentelo de nuevo!" << endl;

			} else {
				cout << "\n\n***** BIENVENIDO AL INVENTARIO *****" << endl;
			}



		}
		case 2: {
			break;
		}
	}
}
