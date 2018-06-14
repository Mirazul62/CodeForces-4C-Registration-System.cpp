#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n;
    map<string,int>sagol;
    while(n--)
    {
        cin>>str;
        if(sagol.count(str)==0)
        {
            cout<<"OK"<<endl;
            sagol[str]=1;

        }
        else
        {
            cout<<str<<sagol[str]<<endl;
            sagol[str]++;
        }
    }
}
