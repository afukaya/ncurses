#include <ncurses.h>

int main(){
    int ch;

    initscr();
    raw();
    keypad(stdscr,TRUE);
    noecho();
    printw("Press any character to see it in bold.\n");
    ch = getch();
    if(ch == KEY_F(2)){
      printw("F2 key pressed");  
    } else {
        printw("The key pressed was ");
        attron(A_BOLD);
        printw("%c.\n",ch);
        attroff(A_BOLD);
    }
    refresh();
    getch();
    endwin();

    return 0;
}