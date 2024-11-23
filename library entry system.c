#include <stdio.h>
#include <string.h>  // For `strtok` to handle newlines.
int main()
{
    int exit = 0;
    int userChoice;
    char studentName[20] = "";  // Initialize to avoid garbage values.
    char studentNumber[12] = "";
    char entryTiming[10] = "";

    while (!exit)
    {
        printf(" 1. Add Entry : \n");
        printf(" 2. Show Entry : \n");
        printf(" 3. Exit : \n \n");
        scanf(" %d", &userChoice);

        while (getchar() != '\n');
            

        switch (userChoice)
        {
        case 1:
            printf("enter name of student : \n");
            fgets(studentName, 20, stdin);
            strtok(studentName, "\n");

            printf("enter student phone number : \n");
            fgets(studentNumber, 12, stdin);
            strtok(studentNumber, "\n");

            printf("enter entry timing : \n");
            fgets(entryTiming, 10, stdin);
            strtok(entryTiming, "\n");

            break;
        case 2:
            printf("student name : %s \n", studentName);
            printf("student phone number : %s \n", studentNumber);
            printf("entry timing : %s \n \n", entryTiming);

            break;
        case 3:
            printf("the program will be end ! \n");
            exit = 1;
            break;
        default:
            printf(" wrong choice ! ");
            break;
        }
    }
    return 0;
}
