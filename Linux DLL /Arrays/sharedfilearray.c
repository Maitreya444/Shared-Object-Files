#include<stdio.h>
#include<stdlib.h>
#include "sharedfilearray.h"
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void UserInput()
{
    int iSize = 0;
    int iCnt = 0;
    int * ptr = NULL;

    printf("Enter number of Elements \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize* sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        exit;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements in the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    Summation(ptr, iSize);
    DivisibleBy5(ptr, iSize);
    EvenDivisibleBy5(ptr, iSize);
    DivisibleBy3And5(ptr, iSize);
    Multiples11(ptr, iSize);
    EvenFrequency(ptr, iSize);
    DifferentFrequency(ptr, iSize);
    Check11(ptr, iSize);
    Frequency11(ptr, iSize);
    OddProduct(ptr, iSize);
    Maximum(ptr, iSize);
    Minimum(ptr, iSize);
    SmallBigDifference(ptr, iSize);
    CheckDigits(ptr, iSize);
    DigitSum(ptr, iSize);
    Pallindrome(ptr, iSize);

    free(ptr);

}

void Summation(int Arr[], int iLength)
{
    int iCnt = 0;
    int Odd = 0;
    int Even = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] %2 ==0)
        {
            Even = Even + Arr[iCnt];
        }
        else
        {
            Odd = Odd + Arr[iCnt];
        }
    }
    printf("Summation is : %d\n", Even - Odd);
}

void DivisibleBy5(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers Divisble by 5 are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 ==0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

void EvenDivisibleBy5(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers which are even divisble by 5 are : ");
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 ==0) &&(Arr[iCnt] % 5==0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

void DivisibleBy3And5(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers which are divisble by 3 and 5 are : ");
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 3 ==0) &&(Arr[iCnt] % 5==0))
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
    printf("\n");
}

void Multiples11(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers Multiples of 11 are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 ==0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

void EvenFrequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Even Frequency are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 ==0)
        {
            iCount++;
        }
    }
    printf("%d\n",iCount);
}

void DifferentFrequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int EvenCount = 0;
    int OddCount = 0;
    int Result = 0;

    printf("Difference between frequency of even and odd numbers are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] %2 ==0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }
    Result = EvenCount - OddCount;
    printf("%d\n", Result);
}

void Check11(int Arr[], int iLength)
{
    int iCnt = 0;
    int bRet = FALSE;

    printf("Checking if 11 is present in Array or not : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bRet = TRUE;
            break;
        }
    }
    if(bRet != TRUE)
    {
        bRet = FALSE;
    }

    if(bRet == TRUE)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is absent \n");
    }
}

void Frequency11(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Frequency of 11 in Array is : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    printf("%d\n", iCount);
}

void UserInput2()
{
    int iSize = 0;
    int * ptr = NULL;
    int iValue = 0;
    int iCnt = 0;

    printf("Enter the size of array you want \n");
    scanf("%d", &iSize);

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to load memory \n");
    }

    printf("Enter the Elements in the array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements from the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");
    
    FrequencyNo(ptr, iSize, iValue);
    CheckNo(ptr,iSize, iValue);
    FirstOccurance(ptr, iSize, iValue);
    LastOccurance(ptr, iSize, iValue);

    free(ptr);
}

void FrequencyNo(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iCount ++;
        }
    }
    printf("Frequency of %d in array is: %d\n", iNo, iCount);
}

void CheckNo(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int bRet = FALSE;
    
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRet = TRUE;
            break;
        }
    }

    if(bRet != TRUE)
    {
        bRet = FALSE;
    }

    if(bRet == TRUE)
    {
        printf("%d : is presnt \n", iNo);
    }
    else
    {
        printf("%d : is absent \n", iNo);
    }
}

void FirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int bRet = FALSE;
    
    printf("First occurance is ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRet = TRUE;
            break;
        }
    }

    if(bRet != TRUE)
    {
        bRet = FALSE;
    }

    if(bRet == TRUE)
    {
        printf("found at : %d index \n", iCnt);
    }
    else
    {
        printf("of element %d not found \n", iNo);
    }
}

void LastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = 0;
    int bRet = FALSE;
    
    printf("Last occurance is ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            bRet = TRUE;
        }
    }

    if(bRet != TRUE)
    {
        bRet = FALSE;
    }

    if(bRet == TRUE)
    {
        printf("found at : %d index \n", iIndex);
    }
    else
    {
        printf("of element %d not found \n", iNo);
    }
}

void UserRange()
{
    int iCnt = 0;
    int * ptr = NULL;
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the size of array you want \n");
    scanf("%d", &iSize);

    printf("Enter the elements \n");

    ptr = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the starting value \n");
    scanf("%d", &iValue1);

    printf("Enter Ending value \n");
    scanf("%d", &iValue2);

    printf("Elements in the array are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }

    printf("\n");

    DisplayRange(ptr, iSize, iValue1, iValue2);
}

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    
    printf("Elements from %d to %d are ", iStart , iEnd);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

void OddProduct(int Arr[], int iLength)
{
    int iCnt = 0;
    int iOddMul = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] %2 !=0)
        {
            iOddMul = iOddMul * Arr[iCnt];
        }
    }

    printf("Product of Odd Multiple is : %d\n", iOddMul);
}

void Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    printf("Maximum element is : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("%d\n", iMax);
}

void Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[iCnt];

    printf("Minimum element is : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("%d\n", iMin);
}

void SmallBigDifference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iBig = 0;
    int iSmall = Arr[iCnt];

    printf("Difference between Smallest and Biggest number is : ");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iBig)
        {
            iBig = Arr[iCnt];
        }
        else if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    printf("%d\n", iBig - iSmall);
}

void CheckDigits(int Arr[], int iLength)
{
    int iDigit = 0;
    int iCount = 0;
    int iCnt = 0;
    int iTemp = 0;

    printf("Elements which has atleast 3 digits in array are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        iTemp = Arr[iCnt];
        iCount = 0;

        while(iTemp !=0)
        {
            iDigit = iTemp % 10;
            iTemp = iTemp / 10;
            iCount ++;

            if((iCount >=3))
            {
                printf("%d\t", Arr[iCnt]);
                iCount = 0;
            }
        }
    }
    printf("\n");
}

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iTemp = 0;

    printf("Summation of digits are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];

        while(iTemp !=0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        printf("%d\t", iSum);
        iSum = 0;
    }
    printf("\n");
}

void UserDualArray()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int iCnt = 0;
    int * ptr1 = NULL;
    int * ptr2 = NULL;

    printf("Enter the size of array1 you want to enter \n");
    scanf("%d", &iSize1);
    
    ptr1 = (int*)malloc(iSize1 * sizeof(int));

    if(ptr1 == NULL)
    {
        printf("Unable to allocate the memory \n");
        exit(-1);
    }

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d", &ptr1[iCnt]);
    }

    printf("Elements from array 1 are : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%d\t", ptr1[iCnt]);
    }
    printf("\n");

    printf("Enter the size of array2 you want to enter \n");
    scanf("%d", &iSize2);

    ptr2 = (int*)malloc(iSize2 * sizeof(int));

    if(ptr2 == NULL)
    {
        printf("Unable to allocate the memory \n");
        exit(-1);
    }

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d", &ptr2[iCnt]);
    }

    printf("Elements from array 2 are : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d\t", ptr2[iCnt]);
    }
    printf("\n");

    MyArray(ptr1, iSize1, ptr2, iSize2);
}

void MyArray(int Arr1[], int iLength1, int Arr2[], int iLength2)
{
    int iCnt = 0;

    printf("Elements from Array1 are : ");
    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        printf("%d\t", Arr1[iCnt]);
    }
    printf("\n");

    printf("Elements from Array2 are : ");
    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        printf("%d\t", Arr2[iCnt]);
    }
    printf("\n");
}

void Pallindrome(int Arr[], int iLength)
{   
    printf("Pallindrome Function \n");
    int iStart = 0;
    int iEnd = iLength - 1;

    printf("Pallindrome Function \n");

    // Checking from the start and end towards the center
    while (iStart < iEnd) 
    {
        if (Arr[iStart] != Arr[iEnd]) 
        {
            printf("Not a palindrome \n");
            return; // Exit 
        }
        iStart++;
        iEnd--;
    }

    printf("It is a palindrome \n");
}
