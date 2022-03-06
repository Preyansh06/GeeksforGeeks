int i = arr[0], j=0;
    int jump=0;
   
   for ( i = 0; i < n;)
   {
       jump+=arr[i];
       i=arr[jump];
       j++;
       if(jump>n)
       {
           break;
       }
   }
   
    return j;
// not optimised
