//
//  Boleto.h
//  
//
//  Created by Samuel Pacheco on 06/11/17.
//
//

#ifndef Boleto_h
#define Boleto_h

class Boleto{
private:
    string evento, fecha, asiento;
    double precio;
    long long barCode;
public:
    string getName();
    string getFecha();
    string getAsiento();
    double getPrecio();
    long long getBarCode();
    void setName(string);
    void setFecha(string);
    void setAsiento(string);
    void setPrecio();
    void setBarCode();
};

string Boleto::getName(){
    return evento;
}

string Boleto::getFecha(){
    return fecha;
}

string Boleto::getAsiento(){
    return asiento;
}

double Boleto::getPrecio(){
    return precio;
}

long long Boleto::getBarCode(){
    return barCode;
}

void Boleto::setName(string name){
    this->evento=name;
}

void Boleto::setFecha(string fecha){
    this->fecha=fecha;
}

void Boleto::setAsiento(string Asiento){
    this->asiento = Asiento;
}

void Boleto::setPrecio(double precio){
    this->precio=precio;
}

void Boleto::setBarCode(long long BarCode){
    this->barCode=barCode;
}


#endif /* Boleto_h */
