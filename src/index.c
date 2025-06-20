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
        for(int i = 0;i < 4;i++) {
            printf("PIKACHU!! PIKACHU!! PIKACHU!! PIKACHU!! PIKACHU!!\n");
            Sleep(100);
        }
        system(system_command);
        printf("\nSUCCESSFULLY DOWNLOADED!!");
    #elif __linux__
        printf("siz linux tizimidasiz");
    #else
        printf("Bilmadim");
    #endif
}
