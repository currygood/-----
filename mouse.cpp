#include <stdio.h>
#include <Windows.h>
#include <WinUser.h>
#include <time.h>
//move  mouse
void moveMouse(int x, int y);

//down mouse left
void clickMouse_left(int x,int y);

//down mouse right
void clickMouse_right(int x,int y);


int main()
{
    int leri;
    printf("write you want to down(left is 1,right is 2) and then move to you want to down:");
    scanf("%d",&leri);
    Sleep(2000);
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    if(leri==1)
    {
        clickMouse_left(cursorPos.x,cursorPos.y);
    }else if(leri==2)
    {
        clickMouse_right(cursorPos.x,cursorPos.y);
    }

    return 0;
}

//move  mouse
void moveMouse(int x, int y) {
    SetCursorPos(x, y);
}

//down mouse left
void clickMouse_left(int x,int y) {
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

//down mouse right
void clickMouse_right(int x,int y) {
    mouse_event(MOUSEEVENTF_RIGHTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, x, y, 0, 0);
}