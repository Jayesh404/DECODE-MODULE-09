# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int l = n; l >=i; l--)
        {
            cout<<"  ";
        }
        
        for(int k=i;k>=1;k--)
        {
            cout<<(char)(k+64)<<" ";
        }
        for (int j=2;j<=i;j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}