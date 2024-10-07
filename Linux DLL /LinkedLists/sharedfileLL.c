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

void InsertFirstDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo)
{
    PNODEDCLL newn = NULL;

    newn = (PNODEDCLL)malloc(sizeof (NODEDCLL));
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }

    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;
        *Head = newn;
    }
    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;
}

void InsertLastDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo)
{
    PNODEDCLL newn = NULL;

    newn = (PNODEDCLL)malloc(sizeof (NODEDCLL));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }

    else
    {
        (*Tail) -> next = newn;
        newn -> prev = *Tail;
        (*Tail) = newn;
    }
    (*Tail) -> next = *Head;
    (*Head) -> prev = *Tail;
}

void DeleteFirstDCLL(PPNODEDCLL Head, PPNODEDCLL Tail)
{   
    PNODEDCLL temp = *Head;
    PNODEDCLL tempX = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }

    else if(*Head == *Tail)
    {
        free(*Head);
        
        *Head = NULL;
        *Tail = NULL;
    }

    else
    {
        (*Head) = (*Head) -> next;
        (*Tail) -> next = *Head;
        (*Head) -> prev = *Tail;
        free(temp);
    }
}

void DeleteLastDCLL(PPNODEDCLL Head, PPNODEDCLL Tail)
{   
    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }

    else if(*Head == *Tail)
    {
        free(*Head);
        
        *Head = NULL;
        *Tail = NULL;
    }

    else
    {
        *Tail = (*Tail) -> prev;
        free((*Tail) -> next);

        (*Head) -> prev = *Tail;
        (*Tail) -> next = *Head;
    }
}

void DisplayDCLL(PNODEDCLL Head, PNODEDCLL Tail)
{   
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("|%d | <=> ", Head -> data);
            Head = Head -> next;
        } while (Head != Tail -> next);

        printf("\n");
    }
    else
    {
        printf("Linked List is empty \n");
    }

}

int CountDCLL(PNODEDCLL Head, PNODEDCLL Tail)
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

void InsertAtPosDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo, int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    
    PNODEDCLL newn = NULL;
    PNODEDCLL temp = *Head;

    iLength = CountDCLL(*Head, *Tail);

    if((iPos < 1) || (iPos > iLength +1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirstDCLL(Head, Tail, iNo);
    }

    else if(iPos == iLength +1)
    {
        InsertLastDCLL(Head, Tail, iNo);
    }

    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn = (PNODEDCLL)malloc(sizeof (NODEDCLL));
        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtPosDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    
    PNODEDCLL temp = *Head;
    PNODEDCLL tempX = NULL;

    iLength = CountDCLL(*Head, *Tail);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirstDCLL(Head, Tail);
    }

    else if(iPos == iLength)
    {
        DeleteLastDCLL(Head, Tail);
    }

    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        tempX = temp -> next -> prev;
        free(tempX);
        temp -> next -> prev = temp;
    }
}

void UserInputDCLL()
{   

    printf("--------------------------------Doubly Circular Linked List--------------------------------\n");

    PNODEDCLL First = NULL;
    PNODEDCLL Last = NULL;

    int iRet = 0;

    InsertFirstDCLL(&First, &Last, 151);
    InsertFirstDCLL(&First, &Last, 121);
    InsertFirstDCLL(&First, &Last, 101);
    InsertFirstDCLL(&First, &Last, 51);
    InsertFirstDCLL(&First, &Last, 21);
    InsertFirstDCLL(&First, &Last, 11);
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

    InsertLastDCLL(&First, &Last, 201);\
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

    DeleteFirstDCLL(&First, &Last);
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

    DeleteLastDCLL(&First, &Last);
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

    InsertAtPosDCLL(&First, &Last, 69, 3);
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

    DeleteAtPosDCLL(&First, &Last, 3);
    DisplayDCLL(First, Last);
    iRet = CountDCLL(First, Last);
    printf("Count of nodes in DCL is : %d\n", iRet);

}

void InsertFirstHA(PPNODEHA Head, int iNo)
{
    PNODEHA newn = NULL;

    newn = (PNODEHA)malloc(sizeof (NODEHA));

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

int SearchFirstOcc(PNODEHA Head, int No)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head -> data == No)
        {   
            iCnt++;
            return iCnt;
        }   
        iCnt++;
        Head = Head -> next;
    }
    return FALSE;
}

int SearchLastOcc(PNODEHA Head, int No)
{
    int iCnt = 0;
    int iNo = iCnt;

    while(Head != NULL)
    {
        if(Head -> data == No)
        {      
            iCnt++;
            iNo = iCnt;
            Head = Head -> next; 
        }
        iCnt++;
        Head = Head -> next;
    }
    return iNo;
} 

int Addition(PNODEHA Head)
{   
    int Add = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;
        Add = Add + iNo;
        Head = Head -> next;
    }

    return Add;
}

int Maximum(PNODEHA Head)
{
    int iMax = 0;

    while(Head != NULL)
    {   
        Head -> data;
        if(iMax < Head -> data)
        {
            iMax = Head -> data;
        }
        Head = Head -> next;
    }
    return iMax;
}

int Minimum(PNODEHA Head)
{   
    int iMin = Head -> data;

    while(Head != NULL)
    {   
        if(Head -> data < iMin)
        {
            iMin = Head -> data;
        }
        Head = Head -> next;
    }
    return iMin;
}

void Perfect(PNODEHA Head)
{
    int iCnt = 0;
    int iSum = 0;
    int iNo = 0;

    printf("Perfect Number is : ");

    while(Head != NULL)
    {   
        iNo = Head -> data;
        iSum = 0;

        for(iCnt = 1; iCnt <= iNo /2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo && iNo != 0)
        {
            printf("%d ", iNo);
        }
        Head = Head->next;
    }
    printf("\n");
}

