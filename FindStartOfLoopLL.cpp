Node* low=head;
Node* high=head;

while(low!=NULL and high!=NULL and high->next!=NULL)
{
   low=low->next;
   high=high->next->next;
   if(low==high)
   {
      break;
    }
}
if(low!=head)
   return NULL;
low=head;
while(low!=high)
{
low=low->next;
high=high->next;
}
return low;
}