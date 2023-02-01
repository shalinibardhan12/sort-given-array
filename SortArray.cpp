 #include<iostream>
using namespace std;
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SortArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the element of array"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    SortArray(arr,n);
    PrintArray(arr,n);
    return 0;
}