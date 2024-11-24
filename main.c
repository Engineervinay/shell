#include<ncurses.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define ctrl(x) ((x) & 0x1f)
int main()
{
    initscr();
    refresh();

    noecho();
    printw("Hello, World!\n");

    //refresh();                  // Update the screen
    int ch;
    char command[1000]={0};
    int i=0;
    //refresh();
    bool quit=false;
    while(!quit){
        
        printw("Shell->> ");
        if(strcmp(command,"quit")==0){
            break;
        }
        printw(command);
        ch=getch();
        
        switch(ch){
            
            case ctrl('q'): quit=true;
                        break;
            
            case KEY_ENTER:
                                                                                                  
            break;
            default:
                command[i++]=ch;
                //printw(command);
                break;

            
        }
        erase();

    }
    refresh();
    printw("thank you for using V shell : command is : %s",command);
    getch(); 
    endwin();
    return 0;
}