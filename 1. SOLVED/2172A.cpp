#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    cin>>arr[i];
    sort(arr,arr+3);
    int min=arr[0];
    int max=arr[2];
    if(abs(min-max)>=10)
    cout<<"check again"<<endl;
    else
    cout<<"final "<<arr[1]<<endl;
}