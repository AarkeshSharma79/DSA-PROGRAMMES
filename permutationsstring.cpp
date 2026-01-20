// finding all the permutations of the an strings given all element of the string are unique.
// variable number of call depending on size of the string
#include<iostream>
#include<string>
using namespace std;
void permutations(string ans,string original)
{
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++)
    {
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(ans+ch,left+right);
    }
}
int main()
{
    string str="abcd";
    permutations("",str);
    int fact=1;
    for(int i=1;i<=str.length();i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    //c ka idx hai 2 ,string len=5,(0-4)
    // string left=str.substr(0,2);//here 2 is lenght of substring in left side;
    // cout<<left<<endl;
    // string right=str.substr(2+1);
    // cout<<right<<endl;
}