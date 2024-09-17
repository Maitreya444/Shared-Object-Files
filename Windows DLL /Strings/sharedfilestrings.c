#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

__declspec(dllexport) void CountCapital(char * str)
{
    int iCount = 0;

    while(*str !='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }

    printf("Captial Characters are : %d\n", iCount);
}

__declspec(dllexport) void CountSmall(char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iCount++;
        }
        str++;
    }

    printf("Small Characters are : %d\n", iCount);
}

__declspec(dllexport) void CountDifference(char * str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while(*str !=0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCount++;
        }
        else if ((*str >='a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        str++;
    }
    printf("Difference is : %d\n", iSmallCount - iCapitalCount);
}

__declspec(dllexport) void CheckVowels(char * str)
{    
    BOOL flag = FALSE;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a') || (*str == 'E') || (*str == 'e') || (*str == 'I') || (*str == 'i') || (*str == 'O') || (*str == 'o') || (*str == 'U') || (*str == 'u'))
        {
            flag = TRUE;
            break;
        }
        str++;
    }

    if (flag == FALSE)
    {
        printf("FALSE \n");
    }
    else
    {
        printf("TRUE \n");
    }
}

__declspec(dllexport) void ReverseDisplay(char * str)
{   
    char * end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

__declspec(dllexport) void LowerCase(char * str)
{   
    char * cptr = str;
    const char * Temp = cptr;
    
    while(*Temp != '\0')
    {
        if((*Temp >= 'A') && (*Temp <= 'Z'))
        {   
            //printf("In IF \n");
            printf("%c", *Temp + 32);
        }
        else
        {
            printf("%c",*Temp);
        }
        Temp++;
    }
    printf("\n");
}

__declspec(dllexport) void UpperCase(char *str)
{   
    char * cptr = str;
    const char * Temp = cptr;
    
    while(*Temp != '\0')
    {
        if((*Temp >= 'a') && (*Temp <= 'z'))
        {   
            //printf("In IF \n");
            printf("%c", *Temp - 32);
            //printf("%c",*Temp);
        }
        else
        {
            printf("%c",*Temp);
        }
        Temp++;
    }
    printf("\n");
}

__declspec(dllexport) void ToggleCase(char * str)
{   
    int Gap = 'a' - 'A';
    printf("Toggle\n");
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + Gap;
            printf("%c",*str);
        }
        else if (*str >='a' && *str <='z')
        {
            *str = *str - Gap;
            printf("%c", *str);
        }
        str++;
    }
    printf("\n"); 
}

__declspec(dllexport) void DisplayDigits(char * str)
{
    while(*str != '\0')
    {
        if((*str >= '0')&&(*str <='9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

__declspec(dllexport) void WhiteSpaces(char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    printf("Count of White Spaces is : %d\n", iCount);
}

__declspec(dllexport) void TakeInput()
{
    char arr1[20];

    printf("Enter a String \n");
    fgets(arr1, sizeof(arr1), stdin);

    CountCapital(arr1);
    CountSmall(arr1);
    CountDifference(arr1);
    CheckVowels(arr1);
    ReverseDisplay(arr1);
    LowerCase(arr1);
    UpperCase(arr1);
    ToggleCase(arr1);
    DisplayDigits(arr1);
    WhiteSpaces(arr1);
}

__declspec(dllexport) void ChkChar(char * str, char ch)
{   
    BOOL bFlag = FALSE;
    while(*str != '\0')
    {
        if((*str) == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }

    if(bFlag == FALSE)
    {
        printf("%c is absent in the string\n", ch);
    }
    else
    {
        printf("%c is present in the string\n", ch);
    }
}

__declspec(dllexport) void CountChar(char * str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str) == ch)
        {
            iCount++;
        }
        str++;
    }
    printf("Count of %c in the string is %d\n", ch,iCount);
}

__declspec(dllexport) void FirstChar(char * str, char ch)
{
    int iCount = -1;

    while(*str != '\0')
    {
        iCount++;
        if((*str) == ch)
        {
            break;
        }
        str++;
    }

    printf("First occurance of %c was at index %d\n", ch, iCount);
}

__declspec(dllexport) void LastChar(char * str, char ch)
{
    int iCount = 0;
    int iCnt = -1;

    while(*str != '\0')
    {
        iCnt++;
        if((*str) == ch)
        {
            iCount = iCnt;
        }
        str++;
    }
    printf("Last occourance of %c in the string was at index %d\n", ch, iCount);
}

__declspec(dllexport) void TakeInput2()
{
    char arr2[40];
    char cValue = '\0';

    printf("Enter a String \n");
    fgets(arr2, sizeof(arr2), stdin);

    printf("Enter a character you want to check \n");
    scanf("%c", &cValue);

    ChkChar(arr2, cValue);
    CountChar(arr2, cValue);
    FirstChar(arr2, cValue);
    LastChar(arr2, cValue);
}

__declspec(dllexport) void StrNCatX(char * str1, char * str2, int iNo)
{
    int iCount = 0;

    char * temp1 = str1;
    char * temp2 = str2;

    while(*temp2 != '\0')
    {
        if((*temp2 >='A') && (*temp2 <='z'))
        {
            iCount++;
        }
        temp2++;
    }

    if(iNo >= iCount)
    {
        iNo = iCount;
    }

    while(*temp1 !='\0')
    {   
        printf("%c", *temp1);
        temp1++;
    }

    while (*str2 != '\0' && iNo > 0)
    {
        *temp1 = *str2; 
        temp1++;
        str2++;
        iNo--;

        printf("%c", *(temp1 - 1));  
    }
    printf("\n");
    *temp1 = '\0'; 
}

__declspec(dllexport) void StrEql(char * str1, char * str2)
{   
    BOOL bFlag = TRUE;

    while((*str1 != '\0') && (*str2 != '\0'))
    {   
        if(*str1 != *str2)
        {   
            bFlag = FALSE;
            break;
        }
        str1++;
        str2++;
    }

    if (*str1 != '\0' || *str2 != '\0')
    {
        bFlag = FALSE;
    }

    // Print result
    if (bFlag == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
}

__declspec(dllexport) void StrNCmpX(char * str1, char * str2, int iNo)
{   
    BOOL bFlag = TRUE;

    while((*str1 !='\0')&&(*str2 != '\0') && iNo > 0)
    {
        if((*str1 != *str2))
        {
            bFlag = FALSE;
        }
        str1++;
        str2++;
        iNo--;
    }

    if(bFlag == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }
}

__declspec(dllexport) void TakeInput3()
{   
    char arr0[10];
    char arr1[30];
    char arr2[30];
    int iValue = 0;

    fgets(arr0, sizeof(arr0), stdin);

    printf("Enter 1st string \n");
    fgets(arr1, sizeof(arr1), stdin);

    printf("Enter 2nd string \n");
    fgets(arr2, sizeof(arr2), stdin);

    printf("Enter a number \n");
    scanf("%d", &iValue);

    StrNCatX(arr1, arr2, iValue);
    StrEql(arr1, arr2);
    StrNCmpX(arr1, arr2, iValue);
}