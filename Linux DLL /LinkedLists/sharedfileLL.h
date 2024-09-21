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
