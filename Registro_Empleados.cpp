//Registro de Empleados
//Diseña una clase llamada Empleado con los siguientes atributos: nombre, apellido, edad y salario.
//Implementa métodos para establecer y obtener los valores de los atributos.
//Crea un programa principal que permita al usuario ingresar los datos de varios empleados y los
//almacene en un archivo de texto llamado empleados.txt;.
//Asegúrate de que el programa pueda manejar la escritura y la lectura de los datos del archivo de
//manera adecuada.

//Consulta de Empleados
//Implementa un programa que lea los datos del archivo empleados.txt; creado en el Programa 1.
//Crea una función que reciba el nombre completo de un empleado como entrada y muestre su
//información completa (nombre, apellido, edad y salario) si existe en el archivo.
//Permite al usuario realizar consultas múltiples de empleados hasta que decida salir del programa.
//Asegúrate de manejar adecuadamente el caso en el que el empleado buscado no exista en el archivo.


#include <iostream>
#include <string>

using namespace std;

class Empleado
{
private:
    string nombre;
    string apellido;
    int edad;
    int salario;

public:
    Empleado(string _nombre, string _apellido, int _edad, int _salario)
        : nombre(_nombre), apellido(_apellido), edad(_edad), salario(_salario) {}

    void setNombre(const string &_nombre)
    {
        nombre = _nombre;
    }

    void setApellido(const string &_apellido)
    {
        apellido = _apellido;
    }

    void setEdad(int _edad)
    {
        edad = _edad;
    }

    void setSalario(int _salario)
    {
        salario = _salario;
    }

    string getNombre() const
    {
        return nombre;
    }

    string getApellido() const
    {
        return apellido;
    }

    int getEdad() const
    {
        return edad;
    }

    int getSalario() const
    {
        return salario;
    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;
    }
};

void EjercicioEmpleado()
{ 
    Empleado empleado("Eduardo", "Portillo", 20, 15000);
    cout << "Información del Empleado:" << endl;
    empleado.mostrarInformacion();
}


int main()
{
    EjercicioEmpleado();
    return 0;
}