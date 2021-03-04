int getCount(structNode* head)
{
    if(head==NULL)
    return 0;
    else
    return 1 + getCount(head->next);

}