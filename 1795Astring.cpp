#include<bits/stdc++.h>
using namespace std;

int chk_pairs(string s, string s1)
{
    int n = s.size();
    int i,j, count=0;
    for(i=0; i<n-2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(s[i+j]!=s1[j])
            {
                break;
            }
        }
        if(j==2)
        {
           // cout<<"yes";
            count++;
            //return 1;
        }
    }
    return count;
}
int count_pairs(string s)
{
    string s1 = "RR";
    string s2 = "BB";
    int s1_pairs = chk_pairs( s,s1) ;
    int s2_pairs = chk_pairs( s,s2) ;
    int s_pairs = s1_pairs+s2_pairs;
    return(s_pairs);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n >>m;
        string s,p;
        cin>>s;
        cin>>p;
        int s_pairs = count_pairs(s);
        int p_pairs = count_pairs(p);
        
        if(s[n-1]==p[m-1])
        {
            if(s_pairs>0 || p_pairs>0)
            cout<<"no"<<endl;
            else
            cout<<"yes"<<endl;
        }
        else
        { 
        if(s_pairs>=1 && p_pairs>=1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        }
    }
return 0;
}