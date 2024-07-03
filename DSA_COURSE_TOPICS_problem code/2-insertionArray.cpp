//insertion elemnt at start 
#include<iostream>
using namespace std;
int main(){
////insert at start 
// int n,x;

// cout<<"enter size of array";
// cin>>n;
// int arry[n];
// cout<<"enter the number of element";
// for (int i = 0; i < n; i++)
// {
//     cin>>arry[i];
// }


// cout<<"enter the element to insert at beginng ";
// cin>>x;

// //inert element at start 
// for (int i = n; i> 0; i--)
// {
//     arry[i]=arry[i-1];
    
// }
//     arry[0]=x;
//     n++;

// cout<<"output of array :";
// for (int i = 0; i < n; i++)
// {
    
//     cout<<arry[i]<<endl;

    
// }
//-----------------------------------------------insert at any positon
// int n,x,pos;

// cout<<"enter size of array";
// cin>>n;
// int arry[n];
// cout<<"enter the number of element";
// for (int i = 0; i < n; i++)
// {
//     cin>>arry[i];
// }

// cout<<"enter the postion of element ";
// cin>>pos;
// cout<<"enter the element to insert  ";
// cin>>x;

// //inert element at any position 
// for (int i = n-1; i>=pos-1; i--)
// {
//     arry[i+1]=arry[i];
    
// }
//     arry[pos-1]=x;
//     n++;

// cout<<"output of array :";
// for (int i = 0; i < n; i++)
// {
    
//     cout<<arry[i]<<endl;

    
// }
//---------------------------------------insert at end
int n,x,i;

cout<<"enter size of array";
cin>>n;
  int* arry = new int[n + 1]; 

cout<<"enter the number of element";
for (int i = 0; i < n; i++)
{
    cin>>arry[i];
}

cout<<"enter the element to insert at end ";
cin>>x;
    arry[n]= x; 
    n++;

cout<<"output of array :";
for (int i = 0; i < n; i++)
{
    
    cout<< arry[i]<<endl;

    
}


    return 0;
}