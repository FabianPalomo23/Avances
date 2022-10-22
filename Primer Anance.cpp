#include <iostream>
#include "Primer Anance.h"
using namespace std;

int main() {

	int opcion;

	struct VideoJuegos {
		float precio;
		char clasificacion[4];
		int ano_lanzamiento;
		char nombre[20];
		int numero_serie;
		char descripcion;
	};

	VideoJuegos Inf[4]{};

	cout << "¿que deseas realizar?" << endl;
	cout << "1.Agregar un juego" << endl;
	cout << "2.Modificar un juego" << endl;
	cout << "3.Eliminar un juego" << endl;
	cout << "4.Seleccionar un juego" << endl;
	cout << "5.Salir" << endl;

	cin >> opcion;

	switch (opcion) {
	case 1:

		int i = 0;

		for (i = 0; i <= 4; i++) {
			cout << endl << "Ingresa el nombre del juego : ";
			cin >> Inf[i].nombre;
			cout << endl << "Ingresa su clasificacion : ";
			cin >> Inf[i].clasificacion;
			cout << endl << "Ingresa su numero de serie : ";
			cin >> Inf[i].numero_serie;
			cout << endl << "Ingresa su año de lanzamiento : ";
			cin >> Inf[i].ano_lanzamiento;
			cout << endl << "Ingresa el precio : ";
			cin >> Inf[i].precio;
			cout << endl << "agrega una breve descripcion : ";
			cin >> Inf[i].descripcion;
	case 2:

	}
}