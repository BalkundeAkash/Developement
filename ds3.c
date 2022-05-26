/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Memory Allocation
//  Description :       Used to perform LL
//  Input :             Integer, Integer
//  Output :            Integer
//  Date :              19/04/2022
//  Author :            Akash Dilip Balkunde
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

// Structre declaration
struct node
{
    int data;               // 4
    struct node *next;      // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// Juna naw             Nawin naw
// struct node              NODE
// struct node *            PNODE
// struct node **           PPNODE

int main()
{
    // Static memory allopcation
    NODE obj;

    // Dynamic memory allocation
    PNODE ptr = (PNODE)malloc(sizeof(NODE));

    obj.data = 11;      // Direct accessing operator .
    obj.next = NULL;

    ptr -> data = 11;       // Indirect accessing operator ->
    ptr -> next = NULL;

    return 0;
}