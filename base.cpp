#include <iostream>
#include <string>
#include "data.h"
using namespace std;

void admin();
void clientS();
void regPurchase();
void client();
void rewards();
void redeem();
void checkPts();
void record();

//CRUD
void createClt();
void readClt();
void uptdClt();
void delClt();

//LOG
void login();
void log_clt();
void log_adm();
bool verification_clt();
bool verification_adm();

// LogIn-start
int user;
char pass;

void login() {
    int opt;

    cout << "Bienvenido" << endl;
    cout << "Ingrese su tipo de cuenta:\t";
    cin >> opt;
    cout << "Aqui identifica 1. admin  2. cliente....";
    do
    {
        switch (opt)
        {
        case 1:
            log_adm();
            system("pause");
            break;
        case 2:
            log_clt();
            system("pause");
            break;
        default:
            cout << "Ingrese un n* valido. 1-2..." << endl;
            break;
        }
    } while (opt != 2);
    
}

void log_clt()
{
    int intentos = 3;

    cout << "---Cliente---" << endl;
    cout << "-------------" << endl;
    
    while (intentos > 0) {
      cout << "\nUsuario: ";
      cin >> user;
      cout << "\nContrasena: ";
      cin >> pass;


      if(verification_clt()) {
        cout << "*** Inicio de sesion exitoso ***" << endl;
        clientS();
      } else {
        cout << "*** Intento fallido. Usuario o contrasena incorrecta ***" << endl;
        cout << "Intentos restantes: " << intentos << endl;
        intentos --;
        
      }
    }
    cout << "*** Acceso Bloqueado. Te quedaste sin intentos ***" << endl;

}
void log_adm()
{
    string password;
    string username;
    int login = 0;
    do
    {

        cout << "Bienvenido a VehicleSift " << endl;
        cout << "Escriba su usuario: " << endl;
        cin >> username;
        cout << "Escriba su contraseña: " << endl;
        cin >> password;

        if (username == "Admin" && password == "Tmolina")
        {

            cout << "Acceso concedidio" << endl;
            login = 1;
            admin();
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("cls || clear");
        } else {
            cout << "Acceso denegado..." << endl;
            cout << "*** Presione enter para volver a introdocir las credenciales ***" << endl;
            system("pause || read -p 'Presiona Enter para continuar...' -n 1 -s");
            system("cls || clear");
        }

    } while (login != 1);
}

bool verification_clt() {
    return (user == clt.client_id && pass == clt.client_pass);
}

// end



int main()
{
    login();
    return 0;
}

void admin()
{
    int op1;

    cout << "Bienvenido Administrador" << endl;

    cout << "***--Opciones--***" << endl;
    cout << "1. Registrar compras." << endl;
    cout << "2. clientes." << endl;
    cout << "3. Recompensas." << endl;
    cout << "4. Salir" << endl;
    cin >> op1;

    switch (op1)
    {
    case 1:
        regPurchase();
        break;
    case 2:
        client();
        break;
    case 3:
        rewards();
        break;
    case 4:
        login();
        break;

    default:
        cout << "Ingrese opciones validas. Sean de 1-3..." << endl;
        break;
    }
}

void regPurchase()
{

}
void client()
{

}
void rewards()
{

}

void clientS()
{
    int op2;

    cout << "Bienvenido Usuario1" << endl;
    cout << "***--Opciones--***" << endl;
    cout << "1. Canjear puntos." << endl;
    cout << "2. Consultar puntos." << endl;
    cout << "3. Historial de compra." << endl;
    cout << "4. Salir." << endl;
    cin >> op2;

    switch (op2)
    {
    case 1:
        redeem();
        break;
    case 2:
        checkPts();
        break;
    case 3:
        record();
        break;
    case 4:
        login();
        break;

    default:
        cout << "Ingrese opciones validas. Sean de 1-3.." << endl;
        break;
    }
}

void redeem()
{

}
void checkPts()
{

}
void record()
{

}
