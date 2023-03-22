
//Declaracion de librerias
#include <iostream>
#include <vector>
using namespace std;
//Declarando clases

//Declarando clase vuelo
class Vuelo{
//atributos
private:
  int numVuelo;
  string fecha;
  float precio;
  string origen;
  string destino;
  int cupos;
  string aerolinea;
//m�todos
public:
  Vuelo();
//constructor
  void Vuelol(string,float,string,string,int, string, int);
//muestra vuelo
  void muestraVuelo();
//setters y getters
  void setnumVuelo(int);
  void setFecha(string);
  void setPrecio(float);
  void setOrigen(string);
  void setDestino(string);
  void setCupos(int);
  int getnumVuelo();

  string getFecha();
  float getPrecio();
  string getOrigen();
  string getDestino();
  int getCupos();
  void setAerolinea(string);
  string getAerolinea();

//despliega los datos del vuelo como un string
  string despliegaVuelo();

};

//Declarando clase Pasajero
class Pasajero{
//atributos
private:
  string nombre;
  int edad;
  string numPasaporte;
  int numerodep;
//m�todos
public:
  Pasajero();
//constructor
  void Pasajerol(string, int, string, int);
//muestra pasajero
  void muestraPasajero();
//setters y getters
  void setNombre(string);
  void setEdad(int);
  void setNumPasaporte(string);
  void setNumerodep(int);


  string getNombre();
  int getEdad();
  string getNumPasaporte();
  int getNumerodep();
};

//Declarando Clase Reservacion
class Reservacion{
private:
  Pasajero pasaje;
  Vuelo vueloReserv;
  string aerol;
public:
  //constructores
  Reservacion();
  void Reservacionl(Vuelo,Pasajero, string, string);
  //muestra datos
  void muestraReservacion();
  //setters y getters
  void setVuelo(Vuelo);
  Vuelo getVuelo();
};

//Definir metodos de la clase vuelo
//Constructor por default
 Vuelo::Vuelo(){
     numVuelo = 0;
     fecha = "01/01/2023";
     precio = 0;
     origen = "CDMX";
     destino  = "No establecido";
     cupos = 0;
     aerolinea = "N/A";
 }

//Constructor con par�metros
 void Vuelo::Vuelol(string _fecha, float _precio, string _origen, string _destino, int _cupos, string _aerolinea, int _numvuelo){
     numVuelo = _numvuelo;
     fecha = _fecha;
     precio = _precio;
     origen = _origen;
     destino  = _destino;
     cupos = _cupos;
     aerolinea = _aerolinea;
 }
//muestra vuelo
 void Vuelo::muestraVuelo(){
     cout<<endl<< "Datos del vuelo"<< endl;
     cout<< "Fecha del vuelo: "<< fecha <<endl;
     cout<< "Precio: "<< precio<<endl;
     cout<< "Origen del vuelo: "<< origen<< endl;
     cout<< "Destino del vuelo: "<< destino<< endl;
     cout<< "Cupos del vuelo: "<< cupos<<endl;
 }

//m�todos de setters y getters
 void Vuelo::setFecha(string _fecha){
     fecha = _fecha;
 }
 void Vuelo::setPrecio(float _precio){
     precio = _precio;
 }
 void Vuelo::setOrigen(string _origen){
     origen = _origen;
 }
 void Vuelo::setDestino(string _desttino){
     destino = _desttino;
 }
 void Vuelo::setCupos(int _cupos){
     cupos = _cupos;
 }
 void Vuelo::setnumVuelo(int _numVuelo){
  numVuelo = _numVuelo;
}

 string Vuelo::getFecha(){
     return fecha;
 }
 float Vuelo::getPrecio(){
     return precio;
 }
 string Vuelo::getOrigen(){
     return origen;
 }
string Vuelo::getDestino(){
    return destino;
}
int Vuelo::getCupos(){
    return cupos;
}

int Vuelo::getnumVuelo(){
  return numVuelo;
}

void Vuelo::setAerolinea(string _aerolinea){
    aerolinea = _aerolinea;


}
  string Vuelo::getAerolinea(){
      return aerolinea;
  }

//regresa todos los datos del vuelo en un string
string Vuelo::despliegaVuelo(){
    return ("\nNo. Vuelo: "+to_string(numVuelo)+"\nOrigen: "+origen+"\nDestino: "+destino+"\nFecha: "+fecha+"\nPrecio: "+to_string(precio)+"\nCupo: "+to_string(cupos));
}

