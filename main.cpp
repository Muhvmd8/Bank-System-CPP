#include <iostream>
#include "Global.h"
#include "clsLoginScreen.h"

int main()

{

    //clsMainScreen::ShowMainMenue();
    while (true)
    {
        if (!clsLoginScreen::ShowLoginScreen())
        {
            break;
        }
    }
   
    // Test Repo

    system("pause>0");
    return 0;
}