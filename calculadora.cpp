//comentario eduardo
//comentario jeyfreth
//comentario ivan


/* Códigos ANSI de los Colores Seleccionados
\033[3 → Celeste
\033[7 → Blanco
\033[4 → Rojo
\033[2 → Verde
Reset del color al final:
\033[7 → Restaura el color y estilo original del texto.
*/
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
 
void gotoxy(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);

}

int alumnos;
const int examenes = 5;

int main(){ 
system("clear");
gotoxy(50,0);
setColor(3);
cout << "Sistema De Calificaciones" << endl;
setColor(3);
cout << "=============================================================================================================================" << endl;
       
gotoxy(0,3);
setColor(3);
cout << "¿cuantos alumnos decea evaluar?";
system("clear");
setColor(7);
cin >> alumnos;
cin.ignore(); // Limpiar buffer

    // Declarar arreglos para los datos de los alumnos
string nombres[alumnos];
string apellido1[alumnos];
string apellido2[alumnos];
string cedulas[alumnos];
string cursos[alumnos];
int notas[alumnos][examenes];

    // Ingresar los datos de cada alumno
    for(int i = 0; i < alumnos; i++) {
        setColor(3);
        cout << "Alumno " << i+1 << endl;
        cout << "Nombre: ";
        setColor(7);
        getline(cin, nombres[i]);
        setColor(3);
        cout << "Primer apellido: ";
        setColor(7);
        getline(cin, apellido1[i]);
        setColor(3);
        cout << "Segundo apellido: ";
        setColor(7);
        getline(cin, apellido2[i]);
        setColor(3);
        cout << "Cedula: ";
        setColor(7);
        getline(cin, cedulas[i]);
        setColor(3);
        cout << "cursos: ";
        setColor(7);
        getline(cin, cursos[i]);
        setColor(3);
        cout << "Ingrese las notas de los 5 examenes:" << endl;
        for(int j = 0; j < examenes; j++) {
            setColor(3);
            cout << "Nota del examen " << j+1 << ": ";
            setColor(7);
            cin >> notas[i][j];
        }
        cin.ignore(); // Limpiar buffer antes del siguiente getline
        system("clear");
    }

    // Mostrar los datos de cada alumno
    for(int i = 0; i < alumnos; i++) {
       
        for(int j = 0; j < examenes; j++) {
            
        }
        setColor(3);
        cout << "Alumno #" << i+1 << endl;
        cout << "Nombre completo: " << nombres[i] << " " << apellido1[i] << " " << apellido2[i] << endl;
        cout << "Cedula: " << cedulas[i] << endl;
        cout << "cursos: " << cursos[i] << endl;
    }

    system("pause");
    system("clear");
    
    return 0;
}