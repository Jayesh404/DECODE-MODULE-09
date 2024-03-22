# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int nst=1;
    int nsp=n;
    for (int i=1; i<=2*n-1;i++)
    {
        for (int k=1;k<=nsp;k++)
        {
            cout<<" ";
        }
        if(i>=n) nsp++;
        else nsp--;
        for (int j=1;j<=nst;j++)
        {
            cout<<"*";
        }
        if(i>=n) nst--;
        else nst++;
        cout<<endl;
    }
    
    return 0;
}