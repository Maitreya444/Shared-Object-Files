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

    ptr = dlopen("/home/maitreya/Desktop/LSP/SharedLibrary/library3.so", RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("Unable to load library \n");
        return -1;
    }

    aptr = dlsym(ptr, "UserInputSLL");
    if(aptr == NULL)
    {
        printf("Unable to load the address of function aptr \n");
        return -1;
    }

    bptr = dlsym(ptr, "UserInputDLL");
    if(bptr == NULL)
    {
        printf("Unable to load the address of function bptr \n");
        return -1;
    }

    cptr = dlsym(ptr, "UserInputSCLL");
    if(cptr == NULL)
    {
        printf("Unable to load the address of function cptr \n");
        return -1;
    }

    dptr = dlsym(ptr, "UserInputDCLL");
    if(dptr == NULL)
    {
        printf("Unable to load the address of function dptr \n");
        return -1;
    }

    eptr = dlsym(ptr, "AssignmentInput");
    if(eptr == NULL)
    {
        printf("Unable to load the address of function eptr \n");
        return -1;
    }

    aptr();
    bptr();
    cptr();
    dptr();
    eptr();
}
