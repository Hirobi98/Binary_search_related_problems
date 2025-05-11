#include <iostream>

using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;


                }

        }
    }




}

int bin_search_low(int arr[],int high,int l){
int low=0;
int mid;
int  ans=high;
while(low<=high){
    mid=(low+high)/2;
if(arr[mid]==l){
    return mid;
}
    else if(arr[mid]>l){
            ans=mid;
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}


return ans;

}

int bin_search_high(int arr[],int high,int r){
int low=0;
int mid;
int ans=high;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==r){
    return mid;
}

     if(arr[mid]<=r){
             ans=mid;
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}


return ans;

}
int main()
{
    int n,k;
    int l,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){


        cin>>arr[i];
    }
    sort(arr,n);
    cin>>k;
    while(k--){
        cin>>l>>r;
        int res=bin_search_high(arr,n,r)-bin_search_low(arr,n,l);
        if(res>0){
            cout<<res+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }


    return 0;
}
