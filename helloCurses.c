#include <ncurses.h>

int main(){
    initscr();                                                                  //Start the curses mode. Must be the first command at the interface area.
    printw("Hello World!");                                                     // Send a string to screen buffer.
    refresh();                                                                  // Send the screen buffer to the screen.
    getch();                                                                    // Wait for the user to press a key.
    endwin();                                                                   // Terminate the curses mode. 
    return 0;
}