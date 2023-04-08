#include "Factura.h"
#include <cstdlib>
#include <ctime>

Factura::Factura() {
	CodigoFactura = 0;
	DescripcionTotalCompra = "descripcion de prueba";
	TotalCompra = 0;



}

Factura::~Factura() {
	cout << "Se ha eleiminado una Cuenta" << endl;
}

void Factura::setCodigoFactura(int code) { CodigoFactura = code; }
void Factura::setDescripcionTotalCompra(string descri) { DescripcionTotalCompra = descri; }
void Factura::setTotalCompra(float total) { TotalCompra = total; }

int Factura::getCodigoFactura() { return CodigoFactura; }
string Factura::getDescripcionTotalCompra() { return DescripcionTotalCompra; }
float Factura::getTotalCompra() { return TotalCompra; }

//programacion de la logica

string Factura::mostarDetalleCompra(string) {

	detalleCompra = "";
	precioArticulo = 0;
	procederPago = 0;
	precioTotal = 0;
	detalleFinal = "";
	codigo = 0;

	srand(time(nullptr));
	codigo = rand() % 9000 + 1000;
/*
cout << " agregue la descripcion del articulo" << endl;
	cin >> detalleCompra;

	cout << " agregue el precio" << endl;
	cin >> precioArticulo;

	cout << " ingrese 1 para proceder a pagar o 0 para continuar" << endl;
	cin >> procederPago;

	cout << procederPago << endl;

*/
	

	while (procederPago != 1) {
		cout << " agregue la descripcion del articulo" << endl;
		cin >> detalleCompra;
		detalleFinal = detalleCompra + ", " + detalleFinal;

		cout << " agregue el precio" << endl;
		cin >> precioArticulo;
		precioTotal = precioArticulo + precioTotal;

		cout << " ingrese 1 para proceder a pagar o 0 para continuar" << endl;
		cin >> procederPago;

		if (procederPago != 1 && procederPago != 0) {
			cout << "Valor invalido ingresado. Ingrese 1 para proceder a pagar o 0 para continuar." << endl;
			cin >> procederPago;
		}

		cout << procederPago << endl;
	}

	//Imprimir en pantalla detalle compra
	cout << "Detalle de la compra : " << detalleFinal << endl;

	if (precioTotal > 50000) {
		cout << "Descuento 20% : " << (precioTotal * 0.20) << endl;
		cout << "Precio Total: " << precioTotal - (precioTotal * 0.20) << endl;
	}
	else {
		cout << "Descuento N/A : "  << endl;
		cout << "Precio Total: " << precioTotal  << endl;
	}
	cout	<< "Precio Total: " << precioTotal << endl;
	cout << "Codigo factura : " << codigo << endl;



	return detalleCompra;
}




void Factura::MostrarInformacion() {
	cout << "Codigofactura : " << CodigoFactura << endl;
	cout << "Descripcion Total Compra : " << DescripcionTotalCompra << endl;
	cout << "Total Compra : " << TotalCompra << endl;


}