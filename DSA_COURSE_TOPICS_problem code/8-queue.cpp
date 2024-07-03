#include <iostream>
using namespace std;

int Queue[5], n = 5, x, f = -1, r = -1;

void insert() {
    if (r == n - 1) {
        cout << "Queue is full" << endl;
    } else {
        if (f == -1) {
            f = 0;
        }
        cout << "Insert the element in Queue: ";
        cin >> x;
        r++;
        Queue[r] = x;
    }
}
void display() {
    if (f == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = f; i <= r; i++) {
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
}

void Delete(){
    if (f==-1)
    {
        cout<<"queue is empty";  
          }
          else
    

{
        cout<<"element deleted from Queue is "<<Queue[f]<<endl;
    if (f==r)
    {
        f=-1;
        r=-1;
    }
    else{
        f++;
    }
    
}
}


int main() {
    insert();
    insert();
    insert();
    insert();
    insert();
    Delete();
    Delete();
    Delete();

    display();
    return 0;
}
