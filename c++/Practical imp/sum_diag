//Sum of all diagonal elements of a matrix with n<10



#include <iostream>
using namespace std;
class matrix{
    int n,mat[10][10],i,j;
    public:
    void read_matrix();
    void sum_matrix();
};

void matrix::read_matrix(){
    cout<<"Enter the size of the matrix 'n' (n*n,n<=10): "<<endl;
    cin>>n;
    cout<<"Enter the matrix: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
}

void matrix::sum_matrix(){
    float sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
            sum+=mat[i][j];
            }
        }
    }
    cout<<"The sum of all the elements in the matrix: "<<sum<<endl;
}

int main() {
    matrix m1;
    m1.read_matrix();
    m1.sum_matrix();

    return 0;
}

