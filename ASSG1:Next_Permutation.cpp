vector<int> Solution::nextPermutation(vector<int> &A)
{

    int n=A.size();
    int i;
    for(i=n-2;i>=0;i--)                                    //caught the position where A[i+1] is greater than A 
    {
        if(A[i+1]>A[i])
        {
            break;
        }
    }
    if(i==-1)                                           //reversing the remaining vector when it can't go to next permutation
    {
         int l=0;                                                   
         int r=n-1;
         while(l<r)
         {
             int temp=A[r];
             A[r]=A[l];
             A[l]=temp;
             l++;
             r--;
         }
         return A;
    }
    int m=n-1;                                              //swapping the elements
    while(m>i)
    {
        if(A[m]>A[i])
        {
            int temp=A[m];
            A[m]=A[i];
            A[i]=temp;
            break;
        }
        m--;
    }
    int l=i+1;                                        //reversing the remaining vector            
    int r=n-1;
    while(l<r)
    {
        int temp=A[r];
        A[r]=A[l];
        A[l]=temp;
        l++;
        r--;
    }
    return A;
}

//Refer page 228-231, notebook 3
//T.C. for this code is O(N)
//S.C. for this code id O(1)
