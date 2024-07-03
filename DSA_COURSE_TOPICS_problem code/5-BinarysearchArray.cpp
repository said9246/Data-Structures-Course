#include<iostream>
using namespace std;
int arry[10],x,n;
int BinarySearch(int low, int high){
 while (low<=high)
 {
    int mid=(low+high)/2;
    if(arry[mid]==x){
        return mid;
    }
     else if(arry[mid]>x){
        high=mid-1;
    }
    else{
        low=mid +1;
    }
 }
 return -1;
 

}

main(){

    cout<<"enter size of an arry";
    cin>>n;

    cout<<"enter the number of element";
for (int i = 0; i < n; i++)
{
    cin>>arry[i];
}
cout<<"enter a number for seaerch";
cin>>x;

int result=BinarySearch(0,n-1);
if(result==-1){
    cout<<"element not found";
}else{
    cout<<"element found at index "<<result;
}

return 0;

}