# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int var;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        var=1;
        for(int j=1;j<=2*n-1;j++)
        {
            if(i+var==n+1) cout<<k<<" ";
            else cout<<"  ";
            if(j>=n) var--;
            else var++;
        }
        cout<<endl;
    }
    

    return 0;
}