#include<stdio.h>
#include<stdlib.h>
#include"sharedfileLL.h"

void InsertFirstSLL(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof (NODESLL));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLastSLL(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof (NODESLL));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> next = NULL;
    }
}

void DeleteFirstSLL(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }

    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    
    else
    {
        *Head = temp -> next;
        free(temp);
    }
}

void DeleteLastSLL(PPNODE Head)
{
    PNODE temp = *Head;
    PNODE tempX = NULL;

    if(*Head == NULL)
    {
        return;
    }

    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }

    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        tempX = temp -> next -> next;
        free(tempX);
        temp -> next = NULL;
    }
}

void DisplaySLL(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d |-> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int CountSLL(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }

    return iCount;
}

void InsertAtPosSLL(PPNODE Head, int iNo, int iPos)
{
    int iLength = 0;
    iLength = CountSLL(*Head);
    int iCnt = 0;

    PNODE temp = *Head;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iLength +1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirstSLL(Head, iNo);
    }

    else if (iPos == iLength +1)
    {
        InsertLastSLL(Head, iNo);
    }

    else
    {
        for(iCnt = 0; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn = (PNODE)malloc(sizeof (NODESLL));
        newn -> data = iNo;
        newn -> next = NULL;

        newn -> next = temp->next;
        temp -> next = newn;
    }
}

void DeleteAtPosSLL(PPNODE Head, int iPos)
{
    int iLength = 0;
    int iCnt = 0;

    PNODE temp = *Head;
    PNODE tempX = NULL;

    iLength = CountSLL(*Head);

    if((iPos < 1) || (iPos > iLength +1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirstSLL(Head);
    }

    else if(iPos == iLength +1)
    {
        DeleteLastSLL(Head);
    }

    else
    {
        for(iCnt = 0; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> next -> next;
        free(tempX);
    }
}

void UserInputSLL()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirstSLL(&First, 151);
    InsertFirstSLL(&First, 121);
    InsertFirstSLL(&First, 101);
    InsertFirstSLL(&First, 51);
    InsertFirstSLL(&First, 21);
    InsertFirstSLL(&First, 11);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

    InsertLastSLL(&First, 201);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

    DeleteFirstSLL(&First);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

    DeleteLastSLL(&First);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

    InsertAtPosSLL(&First, 69, 3);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

    DeleteAtPosSLL(&First, 3);
    DisplaySLL(First);
    iRet = CountSLL(First);
    printf("Count of nodes in SLL is : %d\n", iRet);

}