#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODESLL, *PNODE, **PPNODE;

void UserInputSLL();
void InsertFirstSLL(PPNODE Head, int iNo);
void InsertLastSLL(PPNODE Head, int iNo);
void DeleteFirstSLL(PPNODE Head);
void DeleteLastSLL(PPNODE Head);
void DisplaySLL(PNODE Head);
int CountSLL(PNODE Head);
void InsertAtPosSLL(PPNODE Head, int iNo, int iPos);
void DeleteAtPosSLL(PPNODE Head, int iPos);

typedef struct nodedll
{
    int data;
    struct nodedll * next;
    struct nodedll * prev;
}NODEDLL, *PNODEDLL, **PPNODEDLL;

void UserInputDLL();
void InsertFirstDLL(PPNODEDLL Head, int iNo);
void InsertLastDLL(PPNODEDLL Head, int iNo);
void DeleteFirstDLL(PPNODEDLL Head);
void DeleteLastDLL(PPNODEDLL Head);
void DisplayDLL(PNODEDLL Head);
int CountDLL(PNODEDLL Head);
void InsertAtPosDLL(PPNODEDLL Head, int iNo, int iPos);
void DeleteAtPosDLL(PPNODEDLL Head, int iPos);
