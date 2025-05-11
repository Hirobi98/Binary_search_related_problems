#include <iostream>

using namespace std;
int binary_search(int arr[],int h,int num){
int l=0;
int res=h+1;
int  mid;
while(l<=h){
        mid=(l+h)/2;


    if(arr[mid]==num){
        return mid;
    }
    else if(arr[mid]>=num){
         res=mid;
        h=mid-1;

    }
    else{
        l=mid+1;
    }
}
return res;


}

int main()
{
    int n,k,num;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while(k--){
        cin>>num;
        cout<<binary_search(arr,n,num)<<endl;

    }
    return 0;
}
