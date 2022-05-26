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

int main()
{
    // Static memory allopcation
    NODE obj;

    // Dynamic memory allocation
    NODE *ptr = (NODE *)malloc(sizeof(NODE));

    obj.data = 11;      // Direct accessing operator .
    obj.next = NULL;

    ptr -> data = 11;       // Indirect accessing operator ->
    ptr -> next = NULL;

    return 0;
}