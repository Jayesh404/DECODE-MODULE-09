# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int nsp1=1;
    for(int i=0;i<2*n-1;i++) cout<<"* ";
    cout<<endl;
    for (int i=2;i<=n;i++)
    {
        for(int j=n+1-i;j>=1;j--) cout<<"* ";
        for(int k=1;k<=nsp1;k++) cout<<"  ";
        for(int l=n+1-i;l>=1;l--) cout<<"* ";
        nsp1+=2;
        cout<<endl;
    }
    int m=n-1;
    int nsp2=2*(m-1)-1;
    for (int i=2;i<=m;i++)
    {
        for(int j=1;j<=i;j++) cout<<"* ";
        for(int k=nsp2;k>=1;k--) cout<<"  ";
        for(int l=1;l<=i;l++) cout<<"* ";
        nsp2=nsp2-2;
        cout<<endl;
    }
    for(int i=0;i<2*n-1;i++) cout<<"* ";

    return 0;
}