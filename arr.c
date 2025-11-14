#include <stdio.h>
void main()
{
    // int arr[5];
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d \n",arr[i]);
    // }

    // int ar[]={12,13,14,15,16};
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
        int n;
        printf("Enter the size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements of array:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        printf("Sum of array elements: %d\n\n",sum);
    
        printf("Array in reverse order is:\n");
        for(int i=n-1;i>=0;i--)
        {
            if(i!=0)
            printf("%d ",arr[i]);
            else
            printf("%d\n\n",arr[i]);
        }
        int max=0,smax=0,min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                smax=max;
                max=arr[i];
            }
            else if(arr[i]>smax && arr[i]!=max)
            {
                smax=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        printf("Second largest element: %d\n", smax);
        printf("Maximum element: %d\n", max);
        printf("Minimum element: %d\n", min);
       int c1=0,c2=0,c3=0;
       for(int i=0;i<n;i++)
       {
        if (arr[i]>0)
        {
            c1++;
        }
        else if(arr[i]<0)
        {
            c2++;
        }
        else{
            c3++;
        }
}
        printf("Positive numbers: %d\n", c1);
        printf("Negative numbers: %d\n", c2);
        printf("Zeroes: %d\n", c3);
        int t=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        printf("Array in ascending order:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
}