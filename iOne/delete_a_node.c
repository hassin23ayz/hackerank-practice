/* LeetCode 237: Delete Node in a Linked List  */ 
/* https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem */

// gcc main.c -o main 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

typedef struct Node Node;


void traverse_through_list(Node* ptr_head)
{
    // traverse through the list 
    // we only have ptr_head
    Node* ptr_track = (Node*)ptr_head;
    do
    {
        int valRead = ptr_track->val;
        // printf("%lld : %d\n", ptr_track, valRead);
        printf("%d\n", valRead);

        ptr_track = ptr_track->next;
    }while(ptr_track != NULL);    
}

void delete_an_item(Node* ptr_head, int index)
{
    Node* ptr_track = ptr_head;
    Node* ptr_track_before;
    //go to the indexed elem 
    for(int i=1; i<index; i++)
    {
        ptr_track_before = ptr_track;
        ptr_track = (Node*)(ptr_track)->next;
    }
    Node* ptr_Target =  (Node*)(ptr_track)->next;

    // printf("%d", ptr_Target->val);
    // printf("%d", ptr_track_before->next->val);
    ptr_track_before->next->next = ptr_Target->next;

    free(ptr_Target);
}



int main() 
{
    // get the no of elems user wants to create 
    int n ;
    scanf("%d", &n);

    // a linked list has a head 
    Node* ptr_head = NULL;
    Node* ptr_lastCreated = NULL;

    // create n items as Linked List and set the Head
    for(int i=0; i<n; i++)
    {
        int userIn;
        scanf("%d", &userIn);
        // create an element from Heap 
        Node* aNode = malloc(sizeof(Node));
        if(i == 0)
        {
            // head should point to the first Node 
            ptr_head = aNode;

            aNode->val  = userIn;
            aNode->next = NULL;
        }
        else
        {
            aNode->val = userIn;
            aNode->next = NULL;

            Node* lastNodeCreated = (Node*)ptr_lastCreated;
            lastNodeCreated->next = aNode;
        }
        ptr_lastCreated = aNode;
    }


    traverse_through_list(ptr_head);

    delete_an_item(ptr_head, 2);

    // printf("----------------\n\r");

    traverse_through_list(ptr_head);
    return 0;
}