# include <iostream>
# include <cmath>
using namespace std;

int main(){

    for (int i = 1; i <=500; i++)
    {
        int k=i;
        int l=i;
        int sum=0;
        while (k)
        {
            sum+=pow(k%10,3);
            k/=10;
        }
        if(sum==l) cout<<i<<" ";
        
    }
    

}