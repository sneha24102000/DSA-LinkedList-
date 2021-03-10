class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        // your code here
        if(!head)
          return false;
          
        
        Node* low = head;
        Node* high = head;
        
        while(high!=NULL && high->next!=NULL)
        {
            low=low->next;
            high=high->next->next;
            if(low==high)
            {
                return true;
            }
            
        }
        return false;
        
    }
};