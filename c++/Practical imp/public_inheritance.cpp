//Public inheritance.
//The public member of the base class becomes public and protected member becomes protected in base class. The private member is not inherited.
//By default when we derive a class from a base class then the inheritance is private.

#include <iostream>
using namespace std;

class B{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    void get_data(){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
        cout<<"Enter the value of z: ";
        cin>>z;
        
    }
    void show_data(){
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"Z: "<<z<<endl;
    }
};

class D:public B{
    int k;
    public:
    void sum(){
        cout<<"Enter the value of k: ";
        cin>>k;
        cout<<"The sum of y,z and k is "<<y+z+k<<endl;
    }
};
int main() {
   D d1;
   d1.get_data();
   d1.show_data();
   d1.sum();

    return 0;
}
