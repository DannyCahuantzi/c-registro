#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Funcio nes externas
#include "Funciones\admin.cpp";
//#include "Funciones\User.cpp";

//Estructuras (Todas Variables con MAYUSCULA INICIAL)
// typedef struct Fecha
// {
// 	int Dia;
// 	int Mes;
// 	int Ano;
// };
// typedef struct ConciertosT {//Solo para conciertos
// 	char Titulo[51];
// 	Fecha RegFecha;//Revisar
// 	char Lugar[51];
// 	char Direccion[51];
// 	int Edad;
// 	float Precios;
// 	int Capacidad;
// 	int Estacionamiento;
 //   int Clave;
//	int Activo;

// };
//  typedef struct UsuariosT {//Solo para Usuarios
//  	char Nombre[31];
//  	char Apellido[31];
//  	int Edad;
//  	int Telefono;
//  	char Direccion;
//  };
// //FIN ESTRUCTURAS 
// //ARCHIVOS & VARIABLES GLOBALES 
	
// 	FILE *Usuarios;

// 	UsuariosT RegUsuarios;
//FIN VARIABLES GLOBALES
int main(int argc, char *argv[])
{       //variables
        int opc;
        do
        {
            system("cls");
            printf("<Bienvenido a iTicket>\n");
            printf("-----------\n");
            printf("  1. Admin \n");
            printf("  2. User  \n");
            printf("  3. Salir\n");
            printf("-----------\n");
            printf("Opcion:");
            scanf("%d",&opc);
            switch (opc){
                case 1:
                    Admin();
                break;

                case 2:
                     //User();

                break;
            }
        } while (opc != 3);
		
         system("cls");
         printf("Vuelve Pronto! =)\n");
         printf("AUTORES: Arturo Mendoza & David Tod\n");
		 system("PAUSE");	
  return 0;
} //LUIS ARTURO MENDOZA & DAVID TOD
