#include <iostream>
using namespace std;

int findSqrt(int n){
    int target=n;
    int start=0;
    int end=n;
    int mid= start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(mid*mid == target)
            return mid;

        if(mid * mid > target){
            end = mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<< endl;
    cin>>n;

    int ans=findSqrt(n);
    cout<<"Ans is "<<ans<<endl;

    //precision 

    int precision;
    cout<<"Enter number of floating digits in precision"<<endl;
    cin>>precision; 

   double step=0.1;
   double finalAns= ans;
    for(int i=0; i<precision; i++){
        for(double j=ans; j*j<=n; j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"Final ans is: "<< finalAns<<endl;
}