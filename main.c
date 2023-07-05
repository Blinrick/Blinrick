#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>


int main(){
    initscr();
    timeout(10);
    while(getch() == ERR)
    {
        ;
    }
    system("open hello.MP3");
    endwin();
    system("curl parrot.live");
}
