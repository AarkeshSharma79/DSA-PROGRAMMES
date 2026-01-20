#include<iostream>
#include<vector>
using namespace std;
void subsetarray(int arr[],int n,int idx, vector<int>v)// & nahi dena kyuki har bar naya vector banega
{
    if(idx==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsetarray(arr,n,idx+1,v);// here v is empty 
    v.push_back(arr[idx]);
    subsetarray(arr,n,idx+1,v);// here element is push in it

}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subsetarray(arr,n,0,v);
}