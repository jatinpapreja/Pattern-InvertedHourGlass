#include<iostream>
using namespace std;
int main()
{ int n,eq_i; cin>>n;
    for(int i=0;i<=2*n;i++)
    {
        if(i<=n)eq_i=i;
        else eq_i=2*n-i;
        for(int j=n;j>=n-eq_i;j--) cout<<j<<" ";
        for(int j=1;j<=4*(n-eq_i)-2;j++) cout<<" ";
        for(int j=n-eq_i;j<=n;j++)
            if(j!=0) cout<<j<<" " ;
        cout<<endl;
    }
}
