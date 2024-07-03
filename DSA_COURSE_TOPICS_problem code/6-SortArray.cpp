#include<iostream>
using namespace std;
int main(){
//sortint an array 
int n,x,i,temp;
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
    cout<<arry[i]<<" - ";
}


for (int i = 0; i < n; i++)
{
    for (int j = i+1; j< n; j++)
    {
        if (arry[i]>arry[j])
        {
            temp=arry[i];
            arry[i]=arry[j];
            arry[j]=temp;
        }
        
    }
    
}
cout<<"sortied of array :";
for (int i = 0; i < n; i++)
{
    cout<<arry[i]<<" , ";
}


return 0;

}