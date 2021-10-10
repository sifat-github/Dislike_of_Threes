#include<iostream>
using namespace std;
int main()
{
   int t;
   int k;
   cin>>t;
   int count;
   for(int j=1; j<=t; j++)
   {
       cin>>k;
        int i=1;
        int temp=0;
        int n=0;
       while(n<k){
       if(i%3!=0 && i%10!=3)
        {
            temp = i;
            n++;
        }
        i++;
   }
       count=(i-1);
       cout<<count<<endl;
   }
}
