# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int m=1;m<=2*n-1;m++)
    {
        cout<<(char)(m+64)<<" ";
    }
    cout<<endl;
    int m=n-1;
    for(int i=1;i<=m;i++){
        int y=1;
        for(int j=m;j>=i;j--){
            cout<<(char)(y+64)<<" ";
            y++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
            y++;
        }
        for(int l=m;l>=i;l--){
            cout<<(char)(y+64)<<" ";
            y++;
        }
        cout<<endl;
    }
    

    return 0;
}