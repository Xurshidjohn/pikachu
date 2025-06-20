#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    #ifdef _WIN32
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
        printf("\nSUCCESSFULLY DOWNLOADED!!");
    #elif __linux__
        printf("siz linux tizimidasiz");
    #else
        printf("Bilmadim");
    #endif
}
