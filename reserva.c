/*Moises Delgado 8-1001-1046
Ashley Bulgin 8-971-1775
Grupo 1SF113
*/
/*Reservación de computadoras para el laboratorio de programación*/

#include<stdlib.h>
#include<stdio.h>


void habilitarPC(int pcID, int computadoras[],int i){
    printf("Introduzca computadora a habilitar -> ");
            scanf("%d",&pcID);
            for (i = 0; i < 20; i++)
            {
                if (i == pcID )
                {
                    if (computadoras[i] !=0)
                    {
                        computadoras[pcID] = 0;
                        printf("PC%d disponible.", pcID);
                        break;
                    }
                    else{
                        printf("ERROR: La PC%d ya se encuentra disponible\n", pcID);
                        break;
                    }
                    
                }
                
            }
}

void mostrarPCDisponible(int count, int computadoras[], int i, int t){
    count = 0;
            // vemos los puestos ocupados y disponibles
            printf("Computadoras disponibles: \n");
            for ( i = 0; i < 20; i++)
            {
               if (computadoras[i] == 0)
               {
                printf("PC%d \n", i);
                count +=1;

                
               }  
             
            }
            if (count == 0)
               {
                printf("0\n");
               }
            count = 0;
            printf("Computadoras reservadas: \n");
            for (t = 0; t < 20; t++)
            {
                if (computadoras[t] == 1)
                {
                    printf("PC%d \n", t);
                    count +=1;
                }
                
            }
            if (count == 0)
               {
                
                printf("0\n");
               }
            
}


void reservarPC(int cedulaEstudiante, int computadoras[], int registroEstudiante[], int reserva, int cedulasEstudiantes[], int i ){
    //reservar una computadora
            
            printf("Introduzca la cedula del estudiante -> ");
            scanf("%d",&cedulaEstudiante);
            for (i = 0; i < 20; i++)
            {
                if (cedulaEstudiante == cedulasEstudiantes[i] )
                {
                  printf("Introduzca el numero de la PC a reservar (ejemplo: 1 para PC1) ->  ");
                  scanf("%d", &reserva);
                  printf("PC%d reservada exitosamente!\n",reserva);
                  computadoras[reserva] = 1;
                  registroEstudiante[i]+=1;
                  break;

                }
                
            }
            


}

int main( )
{
    int computadoras[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int condicion = 0;
    int cedulasEstudiantes[20] = {89541843,81027954,89711775,89541843,81028954,91141234,810011046,81027954,91341232,89541843,41341234,39585063,810271424,41341234,89540933,81037954,91341234,89543543,81297954,39611559}; 
    char nombresEstudiantes[20][12] = {"Raul","Pedro","Ashley","Luis","Luisa","Ernesto","Moises","Lucas","Jubencio","Christopher","Samuel","Jesus","Jordan","Romulo","Gabriel","Virgilio","Eugenio","Laura","Monica","Cristel"};
    int registroEstudiante[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int count = 0;
    int cedulaEstudiante;
    int reserva;
    int i,t;
    int pcID;
    char limpiar;
    while(condicion < 1) {
    	
        int opcion;
        printf("\nMenu: \n1) Ver los puestos de las computadoras ocupadas y disponibles.\n2) Reservar una computadora\n3) Salir del laboratorio\n4) Registro del uso del laboratorio\n5) Lista de estudiantes Autorizados\n6) Salir del sistema\n");
        printf("-> ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
            mostrarPCDisponible(count,computadoras,i,t);
            break;

            case 2:
            reservarPC(cedulaEstudiante,computadoras,registroEstudiante,reserva,cedulasEstudiantes,i);
            break;

            case 3:
            //habilitar computadora
            habilitarPC(pcID,computadoras,i);
            break;

            case 4:
            for (i = 0; i < 20; i++)
                {
                    printf("Nombre:%s ", nombresEstudiantes[i]); 
                    printf(" Veces que ha utilizado el Laboratorio:%d", registroEstudiante[i]);
                    printf("\n");
                }

            break;

            case 5:
            //muestra lista de estudiantes en el sistema
                for (i = 0; i < 20; i++)
                {
                    printf("Nombre:%s ", nombresEstudiantes[i]); 
                    printf(" Cedula:%d", cedulasEstudiantes[i]);
                    printf("\n");
                }
                break;

            case 6: 
            condicion = 5;
            break;

            
            default:
            printf("ERROR: Usted ha introducido un valor que no pertenece a este menu.");
        }
        printf("limpiar pantalla: S/N ->");
        scanf("%s",&limpiar);
        while(limpiar != "s" || limpiar != "n"){
        	printf("limpiar pantalla: S/N ->");
        	scanf("%s",&limpiar);
		}
        if(limpiar == 's'){
        	system("cls");
        	getchar();
		}
		
       
        

    }
    

    
}
