#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR FC");
    printf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");
    getch();
    system("COLOR 6C");
    printf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    getch();
    return 0;
}
