#include <windows.h>
#include <stdio.h>
#include<stdlib.h>
 
int main()
{
    HANDLE hOut;
 
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED);
    printf ("Red     \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |
                            FOREGROUND_INTENSITY);
    printf ("Red\n" );
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_GREEN);
    printf ("Green   \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_GREEN |
                            FOREGROUND_INTENSITY);
    printf ("Green\n");
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE);
    printf ("Blue    \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE |
                            FOREGROUND_INTENSITY);
    printf ("Blue\n");
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |
                            FOREGROUND_GREEN);
    printf ("Yellow  \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |
                            FOREGROUND_GREEN |
                            FOREGROUND_INTENSITY);
    printf ("Yellow\n");
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_GREEN |
                            FOREGROUND_BLUE);
    printf ("Cyan    \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_GREEN |
                            FOREGROUND_BLUE |
                            FOREGROUND_INTENSITY);
    printf ("Cyan\n");
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE |
                            FOREGROUND_RED);
    printf ("Magenta \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE |
                            FOREGROUND_RED |
                            FOREGROUND_INTENSITY);
    printf ("Magenta\n");
 
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |
                            FOREGROUND_GREEN |
                            FOREGROUND_BLUE);
    printf ("White   \n");
    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |
                            FOREGROUND_GREEN |
                            FOREGROUND_BLUE |
                            FOREGROUND_INTENSITY);
    printf ("White\n");
 
 
// Set text color as Yellow with white background.
   /* SetConsoleTextAttribute(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    FOREGROUND_INTENSITY              | // Set Text color
    FOREGROUND_RED | FOREGROUND_GREEN | // Text color as Yellow.
    BACKGROUND_INTENSITY              | // Set Background color
    BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE ); // White Bg*/
    return 0;
}