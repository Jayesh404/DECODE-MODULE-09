# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int z=1;z<=2*n-1;z++)
    {
        cout<<z<<" ";
    }
    cout<<endl;
    int m=n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"  ";
        }
        for(int l=m+1-i;l>=1;l--)
        {
            cout<<l<<" ";
    
        }
        cout<<endl;
    }
    

    return 0;
}