#include <windows.h>

using namespace std;

int ScreenHeight, ScreenWidth, x, y;
 
void GetScreenDim()
{
    ScreenHeight = GetSystemMetrics(SM_CYSCREEN);
    ScreenWidth = GetSystemMetrics(SM_CXSCREEN);
}
 
void SetMousePos()
{
    x = rand() % ScreenHeight;
    y = rand() % ScreenWidth;
    
    SetCursorPos(x, y);
}
 
int main()
{
    FreeConsole();
    GetScreenDim();
    
    while(true)
    {
        SetMousePos();
        Sleep(50);
    }
}

