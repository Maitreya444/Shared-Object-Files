#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

int main()
{
    void * ptr = NULL;
    void (*bptr)();
    void (*aptr)(int[], int);
    void (*cptr)(int[], int);
    void (*dptr)(int[], int);
    void (*eptr)(int[], int);
    void (*fptr)(int[], int);
    void (*gptr)(int[], int);
    void (*hptr)(int[], int);
    void (*iptr)(int[], int);
    void (*jptr)(int[], int);
    void (*kptr)();
    void (*lptr)(int[], int);
    void (*mptr)(int[], int);
    void (*nptr)(int[], int);
    void (*optr)(int[], int);
    void (*qptr)();
    void (*rptr)(int[], int, int, int);
    void (*sptr)(int[], int);
    void (*tptr)(int[], int);
    void (*uptr)(int[], int);
    void (*vptr)(int[], int);
    void (*wptr)(int[], int);
    void (*xptr)(int[], int);
    void (*yptr)();
    void (*zptr)(int[], int, int[], int);
    void (*aaptr)(int[], int);

    ptr = dlopen("/home/maitreya/Desktop/LSP/SharedLibrary/library2.so", RTLD_LAZY);
    if(ptr == NULL)
    {
        printf("Unable to load library \n");
        return -1;
    }

    bptr = dlsym(ptr, "UserInput");
    if(bptr == NULL)
    {
        printf("Unable to load the address of function bptr \n");
        return -1;
    }

    aptr = dlsym(ptr, "Summation");
    if(aptr == NULL)
    {
        printf("Unable to load the address of function  aptr \n");
        return -1;
    }

    cptr = dlsym(ptr, "DivisibleBy5");
    if(cptr == NULL)
    {
        printf("Unable to load the address of function cptr \n");
        return -1;
    }

    dptr = dlsym(ptr, "EvenDivisibleBy5");
    if(dptr == NULL)
    {
        printf("Unable to load the address of function dptr \n");
        return -1;
    }

    eptr = dlsym(ptr, "DivisibleBy3And5");
    if(eptr == NULL)
    {
        printf("Unable to load the address of function eptr \n");
        return -1;
    }

    fptr = dlsym(ptr, "Multiples11");
    if(fptr == NULL)
    {
        printf("Unable to load the address of function fptr \n");
        return -1;
    }

    gptr = dlsym(ptr, "EvenFrequency");
    if(gptr == NULL)
    {
        printf("Unable to load the address of function gptr \n");
        return -1;
    }

    hptr = dlsym(ptr, "DifferentFrequency");
    if(hptr == NULL)
    {
        printf("Unable to load the address of function hptr \n");
        return -1;
    }

    iptr = dlsym(ptr, "Check11");
    if(iptr == NULL)
    {
        printf("Unable to load the address of function iptr \n");
        return -1;
    }

    jptr = dlsym(ptr, "Frequency11");
    if(jptr == NULL)
    {
        printf("Unable to load the address of function jptr \n");
        return -1;
    }

    kptr = dlsym(ptr, "UserInput2");
    if(kptr == NULL)
    {
        printf("Unable to load the address of function kptr \n");
        return -1;
    }

    lptr = dlsym(ptr, "FrequencyNo");
    if(lptr == NULL)
    {
        printf("Unable to load the address of function lptr \n");
        return -1;
    }

    mptr = dlsym(ptr, "CheckNo");
    if(mptr == NULL)
    {
        printf("Unable to load the address of function mptr \n");
        return -1;
    }

    nptr = dlsym(ptr, "FirstOccurance");
    if(nptr == NULL)
    {
        printf("Unable to load the address of function nptr \n");
        return -1;
    }

    optr = dlsym(ptr, "LastOccurance");
    if(optr == NULL)
    {
        printf("Unable to load the address of function nptr \n");
        return -1;
    }

    qptr = dlsym(ptr, "UserRange");
    if(qptr == NULL)
    {
        printf("Unable to load the address of function qptr \n");
        return -1;
    }

    rptr = dlsym(ptr, "DisplayRange");
    if(rptr == NULL)
    {
        printf("Unable to load the address of function rptr \n");
        return -1;
    }

    sptr = dlsym(ptr, "OddProduct");
    if(sptr == NULL)
    {
        printf("Unable to load the address of function sptr \n");
        return -1;
    }

    tptr = dlsym(ptr, "Maximum");
    if(tptr == NULL)
    {
        printf("Unable to load the address of function tptr \n");
        return -1;
    }

    uptr = dlsym(ptr, "Minimum");
    if(uptr == NULL)
    {
        printf("Unable to load the address of function uptr \n");
        return -1;
    }

    vptr = dlsym(ptr, "SmallBigDifference");
    if(vptr == NULL)
    {
        printf("Unable to load the address of function vptr \n");
        return -1;
    }

    wptr = dlsym(ptr, "CheckDigits");
    if(wptr == NULL)
    {
        printf("Unable to load the address of function wptr \n");
        return -1;
    }

    xptr = dlsym(ptr, "DigitSum");
    if(xptr == NULL)
    {
        printf("Unable to load the address of function xptr \n");
        return -1;
    }

    yptr = dlsym(ptr, "UserDualArray");
    if(yptr == NULL)
    {
        printf("Unable to load the address of function yptr \n");
        return -1;
    }

    zptr = dlsym(ptr, "MyArray");
    if(zptr == NULL)
    {
        printf("Unable to load the address of function yptr \n");
        return -1;
    }

    aaptr = dlsym(ptr, "Pallindrome");
    if(aaptr == NULL)
    {
        printf("Unable to load the address of function aaptr \n");
        return -1;
    }

    bptr();
    kptr();
    qptr();
    yptr();

    return 0;
}