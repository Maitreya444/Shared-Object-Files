#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
    void * ptr = NULL;
    void (*aptr)();
    void (*bptr)();
    void (*cptr)();
    void (*dptr)();
    void (*eptr)();
    void (*fptr)();
    void (*gptr)();
    void (*hptr)();
    void (*iptr)();
    void (*jptr)();

    ptr = dlopen("/home/maitreya/Desktop/LSP/SharedLibrary/library1.so", RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("Unable to load library \n");
        return -1;
    }

    aptr = dlsym(ptr, "ReverseDisplayDigit");
    if(aptr == NULL)
    {
        printf("Unable to load the address of function a\n");
        return -1;
    }

    bptr = dlsym(ptr, "CheckZero");
    if(bptr == NULL)
    {
        printf("Unable to load address of function b\n");
    }

    cptr = dlsym(ptr, "CountTwo");
    if(cptr == NULL)
    {
        printf("Unable to load the address of function c\n");
    }

    dptr = dlsym(ptr, "CountFour");
    if(dptr == NULL)
    {
        printf("Unable to load the address of function d \n");
    }

    eptr = dlsym(ptr, "CountSix");
    if(eptr == NULL)
    {
        printf("Unable to load the address of function e \n");
    }

    fptr = dlsym(ptr, "CountEven");
    if(fptr == NULL)
    {
        printf("Unable to load the address of function f \n");
    }

    gptr = dlsym(ptr, "CountOdd");
    {
        if(gptr == NULL)
        {
            printf("Unable to load the address of function g \n");
        }
    }

    hptr = dlsym(ptr, "CountBetween3and7");
    {
        if(hptr == NULL)
        {
            printf("Unable to load the address of function h \n");
        }
    }

    iptr = dlsym(ptr, "DigitsMultiply");
    {
        if(iptr == NULL)
        {
            printf("Unable to load the address of function i \n");
        }
    }

    jptr = dlsym(ptr, "Summation");
    {
        if(jptr == NULL)
        {
            printf("Unable to load the address of function j \n");          
        }
    }

    aptr();
    bptr();
    cptr();
    dptr();
    eptr();
    fptr();
    gptr();
    hptr();
    iptr();
    jptr();

    return 0;
}