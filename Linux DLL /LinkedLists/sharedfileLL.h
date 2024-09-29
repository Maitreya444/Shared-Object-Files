#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

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

typedef struct nodescll
{
    int data;
    struct nodescll * next;
}NODESCLL, *PNODESCLL, **PPNODESCLL;

void UserInputSCLL();
void InsertFirstSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo);
void InsertLastSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo);
void DeleteFirstSCLL(PPNODESCLL Head, PPNODESCLL Tail);
void DeleteLastSCLL(PPNODESCLL Head, PPNODESCLL Tail);
void DisplaySCLL(PNODESCLL Head, PNODESCLL Tail);
int CountSCLL(PNODESCLL Head, PNODESCLL Tail);
void InsertAtPosSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iNo, int iPos);
void DeleteAtPosSCLL(PPNODESCLL Head, PPNODESCLL Tail, int iPos);

typedef struct nodedcll
{
    int data;
    struct nodedcll * next;
    struct nodedcll * prev;
}NODEDCLL, *PNODEDCLL, **PPNODEDCLL;

void UserInputDCLL();
void InsertFirstDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo);
void InsertLastDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo);
void DeleteFirstDCLL(PPNODEDCLL Head, PPNODEDCLL Tail);
void DeleteLastDCLL(PPNODEDCLL Head, PPNODEDCLL Tail);
void DisplayDCLL(PNODEDCLL Head, PNODEDCLL Tail);
int CountDCLL(PNODEDCLL Head, PNODEDCLL Tail);
void InsertAtPosDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iNo, int iPos);
void DeleteAtPosDCLL(PPNODEDCLL Head, PPNODEDCLL Tail, int iPos);

typedef struct nodeha
{
    int data;
    struct nodeha * next;
}NODEHA, *PNODEHA, **PPNODEHA;

void AssignmentInput();
void DisplayHA(PNODEHA Head);
int SearchFirstOcc(PNODEHA Head, int No);
int SearchLastOcc(PNODEHA Head, int No);
int Addition(PNODEHA Head);
int Maximum(PNODEHA Head);
int Minimum(PNODEHA Head);
