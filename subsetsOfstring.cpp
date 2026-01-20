#include<iostream>
#include<string>
#include<vector>
using namespace std;
// by using the string but here str is modify every time 
// void subset(string s,string ori)
// {
//     if(ori==""){
//     cout<<s<<endl;
//     return ;}
//     subset(s+ori[0],ori.substr(1));
//     subset(s,ori.substr(1));
// }
// int main ()
// {
//     string str="abc";
//     subset("",str);
// }

// by using index  here no modification take place 
// void subset(string s,string ori,int idx)
// {
//     if(idx==ori.length()){
//     cout<<s<<endl;
//     return ;}
//     subset(s+ori[idx],ori,idx+1);
//     subset(s,ori,idx+1);
// }
// int main ()
// {
//     string str="abc";
//     subset("",str ,0);
// }

// now here we are going to store all the subset of string
void subset(string s,string ori,vector<string>& v)
{
    if(ori==""){
    v.push_back(s);
    return ;}
    subset(s+ori[0],ori.substr(1),v);
    subset(s,ori.substr(1),v);
}
int main ()
{
    string str="abc";
    vector<string>v;
    subset("",str,v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}