//Definir metodos de Reservacion
//constructor por default
Reservacion::Reservacion(){
    Pasajero pasaj;
    Vuelo vuel;
    pasaje = pasaj;
    vueloReserv = vuel;


}

//constructor con par�metros
void Reservacion::Reservacionl(Vuelo _vuelo,Pasajero _pasaje, string _hora, string _aerol){
    pasaje = _pasaje;
    vueloReserv = _vuelo;
    aerol = _aerol;

}
//mostrar reservacion
 void Reservacion::muestraReservacion(){

     cout<<endl<< "Datos de la reservacion"<< endl;
     cout<< "Aerolinea: "<< aerol <<endl;
     pasaje.muestraPasajero();
     vueloReserv.muestraVuelo();

 }
//setters y getters
 void Reservacion::setVuelo(Vuelo _vuelo){
     vueloReserv = _vuelo;
 }
 Vuelo Reservacion::getVuelo(){
     return vueloReserv;
 }

 //Definir metodos de la clase pasajero
//constructor por default
 Pasajero::Pasajero(){

     nombre = "Sin nombre";
     edad = 0;
     numPasaporte = "XXXXXXXXXX";
     numerodep = 0;


 }
//constructor con par�metros
  void Pasajero::Pasajerol(string _nombre, int _edad, string _numPasaporte, int _numerodep){
     nombre = _nombre;
     edad = _edad;
     numPasaporte = _numPasaporte;
     numerodep = _numerodep;

 }

//mostrando pasajero
 void Pasajero::muestraPasajero(){
     cout<<endl<< "Nombre del pasajero: "<< nombre<< endl;
     cout<< "Edad: " <<edad<<endl;
     cout<< "Numero de pasaporte: "<<numPasaporte<<endl;

 }


//setters y getters
 void Pasajero::setNombre(string _nombre){
     nombre = _nombre;
 }
 void Pasajero::setEdad(int _edad){
     edad = _edad;
 }
 void Pasajero::setNumPasaporte(string _numPasaporte){
     numPasaporte = _numPasaporte;
 }
 string Pasajero::getNombre(){
     return nombre;
 }
 int Pasajero::getEdad(){
     return edad;
 }
 string Pasajero::getNumPasaporte(){
     return numPasaporte;
 }
 void Pasajero::setNumerodep(int _numerodep){
     numerodep = _numerodep;
 }
 int Pasajero::getNumerodep(){
     return numerodep;
 }


 //Variables declaradas
 int casoint;
 int pantallaInicio();
 int selectCase(int caso);
 string nomus, numpasus, fechain;
 int edadus, numpasaje = 1, numactresv = 1;
 int nument, numvuel, numcup;
 int opVuelo;
 string dest;
 int indD;
 Vuelo a;

