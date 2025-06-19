#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    char pi[100] = "PI", ka[100] = "KA", chu[100] = "CHU!!!!";
    #ifdef _WIN32
        char *system_command = malloc(sizeof(char) * 120);
        system("cls");
        sprintf(system_command, "curl -s -O %s", argv[1]);
        // Sleep(100);    
        printf("%s", pi);
            Sleep(400);
            printf("%s", ka);
            Sleep(400);
            printf("%s", chu);
        system(system_command);
    #elif __linux__
        printf("siz linux tizimidasiz");
    #else
        printf("Bilmadim");
    #endif
}
