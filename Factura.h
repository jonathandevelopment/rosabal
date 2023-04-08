#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Factura
{
protected:
	int CodigoFactura;
	string DescripcionTotalCompra;
	float TotalCompra;

	string detalleCompra;
	float precioArticulo;
	int procederPago;
	float precioTotal;
	string detalleFinal;
	int codigo;

public:
	Factura();
	~Factura();

	//SET
	void setCodigoFactura(int);
	void setDescripcionTotalCompra(string);
	void setTotalCompra(float);

	//GET
	int getCodigoFactura();
	string getDescripcionTotalCompra();
	float getTotalCompra();

	//logica
	string mostarDetalleCompra(string);



	void MostrarInformacion();
};


