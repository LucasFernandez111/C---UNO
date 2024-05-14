#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateFine(float speed);
void display(int radarOneCount, int radarTwoCount, int radarThreeCount, int radarFourCount, int totalFines, char maxLicensePlate[8], int maxFine);

int main()
{

    int radarNumber, fine, radarOneCount = 0, radarTwoCount = 0, radarThreeCount = 0, radarFourCount = 0, totalFines = 0, maxFine = 0;
    float speed;
    char licensePlate[8], option, maxLicensePlate[8];

    do
    {
        system("cls");

        do
        {
            printf("\n Ingrese numero de radar (1 - 4): ");
            scanf("%d", &radarNumber);

            switch (radarNumber)
            {
            case 1:
                radarOneCount++;
                break;

            case 2:
                radarTwoCount++;
                break;

            case 3:
                radarThreeCount++;
                break;

            case 4:
                radarFourCount++;
                break;

            default:
                printf("\n\n No existe dicho radar\n\n");
                break;
            }

        } while (radarNumber >= 5);

        printf("\n Ingrese velocidad del vehiculo (km/h): ");
        scanf("%f", &speed);

        printf("\n Ingrese patente del vehiculo: ");
        fflush(stdin);
        scanf("%s", licensePlate);

        fine = calculateFine(speed);

        system("cls");
        printf("\n\t\t\t--SE EXCEDIO LIMITE VELOCIDAD--");
        printf("\n\n\t Patente: (%s)", licensePlate);
        printf("\n\t Multa: $%d\n\n", fine);

        if (fine > maxFine)
        {
            maxFine = fine;
            strcpy(maxLicensePlate, licensePlate);
        }

        totalFines += fine;

        system("pause");
        system("cls");

        printf("\n\nDesea ingresar mas vehiculos? (s/n): ");
        fflush(stdin);
        scanf(" %c", &option);

    } while (option != 'n');

    display(radarOneCount, radarTwoCount, radarThreeCount, radarFourCount, totalFines, maxLicensePlate, maxFine);

    return 0;
}

int calculateFine(float speed)
{

    if (speed > 40 && speed <= 45)
        return 5000;

    if (speed > 45 && speed <= 60)
        return 8000;

    if (speed > 60)
        return 15000;

    return 0;
}

void display(int radarOneCount, int radarTwoCount, int radarThreeCount, int radarFourCount, int totalFines, char maxLicensePlate[8], int maxFine)
{

    system("cls");

    printf("\n\t\t\tCantidad fotomulta por radar");
    printf("\n\n\t\tRadar - [1]: %d", radarOneCount);
    printf("\n\t\tRadar - [2]: %d", radarTwoCount);
    printf("\n\t\tRadar - [3]: %d", radarThreeCount);
    printf("\n\t\tRadar - [4]: %d", radarFourCount);

    printf("\n\n\t\tMonto total de multas: $%d", totalFines);
    printf("\n\n\t\tMonto Maximo de multa: $%d", maxFine);
    printf("\n\n\t\tPatente vehicular de maxima multa: (%s)", maxLicensePlate);
}

