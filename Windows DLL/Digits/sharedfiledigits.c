#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

__declspec(dllexport) void CheckZero()
{
    int iNo = 0;
    int iDigit = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CheckZero \n");

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bRet = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    if(bRet == TRUE)
    {
        printf("0 is presnt in the number \n");
    }
    else
    {
        printf("0 is not presnt in the number \n");
    }
}

__declspec(dllexport) void ReverseDisplay()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function ReverseDisplay \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d ", iDigit);
        iNo = iNo / 10;
    }
    printf("\n");
}

__declspec(dllexport) void CountTwo()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CountTwo \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit ==2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of 2 in digit is %d\n", iCnt);
}

__declspec(dllexport) void CountFour()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CountFour \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit ==4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of 4 in digit is %d\n", iCnt);
}

__declspec(dllexport) void CountLess6()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CountLess6 \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if((iDigit >3) && (iDigit <6))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of >3 and <6 in digit is %d\n", iCnt);
}

__declspec(dllexport) void CountEven()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CountEven \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2==0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of even in digit is %d\n", iCnt);
}

__declspec(dllexport) void CountOdd()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function CountOdd \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 !=0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of odd in digit is %d\n", iCnt);
}

__declspec(dllexport) void Between3and7()
{
    int iNo = 0;
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function Between3and7 \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if((iDigit >3 )&& (iDigit <7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Frequency of Between 3 and 7 in digit is %d\n", iCnt);
}

__declspec(dllexport) void Multiple()
{
    int iNo = 0;
    int iDigit = 0;
    int iMul = 1;

    printf("Enter a Number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Function Multiple \n");

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    printf("Multiplication of digit is %d\n", iMul);
}

//1. gcc -shared -o sharedfiledigits.dll sharedfiledigits.c
//2. gcc -o Myexe clientdigits.c