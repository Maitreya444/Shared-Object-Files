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

    printf("--------------------------------Singly Linear Linked List--------------------------------\n");
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
    iRet = 0;

}

void InsertFirstDLL(PPNODEDLL Head, int iNo)
{
    PNODEDLL newn = NULL;

    newn = (PNODEDLL)malloc(sizeof (NODEDLL));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    
    else
    {
        (*Head) -> prev = newn;
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLastDLL(PPNODEDLL Head, int iNo)
{
    PNODEDLL newn = NULL;
    PNODEDLL temp = *Head;

    newn = (PNODEDLL)malloc(sizeof (NODEDLL));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

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
        newn -> prev = temp;
        newn -> next = NULL;
    }
}

void DeleteFirstDLL(PPNODEDLL Head)
{
    if(*Head == NULL)
    {
        return;
    }

    else if ((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }

    else
    {
        (*Head) = (*Head) -> next;
        free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLastDLL(PPNODEDLL Head)
{
    PNODEDLL temp = *Head;

    if(*Head == NULL)
    {
        return;
    }

    else if ((*Head) -> next == NULL)
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
        temp -> next = temp -> next -> next;
        free(temp -> next);
        temp -> next = NULL;
    }
}

void DisplayDLL(PNODEDLL Head)
{
    while(Head != NULL)
    {
        printf("|%d | <=> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int CountDLL(PNODEDLL Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head =Head -> next;
    }
    return iCount;
}

void InsertAtPosDLL(PPNODEDLL Head, int iNo, int iPos)
{
    int iLength = 0;
    int iCnt = 0;

    PNODEDLL newn = NULL;
    PNODEDLL temp = *Head;

    newn = (PNODEDLL)malloc(sizeof (NODEDLL));

    iLength = CountDLL(*Head);

    if((iPos < 1) || (iPos > iLength +1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirstDLL(Head, iNo);
    }

    else if (iPos == iLength+1)
    {
        InsertLastDLL(Head, iNo);
    }

    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> data= iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtPosDLL(PPNODEDLL Head, int iPos)
{
    int iLength = 0;
    iLength = CountDLL(*Head);
    int iCnt = 0;
    PNODEDLL temp = *Head;
    PNODEDLL tempX = NULL;

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirstDLL(Head);
        return;
    }

    else if (iPos == iLength)
    {
        DeleteLastDLL(Head);
        return;
    }

    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next; 
        }

        // Storing the node to be deleted
        tempX = temp->next;

        // Updating the next and prev pointers
        temp->next = tempX->next;  // Linking to the node after the one being deleted

        if (tempX->next != NULL)   // If it's not the last node
        {
            tempX->next->prev = temp;  // Updating the prev pointer of the next node
        }

        free(tempX);
    }
}


void UserInputDLL()
{   
    PNODEDLL First = NULL;
    int bRet = 0;
    printf("--------------------------------Doubly Linear Linked List--------------------------------\n");

    InsertFirstDLL(&First, 121);
    InsertFirstDLL(&First, 111);
    InsertFirstDLL(&First, 101);
    InsertFirstDLL(&First, 51);
    InsertFirstDLL(&First, 21);
    InsertFirstDLL(&First, 11);

    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);

    InsertLastDLL(&First, 201);
    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);

    DeleteFirstDLL(&First);
    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);

    DeleteLastDLL(&First);
    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);

    InsertAtPosDLL(&First, 69, 3);
    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);

    DeleteAtPosDLL(&First, 3);
    DisplayDLL(First);
    bRet = CountDLL(First);
    printf("Count of nodes in DLL is : %d\n", bRet);
}


void InsertFirstSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo)
{
    PNODESCLL newn = NULL;

    newn = (PNODESCLL)malloc(sizeof (NODESCLL));
    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }

    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
    (*Tail) -> next = *Head;
}

void InsertLastSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo)
{
    PNODESCLL newn = NULL;

    newn = (PNODESCLL)malloc(sizeof (NODESCLL));
    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }

    else
    {
        (*Tail) -> next = newn;
        (*Tail) = (*Tail) -> next;
    }
    (*Tail) -> next = *Head;
}

void DeleteFirstSCLL(PPNODESCLL Head, PPNODESCLL Tail)
{
    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }

    else if((*Head) -> next == NULL && (*Tail) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Head) = (*Head) -> next;
        free((*Tail) -> next);
        (*Tail) -> next = *Head;
    }
}

void DeleteLastSCLL(PPNODESCLL Head, PPNODESCLL Tail)
{   
    PNODESCLL temp = *Head;

    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }

    else if((*Head) -> next == NULL && (*Tail) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }

    else
    {
        while(temp -> next != (*Tail))
        {
            temp = temp -> next;
        }
        free(*Tail);
        (*Tail) = temp;
        (*Tail) -> next = *Head;
    }
}

void DisplaySCLL(PNODESCLL Head, PNODESCLL Tail)
{   
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("|%d | -> ", Head -> data);
            Head = Head -> next;
        } 
        while (Head != Tail -> next);
        printf("\n");
    }

    else
    {
        printf("Linked List is empty \n");
    }
}

int CountSCLL(PNODESCLL Head, PNODESCLL Tail)
{
    int iCount = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCount++;
            Head = Head -> next;
        } while (Head != Tail -> next);
        return iCount;
    }

    else
    {
        return 0;
    }
}

void InsertAtPosSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo, int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    iLength = CountSCLL(*Head, *Tail);

    PNODESCLL newn = NULL;
    PNODESCLL temp = *Head;

    if((iPos < 1) && (iPos > iLength +1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirstSCLL(Head, Tail, iNo);
    }
    
    else if(iPos == iLength +1)
    {
        InsertLastSCLL(Head, Tail, iNo);
    }
    
    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        
        newn = (PNODESCLL)malloc(sizeof (NODESCLL));
        newn -> data = iNo;
        newn -> next = NULL;

        newn -> next = temp -> next -> next;
        temp -> next = newn;
    }
}

void DeleteAtPosSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    iLength = CountSCLL(*Head, *Tail);

    PNODESCLL temp = *Head;
    PNODESCLL tempX = NULL;

    if((iPos < 1) && (iPos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirstSCLL(Head, Tail);
    }
    
    else if(iPos == iLength)
    {
        DeleteLastSCLL(Head, Tail);
    }

    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> next -> next;
        free(tempX);
    }
}

void UserInputSCLL()
{
    PNODESCLL First = NULL;
    PNODESCLL Last = NULL;
    int iRet = 0;

    printf("--------------------------------Singly Circular Linked List--------------------------------\n");

    InsertFirstSCLL(&First, &Last, 151);
    InsertFirstSCLL(&First, &Last, 121);
    InsertFirstSCLL(&First, &Last, 101);
    InsertFirstSCLL(&First, &Last, 51);
    InsertFirstSCLL(&First, &Last, 21);
    InsertFirstSCLL(&First, &Last, 11);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);

    InsertLastSCLL(&First, &Last, 201);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);

    DeleteFirstSCLL(&First, &Last);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);

    DeleteLastSCLL(&First, &Last);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);

    InsertAtPosSCLL(&First, &Last, 69, 3);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);

    DeleteAtPosSCLL(&First, &Last, 3);
    DisplaySCLL(First, Last);
    iRet = CountSCLL(First, Last);
    printf("Count of nodes in SCLL is : %d\n", iRet);
}
