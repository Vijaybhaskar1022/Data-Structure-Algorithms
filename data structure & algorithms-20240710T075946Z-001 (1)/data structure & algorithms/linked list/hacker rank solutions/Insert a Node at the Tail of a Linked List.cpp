SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode  *newnode=new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp=head;
    if(temp==nullptr)
    {
        return newnode;
    }
        else
        {
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            return head;
        }

}


