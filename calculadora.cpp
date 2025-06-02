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
#include<string>
using namespace std;
 
void gotoxy(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);

}
int i;
int j;
const int MAX_ALUMNOS = 100;
const int NUM_EXAMENES = 5;

int main(){ 
    
    string nombres[MAX_ALUMNOS];
    string apellidos1[MAX_ALUMNOS];
    string apellidos2[MAX_ALUMNOS];
    int ciclos[MAX_ALUMNOS];
    int cedulas[MAX_ALUMNOS];
    float notas[MAX_ALUMNOS][NUM_EXAMENES];
    float promedios[MAX_ALUMNOS];
    bool aprobados[MAX_ALUMNOS];


    cout << "\033[2J\033[H";

    gotoxy(50,0);
    setColor(3);
    cout << "Sistema De Calificaciones" << endl;
    
    setColor(3);
    cout << "=======================================================================================================================================" << endl;
        gotoxy(0,3);
        setColor(3);
        cout << "¿cuantos alumnos decea evaluar?";
        setColor(7);
        cin >> i;
        cin.ignore(); // Limpiar el buffer para getline

        for (int j = 0; j < i; j++) {
            setColor(3);
            cout << "Nombre del alumno " << (j + 1) << ": ";
            setColor(7);
            getline(cin, nombres[j]);
        }

    system("pause");
    cout << "\033[2J\033[H";
    
    return 0;
}