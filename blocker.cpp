#include "blocker.h"

Blocker::Blocker()
{
    WindowBlocker();
    KeyBoardBlocker();

}

void Blocker::WindowBlocker(){
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
//    Sleep(5000);
//    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
}

void Blocker::KeyBoardBlocker(){
    BlockInput(true);
//    Sleep(5000);
//    BlockInput(false);
}
