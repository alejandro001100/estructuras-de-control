#include <stdio.h>

int main() {
    // Variables para almacenar la información del comprador
    char nombre[50];
    int cedula;
    
    // Variables para la selección de productos
    char opcion;
    int llantas = 0, pastillas = 0, embrague = 0, faro = 0, radiador = 0;
    int cantidad;
    int factura = 0;
    int subtotal = 0;
    float descuento = 0.0;
    
    // Ciclo principal
    while (1) {
        // Menú principal
        printf("\n*******************\n");
        printf("  MENÚ PRINCIPAL\n");
        printf("*******************\n");
        printf("a. Facturar producto\n");
        printf("b. Imprimir factura\n");
        printf("c. Salir\n");
        
        printf("\nSeleccione una opción: ");
        scanf(" %c", &opcion);
        
        switch(opcion) {
            case 'a':
                printf("\n*******************\n");
                printf("SELECCIONE UN PRODUCTO\n");
                printf("*******************\n");
                printf("a) Llantas (Precio: $150)\n");
                printf("b) Kit Pastillas de freno (Precio: $55)\n");
                printf("c) Kit de embrague (Precio: $180)\n");
                printf("d) Faro (Precio: $70)\n");
                printf("e) Radiador (Precio: $120)\n");
                printf("Seleccione una opción: ");
                scanf(" %c", &opcion);
                
                // Seleccionar cantidad del producto
                printf("\nIngrese la cantidad: ");
                scanf("%d", &cantidad);
                
                // Actualizar el inventario
                switch(opcion) {
                    case 'a':
                        llantas += cantidad;
                        subtotal += 150 * cantidad;
                        break;
                    case 'b':
                        pastillas += cantidad;
                        subtotal += 55 * cantidad;
                        break;
                    case 'c':
                        embrague += cantidad;
                        subtotal += 180 * cantidad;
                        break;
                    case 'd':
                        faro += cantidad;
                        subtotal += 70 * cantidad;
                        break;
                    case 'e':
                        radiador += cantidad;
                        subtotal += 120 * cantidad;
                        break;
                    default:
                        printf("Opción inválida\n");
                }
                
                // Preguntar si se desea facturar otro producto
                printf("\n¿Desea facturar otro producto? (s/n): ");
                fflush(stdin);
                scanf(" %c", &opcion); // Se agrega un espacio antes del %c para ignorar el salto de línea residual
                if (opcion == 'n') {
                    factura = 1;
                }
                break;
            
            case 'b':
                if (factura == 0) {
                    printf("\nERROR: Aún no ha facturado ningún producto.\n");
                    break;
                }
                
                // Imprimir factura
                printf("\n**************\n");
                printf("    FACTURA\n");
                printf("**************\n");
                printf("Nombre del comprador: ");
                fflush(stdin);
                scanf("%s", nombre);
                printf("Número de cédula: ");
                fflush(stdin);
                scanf("%d", &cedula);
                printf("\nPRODUCTOS\n");
if (llantas > 0) {
    printf("- Llantas (Cantidad: %d) (Precio unitario: $150) (Precio total: $%d)\n", llantas, llantas*150);
}
if (radiador > 0) {
    printf("- Radiador (Cantidad: %d) (Precio unitario: $120) (Precio total: $%d)\n", radiador, radiador*120);
}
if (pastillas > 0) {
    printf("- Kit Pastillas de freno (Cantidad: %d) (Precio unitario: $55) (Precio total: $%d)\n", pastillas, pastillas*55);
}
if (embrague > 0) {
    printf("- Kit de embrague (Cantidad: %d) (Precio unitario: $180) (Precio total: $%d)\n", embrague, embrague*180);
}
if (faro > 0) {
    printf("- Faro (Cantidad: %d) (Precio unitario: $70) (Precio total: $%d)\n", faro, faro*70);
}


// Calcular el descuento
if (subtotal <= 100) {
    descuento = 0;
} else if (subtotal <= 500) {
    descuento = 0.05;
} else if (subtotal <= 1000) {
    descuento = 0.07;
} else {
    descuento = 0.1;
}

printf("\nRESUMEN\n");
printf("Subtotal: $%d\n", subtotal);
printf("Descuento: %.0f%%\n", descuento * 100);
printf("Total: $%.2f\n", subtotal * (1 - descuento));

// Reiniciar variables para una nueva factura
llantas = 0;
pastillas = 0;
embrague = 0;
faro = 0;
radiador = 0;
subtotal = 0;
descuento = 0.0;
break;

default:
    printf("\nOpción inválida\n");
}
}
return 0;
}

