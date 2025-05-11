#include <iostream>

using namespace std;

int binary_search(int arr[],int h,int num){
    int mid;
    int l=0;
    int res=0;
    while(l<=h){
         mid=(l+h)/2;
        if(arr[mid]==num){
            return mid;
        }
       else if(arr[mid]<=num){
            res=mid;
            l=mid+1;

        }
        else {
            h = mid - 1;
        }

    }

return res;

}

int main()
{
  int n,k;
  cin>>n>>k;
  int num;
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
