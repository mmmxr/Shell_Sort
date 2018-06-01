#include <stdio.h>
void shellsort(int arr[],int len)
{
    if(arr==NULL||len<=0)
    {
        return;
    }
    int gap=len/2;
    for(;gap>0;gap/=2)
    {
        int bound=gap;
        for(;bound<len;bound++)
        {
            int bound_value=arr[bound];
            int cur=bound;
            for(;cur>=gap;cur-=gap)
            {
                if(arr[cur-gap]>bound_value)
                {
                    arr[cur]=arr[cur-gap];
                }
                else
                {
                    break;
                }
            }
            arr[cur]=bound_value;
        }
    }
}
int main()
{
    int arr[]={1,4,5,9,7,3,2,6,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    shellsort(arr,len);
    int i=0;
    for(;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
}
