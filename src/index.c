#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    #ifdef _WIN32
        #include <windows.h>
        char *system_command = malloc(sizeof(char) * 120);
        system("cls");
        sprintf(system_command, "curl --progress-bar -O %s", argv[1]);
            printf("\n");
    printf(" PIKACHU TERMINAL\n");
    printf("  (\\__/)\n");
    printf("  (o^.^)\n");
    printf("z_(\")(\") -> Pika Pika!\n\n");
    printf("Downloading started...\n");
        system(system_command);
        printf("\nSUCCESSFULLY DOWNLOADED!!\n");
    #elif __linux__
    char *system_command = malloc(sizeof(char) * 120);
        system("clear");
        sprintf(system_command, "curl --progress-bar -O %s", argv[1]);
            printf("\n");
    printf(" PIKACHU TERMINAL\n");
    printf("  (\\__/)\n");
    printf("  (o^.^)\n");
    printf("z_(\")(\") -> Pika Pika!\n\n");
    printf("Downloading started...\n");
        system(system_command);
        printf("\nSUCCESSFULLY DOWNLOADED!!\n");
    #else
        printf("Bilmadim");
    #endif
}
