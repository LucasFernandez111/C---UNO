#include <stdio.h>
#include <stdlib.h>

int queryStock();
int totalValue(int cant);
void showValue(int value);

int main() {
    int stockOne = 3, stockTwo = 3 , stockTree = 3, stock, total = 0, totalIpman = 0;
    int ipman1 = 0, ipman2 = 0, ipman3 = 0, film = 0, cantFilms = 0, value = 0, filmsBuy = 0;

    do {
        while (cantFilms < 3) {
            printf("Que pelicula llevara...\n\n");
            printf("(1) - IPMAN 1\n");
            printf("(2) - IPMAN 2\n");
            printf("(3) - IPMAN 3\n");
            printf("(0) - Dejar de comprar\n");

            printf("\nPelicula:");
            scanf("%d", &film);

            stock = queryStock(stockOne, stockTwo, stockTree);

            if (stock != 0) {
                switch (film) {
                    case 1:
                        if (ipman1 >= 1) {
                            printf("No se puede llevar mas de 1 de cada pelicula...\n");
                        } else {
                            printf("Se agrego IPMAN-1\n\n");
                            totalIpman++;
                            stockOne--;
                            ipman1++;
                            cantFilms++;
                            filmsBuy++;
                        }
                        break;

                    case 2:
                        if (ipman1 >= 2) {
                            printf("No se puede llevar mas de 1 de cada pelicula...\n");
                        } else {
                            printf("Se agrego IPMAN-2\n\n");
                            stockTwo--;
                            ipman2++;
                            cantFilms++;
                            filmsBuy++;
                        }
                        break;

                    case 3:
                        if (ipman1 >= 3) {
                            printf("No se puede llevar mas de 1 de cada pelicula...\n");
                        } else {
                            printf("Se agrego IPMAN-3\n\n");
                            stockTree--;
                            ipman3++;
                            cantFilms++;
                            filmsBuy++;
                        }
                        break;

                    case 0:
                        cantFilms = 3;
                }
                system("pause");
                system("cls");
            } else {
                cantFilms = 3;
            }
        }

        value = totalValue(filmsBuy);
        showValue(value);
        total += value;
        cantFilms = ipman1 = ipman2 = ipman3 = value = filmsBuy = 0;

    } while (stock != 0);

    printf("\n\nNo hay mas stock para dicha pelicula...");
    printf("\nCantidad de IPMAN-1: %d", totalIpman);
    printf("\nTotal Facturado: $%d", total);

    return 0;
}

int queryStock(int stock1, int stock2, int stock3) {
    if (stock1 <= 0 || stock2 <= 0 || stock3 <= 0) {
        return 0;
    }
    return 1;
}

int totalValue(int cant) {
    int value;
    if (cant != 3) {
        value = cant * 250;
    } else {
        value = 600;
    }
    return value;
}

void showValue(int value) {
    system("cls");
    printf("\nValor total: $%d\n", value);
    system("pause");
    system("cls");
}

