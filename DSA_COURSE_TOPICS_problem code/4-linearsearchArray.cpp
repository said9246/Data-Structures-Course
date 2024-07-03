#include<iostream>
using namespace std;
int main(){
//deletion  at start 
int n,x,i;
cout<<"enter size of array";
cin>>n;
int arry[n];
cout<<"enter the number of element";
for (int i = 0; i < n; i++)
{
    cin>>arry[i];
}

cout<<"output of array :";
for (int i = 0; i < n; i++)
{
    
    cout<<arry[i]<<endl;

    
}

cout<<"entr element you want to search";
cin>>x;

//search element  
for ( i = 0; i<n; i++)
{
    if(arry[i]==x){
        cout<<"element found at index   "<<i ;
        break;
    }

}
if(i==n){
    cout<<"element not found";
}


}