#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        int ans=-1;
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                ans=i;
                break;
            }
        }
        if(ans>=0)
            cout<<"Present "<<ans<<endl;
        else
            cout<<"Not present"<<endl;

    }
    return 0;
}
