#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL) return NULL;
    LinkedListNode<int> *p=NULL,*c=head,*n=head->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL) n= n->next;
    }
    return p;
}