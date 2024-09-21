#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
    void * ptr = NULL;
    void (*aptr)();

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

    aptr();
}