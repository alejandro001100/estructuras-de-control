#include <stdio.h>

int main() {
    char opcion;
    int continuar = 1;
    int cantidad;
    float precio, subtotal = 0, total = 0;
    char nombre[50], cedula[15];
    char producto[5][30] = {"Llantas", "Kit Pastillas de freno", "Kit de embrague", "Faro", "Radiador"};
    float precios[5] = {150, 55, 180, 70, 120};
    int opcionProducto;
    int i;
    
    while (continuar) {
        printf("\nMenú de opciones:\n");
        printf("a. Facturar producto\n");
        printf("b. Imprimir factura\n");
        printf("c. Salir\n");
        printf("Ingrese una opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case 'a':
                printf("\nProductos disponibles:\n");
                for (i = 0; i < 5; i++) {
                    printf("%d. %s (Precio: $%.2f)\n", i+1, producto[i], precios[i]);
                }
                printf("Ingrese una opción de producto (1-5): ");
                scanf("%d", &opcionProducto);
                printf("Ingrese la cantidad: ");
                scanf("%d", &cantidad);
                precio = precios[opcionProducto-1];
                subtotal += precio * cantidad;
                printf("\nProducto agregado a la factura\n");
                break;
            case 'b':
                printf("\nIngrese su nombre completo: ");
                scanf(" %[^\n]s", nombre);
                printf("Ingrese su número de cédula: ");
                scanf(" %[^\n]s", cedula);
                printf("\nFactura:\n");
                printf("Nombre del comprador: %s\n", nombre);
                printf("Cédula del comprador: %s\n", cedula);
                for (i = 0; i < 5; i++) {
                    if (precios[i] != 0) {
                        printf("%s (x%d) - $%.2f\n", producto[i], (int) precios[i], precios[i]*cantidad);
                    }
                }
                if (subtotal >= 0 && subtotal <= 100) {
                    total = subtotal;
                } else if (subtotal >= 101 && subtotal <= 500) {
                    total = subtotal * 0.95;
                } else if (subtotal >= 501 && subtotal <= 1000) {
                    total = subtotal * 0.93;
                } else if (subtotal >= 1001) {
                    total = subtotal * 0.9;
                }
                printf("Subtotal: $%.2f\n", subtotal);
                printf("Total: $%.2f\n", total);
                subtotal = 0;
                total = 0;
                break;
            case 'c':
                continuar = 0;
                break;
            default:
                printf("\nOpción inválida, intente de nuevo.\n");
        }
    }
    return 0;
}
