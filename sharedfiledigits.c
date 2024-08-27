#include<stdio.h>
#include "sharedfiledigits.h"
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void ReverseDisplayDigit()
{
    int iDigit = 0;
    int iNo = 0;

    printf("Enter a number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d\t", iDigit);
        iNo = iNo / 10;
    }
    printf("\n");
}

void CheckZero()
{
    int iDigit = 0;
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number \n");
    scanf("%d", &iNo);

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bRet =  TRUE;
        }
        iNo = iNo / 10;
    }

    if(bRet == TRUE)
    {
        printf("Digits contain 0 in it \n");
    }
    else
    {
        printf("Digits don't contain 0 in it \n");
    }
}

void CountTwo()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Frequency of 2's in digits is : %d\n", iCnt);
}

void CountFour()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Frequency of 4's in digits is : %d\n", iCnt);
}

void CountSix()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Frequency of numbers < 6 is : %d\n", iCnt);
}

void CountEven()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Count of even number is : %d\n", iCnt);
}

void CountOdd()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Count of odd number is : %d\n", iCnt);
}

void CountBetween3and7()
{
    int iNo = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if((iDigit >3) && (iDigit < 7)) 
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    printf("Count numbers between 3 and 7 is : %d\n", iCnt);
}

void DigitsMultiply()
{
    int iNo = 0;
    int iStore = 1;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iStore = iDigit * iStore;
        iNo = iNo / 10;
    }
    
    printf("Count numbers between 3 and 7 is : %d\n", iStore);
}

void Summation()
{
    int iNo = 0;
    int iOdd = 0;
    int iEven = 0;
    int iAns = 0;
    
    printf("Enter a number \n");
    scanf("%d", &iNo);

    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 ==0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    iAns = iEven - iOdd;
    
    printf("Summation of digit is : %d\n", iAns);
}