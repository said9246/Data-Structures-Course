#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;

void push(int x){
    if(top==n-1){
        cout<<"stack is full";
    }else{
        top++;
        stack[top]=x;
    }
}

void display(){
    if(top>=0){
        cout<<"stack element are "<<endl;
        for (int i = top; i >=0; i--)
        {
            cout<<stack[i]<<endl;
        }
        
    }else{
        cout<<"stack is empty";
    }
}

main(){

push(1);
push(2);
push(3);
push(4);
push(5);
display();
}