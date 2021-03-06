SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* temp =  create_singly_linked_list_node(data);
    temp->data=data;
    temp->next=NULL;
    
    if(head==NULL)
       head=temp;
       
    else {
        temp->data=data;
        SinglyLinkedListNode* p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        
        p->next=temp;
           
            
        
    
    }   
    
    return head;
  
    
    
    


}