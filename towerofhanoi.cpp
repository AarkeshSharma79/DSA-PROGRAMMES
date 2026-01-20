#include<iostream>
#include<math.h>
using namespace std;
void TOH(int n,char s,char h,char d)
{
    if(n==0)
    return ;
    TOH(n-1,s,d,h);
    cout<< s<<" -> "<<d<<endl;
    TOH(n-1,h,s,d);
}
int main ()
{
    int n,t;
    cout<<"enter the number of the disk";
    cin>>n;
    TOH(n, 's', 'h','d');
    t=pow(2,n)-1;
    cout<<"total number of the move :-"<<t<<endl;
    

}