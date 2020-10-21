#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR F1");
    printf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");
    getch();
    system("COLOR F3");
    printf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    getch();
    return 0;
}
