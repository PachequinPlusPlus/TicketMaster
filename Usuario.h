//
//  Usuario.h
//
//
//  Created by Samuel Pacheco on 06/11/17.
//
//

#ifndef Usuario_h
#define Usuario_h

#include "Boleto.h"

class Usuario{
private:
    string nombre, correo;
    int numCuenta;
    vector<Boleto> compras;
public:
    void verCompras();
    void verBoletos();
    void comprarBoletos();
};

void Usuario::verBoletos(){
    cout << "Estos son tus compras: " << endl;
    for(int i=0;i<compras.size();i++){
        cout << "Nombre del evento: " << compras[i].getName() << endl;
        cout << "Precio del evento; " << compras[i].getPrecio() << endl;
        cout << "Asientos: " << compras[i].getAsiento() << endl;
        cout << "BarCode: " << compras[i].getBarCode() << endl;
    }
}

void Usuario::verCompras(){
    
}

void comprarBoletos(){
    
}



#endif /* Usuario_h */
