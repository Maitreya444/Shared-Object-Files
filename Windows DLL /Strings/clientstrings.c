#include<stdio.h>
#include<windows.h>

typedef void(*ptr)();

int main()
{
    HINSTANCE hinstLib;
    ptr TakeInput;
    ptr TakeInput2;
    ptr TakeInput3;

    hinstLib = LoadLibrary(TEXT("sharedfilestrings.dll"));
    if(hinstLib == NULL)
    {
        printf("Unable to load the dll \n");
        return -1;
    }

    TakeInput = (ptr)(GetProcAddress(hinstLib, "TakeInput"));
    if(TakeInput == NULL)
    {
        printf("Unable to find the function in dll \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    TakeInput2 = (ptr)(GetProcAddress(hinstLib, "TakeInput2"));
    if(TakeInput2 == NULL)
    {
        printf("Unable to find the function in dll \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    TakeInput3 = (ptr)(GetProcAddress(hinstLib, "TakeInput3"));
    if(TakeInput3 == NULL)
    {
        printf("Unable to find the function in dll \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    TakeInput();
    TakeInput2();
    TakeInput3();
    FreeLibrary(hinstLib);
    
    return 0;
}