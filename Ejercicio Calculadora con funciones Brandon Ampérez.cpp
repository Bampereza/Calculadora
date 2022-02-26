#include "iostream"
#include "string"


using namespace std;

int main()

{

    float Dig1, Dig2;
    int opc;


    cout << "Bienvenido" << "\n";
    cout << "Seleccione la opcion deseada" << "\n";


    printf ("        1)- Suma. 		  		\n");
    printf ("        2)- Resta.		  		\n");
    printf ("        3)- Multiplicacion.	\n");
    printf ("        4)- Division.			\n");
    printf ("        5)- Salir              \n");


    printf ( "Porfavor seleccione la opcion de la calculadora \n");
    cin >> ( opc);

    switch (opc)
    {

        case 1:

            printf ("Ingrese el primer digito:");
            cin >> (Dig1); 
            printf("Ingrese el segundo digito: ");
            cin >> (Dig2);

            cout << Dig1 << " + " << Dig2 << " = " << Dig1 + Dig2;
            break;

        case 2:

            printf ("Ingrese el primer digito:");
            cin >> (Dig2);
            printf("Ingrese el segundo digito: ");
            cin >> (Dig2);

            cout << Dig1 << " - " << Dig2 << " = " << Dig1 - Dig2;
            break; 

        case 3:


            printf ("Ingrese el primer digito:");
            cin >> (Dig1);
            printf("Ingrese el segundo digito: ");
            cin >> (Dig2);

            cout << Dig1 << " * " << Dig2 << " = " << Dig1 * Dig2;
            break;

        case 4:


            printf ("Ingrese el primer digito:");
            cin >> (Dig1); //Leer 1er dig.
            printf("Ingrese el segundo digito: ");
            cin >> (Dig2);


            cout << Dig1 << " / " << Dig2 << " = " << Dig1 / Dig2;
            break;


        case 5:
            printf ("Usted salio de la calculadora!");

            break;

        default:
            cout<<"Opcion invalida";
            break;

    }
    return 0;
}