void Prime(PNODEHA Head)
{
    int iCnt = 0;
    int iNo = 0;
    int iPrime = 0;

    printf("Prime numbers are : ");

    while (Head != NULL)
    {
        iNo = Head->data;
        iPrime = 1;  

        if (iNo < 2)
        {
            iPrime = 0;  // Numbers less than 2 are not prime
        }
        else
        {
            // Check divisibility from 2 to sqrt(iNo)
            for (iCnt = 2; iCnt * iCnt <= iNo; iCnt++)
            {
                if (iNo % iCnt == 0)
                {
                    iPrime = 0;  // Not prime
                    break;
                }
            }
        }

        if (iPrime)
        {
            printf("%d ,", iNo);  
        }

        Head = Head->next;
    }
    printf("\n");
}

int EvenAddition(PNODEHA Head)
{
    int iNo = 0;
    int iAdd = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        if(iNo %2 ==0)
        {
            iAdd = iNo + iAdd;
        }

        Head = Head -> next;
    }

    return iAdd;
}

int SecondMax(PNODEHA Head)
{
    int iNo = 0;
    int iMax1 = 0;
    int iMax2 = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        if(( Head -> data > iMax1))
        {   
            iMax2 = iMax1;
            iMax1 = Head -> data;
        }
        else if(Head -> data > iMax2 && Head -> data < iMax1)
        {
            iMax2 = Head -> data;
        }
        Head = Head -> next;
    }
    return iMax2;
}

void SumDigit(PNODEHA Head)
{
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d ", iSum);
        iSum = 0;
        Head = Head -> next;
    }
    printf("\n");
}

void Revserse(PNODEHA Head)
{
    int iNo = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d", iDigit);
            iNo = iNo / 10;
        }
        printf(" ");
        Head = Head -> next;
    }
    printf("\n");
}

void Pallindrome(PNODEHA Head)
{
    int iDigit = 0;
    int iReverse = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = (iReverse * 10)+iDigit;
            iNo = iNo / 10;
        }

        if(iReverse == Head -> data)
        {
            printf("%d ", iReverse);
        }
        iReverse = 0;
        Head = Head -> next;
    }
    printf("\n");
}

void Product(PNODEHA Head)
{
    int iDigit = 0;
    int iMult = 1;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit != 0)
            {
                iMult = iMult * iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d ", iMult);
        iMult = 1;
        Head = Head -> next;
    }
    printf("\n");
}

void SmallDigit(PNODEHA Head)
{
    int iNo = 0;
    int iDigit = 0;
    int iSmall = 1;

    while(Head != NULL)
    {
        iNo = Head -> data;
        iSmall = 9;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d ", iSmall);
        iSmall = 9;
        Head = Head -> next;
    }
    printf("\n");
}

void LargeDigit(PNODEHA Head)
{
    int iNo = 0;
    int iDigit = 0;
    int iLarge = 1;

    while(Head != NULL)
    {
        iNo = Head -> data;
        iLarge = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d ", iLarge);
        iLarge = 0;
        Head = Head -> next;
    }
    printf("\n");
}

void DisplayHA(PNODEHA Head)
{
    while(Head != NULL)
    {
        printf("|%d | -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void AssignmentInput()
{
    printf("--------------------------------Assignment Linked List--------------------------------\n");

    PNODEHA First = NULL;
    int iRet = 0;
    int iValue1 = 0;
    
    InsertFirstHA(&First, 71);
    InsertFirstHA(&First, 70);
    InsertFirstHA(&First, 60);
    InsertFirstHA(&First, 40);
    InsertFirstHA(&First, 100);
    InsertFirstHA(&First, 50);
    InsertFirstHA(&First, 28);
    InsertFirstHA(&First, 40);
    InsertFirstHA(&First, 30);
    InsertFirstHA(&First, 7);
    InsertFirstHA(&First, 20);
    InsertFirstHA(&First, 10);
    InsertFirstHA(&First, 6);

    DisplayHA(First);
    printf("Enter the element which you want to search \n");
    scanf("%d", &iValue1);
    iRet = SearchFirstOcc(First, iValue1); 
    if(iRet == FALSE)
    {
        printf("Element not found \n");
    }
    else
    {
        printf("First Element is occured at : %d\n", iRet);
    }

    iRet = 0;
    iValue1 = 0;

    printf("Enter the element which you want to search \n");
    scanf("%d", &iValue1);
    iRet = SearchLastOcc(First, iValue1); 
    if(iRet == 0)
    {
        printf("Element not found \n");
    }
    else
    {
        printf("Last Element is occured at : %d\n", iRet);
    }

    iRet = 0;
    iRet = Addition(First);
    printf("Addition of linkedlist elements is : %d\n", iRet);

    iRet = 0;
    iRet = Maximum(First);
    printf("Maximum element in the linked list is : %d\n", iRet);

    iRet = 0;
    iRet = Minimum(First);
    printf("Minimum element in the linked list is : %d\n", iRet);

    Perfect(First);
    Prime(First);

    iRet = 0;
    iRet = EvenAddition(First);
    printf("Even addition of Even elements is : %d\n", iRet);

    iRet = 0;
    iRet = SecondMax(First);
    printf("Second Maximum Element is : %d\n", iRet);

    SumDigit(First);
    Revserse(First);
    Pallindrome(First);
    Product(First);
    SmallDigit(First);
    LargeDigit(First);
}
