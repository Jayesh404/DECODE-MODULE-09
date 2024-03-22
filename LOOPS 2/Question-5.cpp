# include <iostream>
using namespace std;

int main(){
    int x=4556;
    int k=x;
    int sum=0;
    while (k!=0)
    {
        int digit=k%10;
        if(digit%2==0) sum+=digit;
        k/=10;
    }
    cout<<sum;
    

}