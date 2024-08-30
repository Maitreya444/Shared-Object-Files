#include<stdio.h>
#include<windows.h>

typedef void(*ptr)();

int main()
{
    HINSTANCE hinstLib;
    ptr CheckZero;
    ptr ReverseDisplay;
    ptr CountTwo;
    ptr CountFour;
    ptr CountLess6;
    ptr CountEven;
    ptr CountOdd;
    ptr Between3and7;
    ptr Multiple;

    //Load the dll
    hinstLib = LoadLibrary(TEXT("sharedfiledigits.dll"));
    if(hinstLib == NULL)
    {
        printf("Unable to load dll. \n");
        return -1;
    }

    CheckZero = (ptr)(GetProcAddress(hinstLib, "CheckZero"));
    if(CheckZero == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    ReverseDisplay = (ptr)(GetProcAddress(hinstLib, "ReverseDisplay"));
    if(ReverseDisplay == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CountTwo = (ptr)(GetProcAddress(hinstLib, "CountTwo"));
    if(CountTwo == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CountFour = (ptr)(GetProcAddress(hinstLib, "CountFour"));
    if(CountFour == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CountLess6 = (ptr)(GetProcAddress(hinstLib, "CountLess6"));
    if(CountFour == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CountEven = (ptr)(GetProcAddress(hinstLib, "CountEven"));
    if(CountEven == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CountOdd = (ptr)(GetProcAddress(hinstLib, "CountOdd"));
    if(CountEven == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    Between3and7 = (ptr)(GetProcAddress(hinstLib, "Between3and7"));
    if(CountEven == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    Multiple = (ptr)(GetProcAddress(hinstLib, "Multiple"));
    if(CountEven == NULL)
    {
        printf("Unable to find the function in DLL \n");
        FreeLibrary(hinstLib);
        return -1;
    }

    CheckZero();
    ReverseDisplay();   
    CountTwo();
    CountFour();
    CountLess6();
    CountEven();
    CountOdd();
    Between3and7();
    Multiple();

    FreeLibrary(hinstLib);

    return 0;
}