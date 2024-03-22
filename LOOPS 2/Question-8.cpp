# include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,sum=1;
    for (int i = 1; i <=n; i++)
    {
        cout<<sum<<" "<<endl;
        a=b;
        b=sum;
        sum=a+b;
        
    }
    

}