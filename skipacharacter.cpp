// skip a character or remove the all occurencees of "a" from a string or array
#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string original)
{// it more space 
    if(original==""){
    cout<<ans<<endl;
    return ;}
    if(original[0]!='a')
    removeChar(ans+original[0],original.substr(1));
    else
    removeChar(ans, original.substr(1));
}
int main()
{
    //  using loop 

    //  string str="aarkesh sharma";
    //  string s="";
    //  for(int i=0;i<str.length();i++)
    // {
    //    if(str[i]!='a')
    //     // s +=str[i];
    //     s.push_back(str[i]);
    // }
    // cout<<s;

    // using recurion 
    string str="aarkesh sharma";
    removeChar("", str);

}