class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if (!head)
        return NULL;
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;
        
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if (next != NULL)
        head->next = reverse(next, k);
        
    return prev;  
    
    }
        
};