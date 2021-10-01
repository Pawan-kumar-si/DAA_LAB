#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int ans=-1;
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+size);
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int low=0,high=size-1;
        int key;
        cin>>key;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==key)
            {
                ans=mid+1;
                break;
            }
            else if(key<arr[mid])
                high=mid-1;
            else low=mid+1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
