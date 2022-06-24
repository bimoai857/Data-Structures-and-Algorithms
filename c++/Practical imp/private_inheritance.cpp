//private inheritance.
//public and protected members of base becomes private in derived class.
//The private members are not inherited.


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

class D:private B{
    int k;
    public:
    void sum(){
        get_data();
        show_data();
        cout<<"Enter the value of k: ";
        cin>>k;
        cout<<"The sum of y,z and k is "<<y+z+k<<endl;
    }
};
int main() {
   D d1;
  
   d1.sum();

    return 0;
}
