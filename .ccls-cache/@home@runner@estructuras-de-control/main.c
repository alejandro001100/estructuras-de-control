#include <stdio.h>

int main()
{
    int opcion, cantidad;
    char unidades;
    float precio, total;
    char seleccion_producto;

    printf("\n\nMenú de facturación");
    printf("\n---------------------");
    printf("\na. Facturar producto");
    printf("\nb. Imprimir factura");
    printf("\nc. Salir");

    do {
        printf("\n\nElija una opción: ");
        scanf("%c", &opcion);
        fflush(stdin);

        switch (opcion) {
            case 'a':
                printf("\n\nListado de productos");
                printf("\n---------------------");
                printf("\na) Llantas (Precio: $150)");
                printf("\nb) Kit Pastillas de freno (Precio: $55)");
                printf("\nc) Kit de embrague (Precio: $180)");
                printf("\nd) Faro (Precio: $70)");
                printf("\ne) Radiador (Precio: $120)");
                printf("\n\nElija un producto: ");
                scanf("%c", &seleccion_producto);
                fflush(stdin);
                
                // calcular el precio del producto
                switch (seleccion_producto) {
                    case 'a':
                        precio = 150.0;
                        break;
                    case 'b':
                        precio = 55.0;
                        break;
                    case 'c':
                        precio = 180.0;
                        break;
                    case 'd':
                        precio = 70.0;
                        break;
                    case 'e':
                        precio = 120.0;
                        break;
                    default:
                        printf("Opción no válida\n");
                        continue; // volver al menú principal
                }

                printf("Ingrese la cantidad: ");
                scanf("%d", &cantidad);
                fflush(stdin);
                printf("Ingrese las unidades (ejemplo: kg, litros, metros, etc.): ");
                scanf("%c", &unidades);
                fflush(stdin);

                total = precio * cantidad;
                printf("\n\nEl total a pagar por %d %c de %c es: $%.2f", cantidad, unidades, seleccion_producto, total);
                break;

            case 'b':
                // código para imprimir factura
                printf("\n\nFactura\n---------------------");
                // aquí irían los datos de la factura
                break;

            case 'c':
                printf("\n\nGracias por utilizar nuestro servicio de facturación\n");
                break;

            default:
                printf("\n\nOpción no válida\n");
                break;
        }

    } while (opcion != 'c');

    return 0;
}
