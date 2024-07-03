#include<iostream>
using namespace std;
int main(){
// //deletion  at start 
// int n;
// cout<<"enter size of array";
// cin>>n;
// int arry[n];
// cout<<"enter the number of element";
// for (int i = 0; i < n; i++)
// {
//     cin>>arry[i];
// }


// //delete element at start 
// for (int i = 0; i<n-1; i++)
// {
//     arry[i]=arry[i+1];
// }
// n--;

// cout<<"output of array :";
// for (int i = 0; i < n; i++)
// {
    
//     cout<<arry[i]<<endl;

    
// }

//--------------------------------------------------------------------delete at  end

//deletion  at start 
int n;
cout<<"enter size of array";
cin>>n;
int arry[n];
cout<<"enter the number of element";
for (int i = 0; i < n; i++)
{
    cin>>arry[i];
}


//delete element at end 

n--;

cout<<"output of array :";
for (int i = 0; i < n; i++)
{
    
    cout<<arry[i]<<endl;

    
}















}