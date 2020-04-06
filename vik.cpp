#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,0,1,0,0};
    int n=sizeof(a)/sizeof(a[0]);
    int s_i=-1,ending_index=-1,zero=0,one=0,length=0, i,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]==0)
                zero++;
            if(a[j]==1)
                one++;
            if(zero==one)
            {
                if(length<j-i+1)
                 {
                    length=j-i+1;
                    ending_index=j;
                    s_i=i;
                 }
            }
        }
        zero=one=0;
    }
    cout<<"max length of subarray is "<<length<<" and its index is from "<<s_i<<" to "<<ending_index;

}
