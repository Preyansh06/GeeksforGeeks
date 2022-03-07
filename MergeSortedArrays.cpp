// Gfg solution(passed all test cases) 
int i=n-1,j=0;
    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
        }
        else j++;   
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
//----------------------------------
//Brute force approach
// int i=n-1,j=0;
//    for(i=0;i<n;i++)
//    {
//      for(j=0;j<m;j++)
//      {
//         if(arr1[i]>arr2[j]){
//             swap(arr1[i],arr2[j]);
//      }
    
//     }
//     sort(arr1,arr1+n);
//     sort(arr2,arr2+m);
     

