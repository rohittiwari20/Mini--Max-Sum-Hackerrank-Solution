    // Function to find mini-max sum.
    
    long int minsum=0;
    long int maxsum=0;
    long int sum=0;
    int temp=arr[0];
    for(int i=0;i<arr_count;i++)
    {
        
        if(temp>arr[i])
        {
            temp=arr[i];
        }

    }
    int min=temp;
    temp=arr[0];
    for(int j=0;j<arr_count;j++)
    {
        if(temp<arr[j])
        {
            temp=arr[j];
        }
    
    }
    int max=temp;
    for(int i=0;i<arr_count;i++)
    {
        sum=sum+arr[i];
    }
    minsum=sum-max;
    maxsum=sum-min;
   
    printf("%ld %ld",minsum,maxsum);
