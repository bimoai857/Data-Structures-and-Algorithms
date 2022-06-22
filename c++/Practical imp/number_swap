// swapping the data between two different classes using friend function.

#include <iostream>
using namespace std;
class value2;
class value1{
    int v1;
    public:
    void get_data(){
        cout<<"Enter the first value: ";
        cin>>v1;
    }
    void show_data(){
        cout<<"The first value: "<<v1<<endl;
    }
    friend void swap(value1 &x,value2 &y);
};

class value2{
    int v2;
    public:
    void get_data(){
        cout<<"Enter the second value: ";
        cin>>v2;
    }
    void show_data(){
         cout<<"The second value: "<<v2<<endl;
    }
    friend void swap(value1 &x,value2 &y);
};

void swap(value1 &x,value2 &y){
    int temp;
    temp=x.v1;
    x.v1=y.v2;
    y.v2=temp;
}

int main() {
   value1 a;
   value2 b;
   a.get_data();
   b.get_data();
   cout<<"Values before swapping: "<<endl;
   a.show_data();
   b.show_data();
   swap(a,b);
   cout<<"Values after swapping: "<<endl;
   a.show_data();
   b.show_data();
  

    return 0;
}
