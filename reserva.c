/*Reservación de computadoras para el laboratorio de programación*/
#include <stdio.h>

int main( )
{
    int computadoras[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int condicion = 0;
    int cedulasEstudiantes[20]; 
    int nombresEstudiantes[20][12];
    
    while(condicion < 1) {
        int opcion;
        printf("Menu: \n1) Ver los puestos de las computadoras ocupadas y disponibles.\n2)Rexervar una computadora\n3) Salir del laboratorio\n4) Registro del uso del laboratorio\n 5) Lista de estudiantes Autorizados\n 6) Salir del sistema\n");
        scanf("%d", &opcion);
        switch (opcion)
    ​    {
            case 1:
            // vemos los puestos ocupados y disponibles
            break;

            case 2:
          
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
            break;

            
            default:
            printf("ERROR: Usted ha introducido un valor que no pertenece a este menu.");
        }
    }
    
    return 0;
}