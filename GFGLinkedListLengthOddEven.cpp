while (head && head->next)  
    {  
        head = head->next->next;  
    }  
    if (!head)  
        return 0;  
    return 1;