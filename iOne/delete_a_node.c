/* LeetCode 237: Delete Node in a Linked List  */ 
/* https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem */

// ref: https://stackoverflow.com/questions/19149719/dynamically-create-linked-list-in-c 
// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

typedef struct Node Node;

int main() 
{
    // get the no of elems user wants to create 
    // int n ;
    // scanf("%d", &n);

    // a linked list has a head 
    Node* ptr_head = NULL;
    Node* ptr_lastCreated = NULL;

    // create 3 items as Linked List and set the Head
    for(int i=0; i<3; i++)
    {
        // create an element from Heap 
        Node* aNode = malloc(sizeof(Node));
        if(i == 0)
        {
            // head should point to the first Node 
            ptr_head = aNode;

            aNode->val  = (i+1)*10;
            aNode->next = NULL;
        }
        else
        {
            aNode->val = (i+1)*10;
            aNode->next = NULL;

            Node* lastNodeCreated = (Node*)ptr_lastCreated;
            lastNodeCreated->next = aNode;
        }
        ptr_lastCreated = aNode;
    }


    // traverse through the list 
    // we only have ptr_head
    Node* ptr_track = (Node*)ptr_head;
    do
    {
        int valRead = ptr_track->val;
        printf("%lld : %d\n", ptr_track, valRead);

        ptr_track = ptr_track->next;
    }while(ptr_track != NULL);


    return 0;
}