#include<windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
main()
{
    int x=40,y=25;
    char ch;
    gotoxy(x,y);
    printf("Himanshu Yadav");
    while(1)
    {
        ch=getch();
        switch (ch)
        {

            case 'a':
            x--;
            break;
            case 's':
            x++;
            break;
            case 'w':
            y--;
            break;
            case 'z':
            y++;
            break;
            case 27:
            exit(0);
        }
          system("cls");
          gotoxy(x,y);
          printf("Himanshu Yadav");

    }
 }
