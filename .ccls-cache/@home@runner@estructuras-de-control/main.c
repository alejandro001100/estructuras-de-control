//Grupo Camila Torres y Alejandro Paqui
#include <stdio.h>

int main()
{
    int opcion, cantidad, continuar;
    float precio, total = 0;
    char seleccion_producto;
    char nombre[50], cedula[20], productos[1000] = ""; // cadena para almacenar los productos seleccionados

    printf("\n\nMenú de facturación");
    printf("\n---------------------");
    printf("\na. Facturar producto");
    printf("\nb. Imprimir factura");
    printf("\nc. Salir");

    do {
        printf("\n\nElija una opción: ");
        scanf(" %c", &opcion);

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
                scanf(" %c", &seleccion_producto);
                
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

                total += precio * cantidad; // acumular el total
                printf("\n\nSe agregaron %d unidades de %c a la factura", cantidad, seleccion_producto);

                // agregar el producto a la cadena de productos
                char producto[50];
                switch (seleccion_producto) {
                    case 'a':
                        sprintf(producto, "Llantas x%d, ", cantidad);
                        break;
                    case 'b':
                        sprintf(producto, "Kit Pastillas de freno x%d, ", cantidad);
                        break;
                    case 'c':
                        sprintf(producto, "Kit de embrague x%d, ", cantidad);
                        break;
                    case 'd':
                        sprintf(producto, "Faro x%d, ", cantidad);
                        break;
                    case 'e':
                        sprintf(producto, "Radiador x%d, ", cantidad);
                        break;
                }
                strcat(productos, producto);

                // preguntar si desea agregar otro producto
                printf("\n¿Desea agregar otro producto? (1 = sí, 0 = no): ");
                scanf("%d", &continuar);
                if (!continuar) {
                    printf("\n\nProductos agregados a la factura: %s", productos);
                    printf("\n\nEl total a pagar es: $%.2f", total);
                }
                break;

     case 'b':
    if (total > 0) {
        // solicitar datos del cliente
        printf("Ingrese el nombre del cliente: ");
        scanf("%s", nombre);
        printf("Ingrese el apellido del cliente: ");
        scanf("%s", apellido);
        printf("Ingrese la cedula del cliente: ");
        scanf("%s", cedula);

        // imprimir factura
        printf("\n\nFactura\n");
        printf("---------------------\n");
        printf("Cliente: %s %s\n", nombre, apellido);
        printf("Cedula: %s\n", cedula);
        printf("Productos:\n");

        // imprimir cada producto de la factura
        for (int i = 0; i < num_productos; i++) {
            printf(" - %d unidades de %s\t\t$%.2f\n", productos[i].cantidad, productos[i].nombre, productos[i].precio_total);
        }

        printf("\nTotal: $%.2f\n", total);
    } else {
        printf("\n\nNo hay productos facturados aún\n");
    }
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