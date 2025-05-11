#include<iostream>
using namespace std;

int binary_search(int *a,int h,int k){
    int l=0,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]<k)
        {l=mid+1;
        }
        else
        {h=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    while(k--){
        int num;
        cin >> num;
        if(binary_search(a,n,num)!=-1)
        {cout << "YES" << endl;
}


      else


        {cout << "NO" << endl;
        }
    }

    return 0;
}
