#include <iostream>

using namespace std;

int main()
{
    int buytrue=0;
    int buy=0;
    int sell=1;
    int ar[]={100 , 180,260,310,40,535,695 };
    int profit=0;
    for(int i=1;i<sizeof(ar)/sizeof(ar[0]);i++){
        if(ar[i]-ar[buy]>profit){
           profit=ar[i]-ar[buy];
           sell=i;
           buytrue=buy;
        }
        if(ar[buy]>ar[i]){
            buy=i;
        }
    }
    cout<<ar[buytrue]<<endl<<sell<<endl<<profit;
    return 0;
}
