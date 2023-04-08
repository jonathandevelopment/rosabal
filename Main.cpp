#include <string>
#include <iostream>
#include "Factura.h"
using namespace std;

void main() {

	Factura factura1;
	//factura1.MostrarInformacion();


	cout << endl << endl;
	cout << "********** Sistema de facturacion ***************" << endl;

	factura1.setCodigoFactura(0);
	factura1.mostarDetalleCompra(" prueba ");
	factura1.setTotalCompra(0);


	//cuenta1.CalcInt(2000);

	system("pause");
}