#include <stdio.h>
int main()
{
    FILE *file;
    struct ServiceRecord
    {
        char ownerName[50];
        char vehicleNumber[15];
        char serviceType[50];
        char serviceDate[12];
        float cost;
    };
    struct ServiceRecord paul;
    printf("Enter your Name : ");
    fgets(paul.ownerName, sizeof(paul.ownerName), stdin);

    printf("Enter your vehicle Number : ");
    fgets(paul.vehicleNumber, sizeof(paul.vehicleNumber), stdin);

    printf("Enter your service Type : ");
    fgets(paul.serviceType, sizeof(paul.serviceType), stdin);

    printf("Enter your service Date : ");
    fgets(paul.serviceDate, sizeof(paul.serviceDate), stdin);

    printf("Enter your cost : ");
    scanf("%f", &paul.cost);

    file = fopen("car.txt", "w");
    fprintf(file, "%s", paul.ownerName);
    fprintf(file, "%s", paul.vehicleNumber);
    fprintf(file, "%s", paul.serviceType);
    fprintf(file, "%s", paul.serviceDate);
    fprintf(file, "%f \n", paul.cost);

    fclose(file);

    return 0;
}
