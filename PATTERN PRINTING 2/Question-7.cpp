#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=2;j<=n;j++)  // Observe j is from j==2
        {
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }

        cout<<endl;
    }

    for(int i=2;i<=n;i++) // i==2 not i==1
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==j) cout<<"* ";
            else if(i+j==2*n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}

