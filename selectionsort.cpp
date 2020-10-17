#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,i,j,t;
    cout<<"enter number of elements in the array\n";
    cin>>n;
    cout<<"enter elements \n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"selection sort";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }

        }
    }
    cout<<"sorted array\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