//Funcionamiento de codigo
int main() {
  //declaracion de vectores
    vector <Vuelo> vuelos;
    vector <Pasajero> pasajeros;
    vector <Reservacion> reserva;
    //creacion del vector con los datos de los vuelos
    vuelos.resize(20);
    vuelos[0].Vuelol("01/02/23", 5000, "CDMX", "CANCUN", 5, "AEROMEXICO",1);
    vuelos[1].Vuelol("23/03/23", 9000, "CDMX", "LOS ANGELES", 1, "VOLARIS",2);
    vuelos[2].Vuelol("01/02/15", 5400, "CDMX", "MONTERREY", 10, "VIVA AEROBUS",3);
    vuelos[3].Vuelol("18/03/23", 10000, "CDMX", "NEW YORK", 2, "AEROMEXICO",4);
    vuelos[4].Vuelol("19/03/23", 6000, "CDMX", "YUCATAN", 5, "VOLARIS",5);
    vuelos[5].Vuelol("04/03/23", 9000, "CDMX", "BUENOS AIRES", 4, "VOLARIS",6);
    vuelos[6].Vuelol("31/03/23", 7000, "CDMX", "TEXAS", 5, "AEROMEXICO",7);
    vuelos[7].Vuelol("23/08/23", 15000, "CDMX", "MADRID", 2, "AEROMEXICO",8);
    vuelos[8].Vuelol("12/01/23", 8000, "CDMX", "VANCOUVER", 6, "VIVA AEROBUS",9);
    vuelos[9].Vuelol("14/07/23", 4000, "CDMX", "GUADALAJARA", 9, "VOLARIS",10);
    vuelos[10].Vuelol("08/12/23", 22000, "CDMX", "HONG KONG", 3, "AEROMEXICO",11);
    vuelos[11].Vuelol("31/04/23", 16000, "CDMX", "DUBAI", 5, "AEROMEXICO",12);
    vuelos[12].Vuelol("15/10/23", 12000, "CDMX", "LONDRES", 9, "VIVA AEROBUS",13);
    vuelos[13].Vuelol("01/02/23", 10000, "CDMX", "RIO DE JANEIRO", 10, "VOLARIS",14);
    vuelos[14].Vuelol("21/05/23", 25000, "CDMX", "SIDNEY", 11, "AEROMEXICO",15);
    vuelos[15].Vuelol("31/07/23", 9000, "CDMX", "LAS VEGAS", 5, "VIBA AEROBUS",16);
    vuelos[16].Vuelol("11/12/23", 11000, "CDMX", "LOS CABOS", 2, "AEROMEXICO",17);
    vuelos[17].Vuelol("24/12/23", 15000, "CDMX", "PARIS", 1, "AEROMEXICO",18);
    vuelos[18].Vuelol("07/01/23", 14000, "CDMX", "ROMA", 6, "VOLARIS",19);
    vuelos[19].Vuelol("06/03/23", 7000, "CDMX", "AMSTERDAN", 5, "AEROMEXICO",20);

    int caso;
//ciclo while para el menu y poder regresar al menu inicial cuando se termine una accion
while (true){
  //menu
    system("cls");
    cout << "-----------------------------------------------"<<endl;
    cout<< "      Sistema de vuelos del AICM"<<endl<<endl;
    cout<< "Ingresa la opcion deseada"<<endl;
    cout<<endl<< "1. Nuevo usuario"<<endl;
    cout << "2. Reservar vuelo" <<endl;
    cout << "3. Consultar reservacion" <<endl;
    cout << "4. Consulta vuelos disponibles" <<endl;
    cout << "5. Consultar vuelo por destino especifico" <<endl;
    cout << "6. Cancelar reservacion" <<endl;
    cout << "7. Salir del programa" <<endl;
    cout <<endl<< "Opcion seleccionada(ingresa el numero): ";
    cin >> caso;
    cin.ignore();
  //switch para menu
    switch(caso){
    case 1:
      //pedir datos al usuario
        system("cls");
        cout<<"Registro nuevo usuario"<<endl;
        cout<<endl<<"Ingresa tu nombre: "<<endl;
        cin.ignore();
        getline(cin,nomus);
        cout<<endl<<"Ingresa tu edad: "<<endl;
        cin>>edadus;
        cout<<endl<<"Ingresa tu numero de pasaporte(solo mayusculas): "<<endl;
        cin.ignore();
        getline(cin, numpasus);

        pasajeros.resize(numpasaje);


        indD = 1;

      //corroborar si el numero de pasaporte ya existia
        for (int i = 0;i<= numpasaje;i++ ){
                if (pasajeros[i].getNumPasaporte()==numpasus){


                    cout<<endl<<"Parece que este usuario ya esta registrado, intentalo de nuevo"<<endl;


                    indD = 0;
                    system("pause");
                    break;

                }
        }
        if (indD == 1){
         //si el pasajero no existe crear nuevo pasajero
        pasajeros[numpasaje-1].Pasajerol(nomus, edadus, numpasus, numpasaje);


        cout<<endl<<"Eres el pasajero "<< numpasaje << " (Es importante que recuerdes tu numero de pasajero)"<<endl;
        numpasaje++;
        system("pause");

        break;
        }
        break;

    case 2:
      //hacer una reservacion
        system("cls");
        cout<<"Reservacion de vuelos"<<endl<<endl;
         //ver si hay el vector pasajero esta vacia
        if(pasajeros.empty()==true){
            cout<<"[ERROR] Aun no hay usuarios registrados, por favor registrese primero"<<endl;
            system("pause");
            break;
        }
        //registrar el numero de pasajero
        cout<<endl<<"ingrese su numero de pasajero: "<<endl;
        cin>>nument;
        reserva.resize(numactresv);

        indD = 1;

          //si el numero de pasajero existe continuar con la operacion
        for (int i = 0;i<= numactresv;i++ ){
                if (pasajeros[i].getNumerodep()==nument){


        cout<<endl<<"ingrese su numero de vuelo: "<<endl;
        cin>>numvuel;

        if (vuelos[numvuel-1].getCupos() <=0){
            cout<<"Lo sentimos, ya no hay cupos para ese vuelo, le sugerimos revisar la lista de vuelos"<<endl;
            system("pause");
            break;

        }
        else{

            reserva[numactresv-1].Reservacionl(vuelos[numvuel-1], pasajeros[nument-1], vuelos[numvuel-1].getFecha(), vuelos[numvuel-1].getAerolinea());
            numcup = vuelos[numvuel-1].getCupos();
            vuelos[numvuel-1].setCupos(numcup-1);
            cout<<endl<<"Reservacion finalizada, el numero de reservacion es: "+to_string(numactresv)<<endl;
            numactresv++;
            indD = 0;
            system("pause");

            break;
        }

                }
        }
         //si no existe decir que no esta registrado
        if (indD == 1){

        cout<<endl<<"El numero de pasajero no se ha encontrado, verifique que ya se haya registrado"<<endl;
        system("pause");
        break;
        }


        break;
    case 3:
          //despliega informacion de reservacion
        system("cls");
        cout<<"Informacion de reservacion"<<endl<<endl;
        if(reserva.empty()==true){
            cout<<"[ERROR] Aun no hay reservaciones, por favor primero haga una"<<endl;
            system("pause");
            break;
        }

        cout<<endl<<"ingrese su numero de reservacion: "<<endl;
        cin>>nument;

        system("cls");
        reserva[nument-1].muestraReservacion();

        system("pause");

        break;

    case 4:
      //Despliega la lista de vuelos disponibles
        system("cls");
        cout<<endl<<"Vuelos disponibles"<<endl;



        for (int i = 0;i<= 19;i++ ){
                cout<<vuelos[i].getnumVuelo()<<" "<<vuelos[i].getOrigen()<<" a "<<vuelos[i].getDestino()<<endl;
            }

            cout<<"Cual vuelo te interesa? (introduce el numero del vuelo)"<<endl;
            cin>>opVuelo;


            cout<<vuelos[opVuelo-1].despliegaVuelo();


        system("pause");


        break;

    case 5:
        //busca vuelo por destino

        cout << "Escribir el destino al que desea viajar (Escribir el destino en mayusculas)" << endl;
        cin>>dest;

        indD = 1;

        for (int i = 0;i<= 19;i++ ){
                if (vuelos[i].getDestino()==dest){

                    cout<<"El vuelo al destino "+vuelos[i].getDestino()+" esta disponible en la fecha "+vuelos[i].getFecha()<<endl;

                    indD = 0;
                    break;
                }
        }

        if(indD == 1){
             cout<<"En este momento no se encuentran vuelos disponibles al destino que solicita. Los destinos disponibles son los siguientes" << endl;
            for (int i = 0;i<= 19;i++ ){
                cout<<vuelos[i].getnumVuelo()<<" "<<vuelos[i].getOrigen()<<" a "<<vuelos[i].getDestino()<<endl;
            }
        }

        system("pause");
        break;

    case 6:
      //cancelar reservacion
        if (reserva.empty() == true){
                system("cls");
                cout<<endl<< "No hay reservaciones existentes por el momento"<<endl;
        system("pause");
        break;

        }
        system("cls");
        cout<<endl<<"Cancelar reservacion"<<endl;

        for(int i = 0; i<= numactresv-2;i++){

                    cout<<"Numero de reservacion: "<< i+1<<endl;
                    reserva[i].muestraReservacion();
                    cout<<endl;
                }
        cout<<endl<<"Introduce que reservacion deseas cancelar: "<<endl;
        cin>>nument;

        reserva.erase(reserva.begin()+nument);
        numcup = reserva[nument-1].getVuelo().getCupos();
        reserva[nument-1].getVuelo().setCupos(numcup+1);

        cout<<endl<<"Cancelacion exitosa"<<endl;


        system("pause");

        break;
    case 7:

      //salir del programa
        return(0);
    default:
        break;
    }

}
return(0);
}

