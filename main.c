#include<ncurses.h>

int main()
{
    initscr();
refresh();

    printw("Hello, World!\n");

    //refresh();                  // Update the screen
    char ch;
    char command[1000]={0};
    int i=0;
    //refresh();
    bool quit=false;
    while(!quit){
        printw("VShell->> ");
        printw(command);

        switch(ch){
            
            case 'q': printw("exiting");
                        break;
            
            default:
                command[i++]=ch;
                //printw(command);
                break;

            
        }
        erase();

    }
    refresh();
    printw("thank you for using V shell ");
    getch(); 
    endwin();
    return 0;
}